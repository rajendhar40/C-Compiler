%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "mips.c"
extern int yylineno;
extern char *yytext;


char id[15];

%}

%union
{
    int ival;
    double dval;
    char string[10];
}


%start program
%token BREAK RETURN
%token CHAR INT FLOAT BOOL
%token <ival> CONSTANT
%token TRUE FALSE
%token CONST STRING_LITERAL FCONST
%token STATIC
%token IF ELSE
%token FOR DO WHILE
%token VOID
%token DEC_OP INC_OP
%token <string> IDENTIFIER
%token PROCESSORS
%token PROCESSOR
%token ISA
%token CLOCKSPEED
%token L1MEMORY
%token L2MEMORY
%token NAME
%token ISRUNNING
%token SUBMITJOBS
%token GETCLOCKSPEED
%token RUN
%token DISCARD_JOB
%token LINK LINKBANDWIDTH LINKCAPACITY
%token STARTPOINT
%token ENDPOINT
%token BANDWIDTH
%token GETAVAILABLEMEMORY
%token MEMORY
%token GETMEMORY
%token JOB
%token JOB_ID
%token FLOPSREQUIRED
%token DEADLINE
%token MEMREQUIRED
%token AFFINITY
%token CLUSTER
%token TOPOLOGY
%token MEMORYTYPE
%token MEMSIZE
%token CHANNELCAPACITY

%nonassoc "then"
%nonassoc ELSE

%right ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN OR_ASSIGN AND_ASSIGN XOR_ASSIGN
%left OR_OP AND_OP LE_OP GE_OP EQ_OP NE_OP

%right '='
%left '*' '/' '%'
%left '+' '-'

%%
program : decList {printf("parsed successfully\n");};
decList : decList dec | dec ;
dec     : vardec|classdec| fundec ;

vardec  : typespecifier vardecList ';' ;
scopedvardec : scopedtypespecifier  vardecList ';' ;

vardecList  : vardecList ',' vardecInit | vardecInit ;
vardecInit : vardecId
             | vardecId '=' simpleExpr {addquad("=","",pop(),id);};
scopedtypespecifier : STATIC typespecifier | typespecifier ;

vardecId : IDENTIFIER{
                  int i;
              i=search_sym($1);
               if(i!=-1){
           printf("\n Multiple Declaration of Variable ");
           printf("%s\n",$1);
           }

              else{
                  if(type==0)
                    insert_sym($1,"int",0,1);
                  if(type==1)
                    insert_sym($1,"char",0,1);
                  if(type==2)
                    insert_sym($1,"float",0,1);
                  if(type==3)
                    insert_sym($1,"bool",0,1);
                  strcpy(id,$1);
                  }
                  }
         | IDENTIFIER '['CONSTANT']' {
                  int i;
              i=search_sym($1);
               if(i!=-1){
           printf("\n Multiple Declaration of Variable ");
           printf("%s\n",$1);
           }

              else{
                  if(type==0)
                    insert_sym($1,"int",0,$3);
                  if(type==1)
                    insert_sym($1,"char",0,$3);
                  if(type==2)
                    insert_sym($1,"float",0,$3);
                  if(type==3)
                    insert_sym($1,"bool",0,$3);
                  }
                  };
typespecifier : INT  {type=0;}
              | CHAR {type=1;}
              | FLOAT {type=2;}
              | BOOL {type=3;};

fundec : typespecifier IDENTIFIER {strcpy(quad[Index].label,$2); strcat(quad[Index].label,":"); insert_sym($2,"fun",0,0);
                                   Index++; } '(' params ')' stmt |
         IDENTIFIER {strcpy(quad[Index].label,$1); strcat(quad[Index].label,":"); insert_sym($1,"fun",0,0);
                                   Index++; }'(' params ')' stmt |
        VOID IDENTIFIER {strcpy(quad[Index].label,$2); strcat(quad[Index].label,":"); insert_sym($2,"fun",0,0);
                                   Index++; } '(' params ')' stmt ;
params : paramList | ;
paramList : paramList ',' paramtypeList | paramtypeList;
paramtypeList : typespecifier paramId;
paramId : IDENTIFIER | IDENTIFIER '[' ']' ;





classdec : mutable '=' class';' ;
class : Pclass|Jobclass|Memclass|Linkclass|Clusterclass ;
Pclass : PROCESSOR '(' ManP OptP')';
ManP : ISA '=' stringhandler ',' CLOCKSPEED '=' sumExpr ',' L1MEMORY '=' sumExpr;
OptP : ',' L2MEMORY '=' sumExpr SubOp | SubOp  ;
SubOp : ',' NAME '=' stringhandler | ;
stringhandler : mutable  |immutable;

Jobclass : JOB '(' JOB_ID '=' sumExpr ',' FLOPSREQUIRED '=' sumExpr ',' DEADLINE '=' sumExpr ','MEMREQUIRED '=' sumExpr ','AFFINITY '=' affinityhandler ')' ;

Memclass : MEMORY '(' MEMORYTYPE '=' stringhandler',' MEMSIZE '=' sumExpr   nameparameter')' ;

Linkclass : LINK'(' STARTPOINT '=' stringhandler ','ENDPOINT '=' stringhandler',' BANDWIDTH '=' sumExpr','CHANNELCAPACITY'='sumExpr nameparameter')' ;

Clusterclass : CLUSTER '(' PROCESSORS '=' Array ',' TOPOLOGY '=' stringhandler ',' LINKBANDWIDTH '=' sumExpr',' LINKCAPACITY '=' sumExpr nameparameter')' ;

affinityhandler : mutable | '[' Expr',' Expr',' Expr ',' Expr ']' ;

nameparameter: ','NAME '=' stringhandler |  ;


stmt : Exprstmt | compoundstmt | selectionstmt |  iterationstmt |returnstmt | breakstmt | classdec ;
compoundstmt : '{' localdecs stmtList '}' ;
localdecs : localdecs scopedvardec | ;
stmtList : stmtList stmt | ;
Exprstmt : Expr ';' | DISCARD_JOB '(' Array ')' ';' | RUN '(' Array ')' ';' | ';' ;
selectionstmt : IF  '(' simpleExpr ')'  {printf("if\n");
                  if_cnt++;
                  strcpy(quad[Index].operator,"");
                  strcpy(quad[Index].operand2,"");
                  strcpy(quad[Index].operand1,"");
                  strcpy(quad[Index].result,"IF");


                  strcpy(quad[Index+1].operator,"<=");
                  strcpy(quad[Index+1].operand2,"0");
                  strcpy(quad[Index+1].operand1,quad[Index-1].result);
                  Index++;
                  Index++;
                  char t[15];
                  sprintf(t,"else%d",if_cnt);
                  strcpy(quad[Index].label,t);
                  Index++;
                  pushif(if_cnt);} stmt
                  {
                  char t[15];
                  sprintf(t,"j endif%d",if_cnt);
                  strcpy(quad[Index].label,t);
                  Index++;
                  sprintf(t,"else%d:",ifstk.i[ifstk.top]);
                  strcpy(quad[Index].label,t);
                  Index++;
                  } elsestmt {
                  char t[15];
                  sprintf(t,"endif%d:",popif());
                  strcpy(quad[Index].label,t);
                  Index++;
                  }
elsestmt:  ELSE stmt | ;

iterationstmt : WHILE {
                  char t[15];
                  while_cnt++;
                  pushwhile(while_cnt);
                  sprintf(t,"while%d:",while_cnt);

                  strcpy(quad[Index].operator,"");
                  strcpy(quad[Index].operand2,"");
                  strcpy(quad[Index].operand1,"");
                  strcpy(quad[Index].label,t);
                  Index++; }
                   '(' simpleExpr ')'
                    {

                  //strcpy(quad[Index+1].result,quad[Index].result);


                  printf("if %d\n",Index);
                  strcpy(quad[Index].operator,"");
                  strcpy(quad[Index].operand2,"");
                  strcpy(quad[Index].operand1,"");
                  strcpy(quad[Index].result,"IF");

                  strcpy(quad[Index+1].operator,"<=");
                  strcpy(quad[Index+1].operand2,"0");
                  strcpy(quad[Index+1].operand1,quad[Index-1].result);
                  Index++;
                  Index++;
                  printf("if %d\n",Index);

                  char t[15];
                  sprintf(t,"endwhile%d",while_cnt);
                  strcpy(quad[Index].label,t);
                  Index++;

              }  stmt {char t[25];
                int k=popwhile();

                sprintf(t,"j while%d",k);
                strcpy(quad[Index].label,t);
                Index++;
                sprintf(t,"endwhile%d:",k);
                strcpy(quad[Index].label,t);
                Index++;
                }  | FOR '(' Exprstmt Exprstmt ')' stmt | FOR '(' Exprstmt Exprstmt Expr ')' stmt | DO  stmt WHILE '(' simpleExpr ')' ';' ;
returnstmt : RETURN ';' | RETURN Expr ';'   ;
breakstmt : BREAK ';'   ;

Expr : mutable '=' Expr {addquad("=","",pop(),id);} | mutable ADD_ASSIGN Expr {addquad("+=","",pop(),id);} |
       mutable SUB_ASSIGN Expr {addquad("-=","",pop(),id);}| mutable MUL_ASSIGN Expr  {addquad("*=","",pop(),id);}|
        mutable DIV_ASSIGN Expr {addquad("/=","",pop(),id);}| mutable INC_OP | mutable DEC_OP | simpleExpr | mutable AND_ASSIGN Expr | mutable OR_ASSIGN Expr | mutable MOD_ASSIGN Expr ;
simpleExpr : simpleExpr OR_OP andExpr | andExpr ;
andExpr : andExpr AND_OP unaryRelExpr | unaryRelExpr ;
unaryRelExpr :  '!' unaryRelExpr | relExpr ;
relExpr : sumExpr  '<' sumExpr {
                    char str[5],str1[5]="t";
                    sprintf(str, "%d", temp_var);
                        strcat(str1,str);
                    temp_var++;
                    addquad("<",pop(),pop(),str1);
                    push(str1);
                    } |
           sumExpr  '>' sumExpr {
                    char str[5],str1[5]="t";
                    sprintf(str, "%d", temp_var);
                        strcat(str1,str);
                    temp_var++;
                    addquad(">",pop(),pop(),str1);
                    push(str1);
                    } |
           sumExpr  LE_OP sumExpr {
                    char str[5],str1[5]="t";
                    sprintf(str, "%d", temp_var);
                        strcat(str1,str);
                    temp_var++;
                    addquad("<=",pop(),pop(),str1);
                    push(str1);
                    } |
           sumExpr  GE_OP sumExpr {
                    char str[5],str1[5]="t";
                    sprintf(str, "%d", temp_var);
                        strcat(str1,str);
                    temp_var++;
                    addquad(">=",pop(),pop(),str1);
                    push(str1);
                    } |
           sumExpr  NE_OP sumExpr {
                    char str[5],str1[5]="t";
                    sprintf(str, "%d", temp_var);
                        strcat(str1,str);
                    temp_var++;
                    addquad("!=",pop(),pop(),str1);
                    push(str1);
                    } |
           sumExpr  EQ_OP sumExpr {
                    char str[5],str1[5]="t";
                    sprintf(str, "%d", temp_var);
                        strcat(str1,str);
                    temp_var++;
                    addquad("==",pop(),pop(),str1);
                    push(str1);
                    } |
           sumExpr  ;

sumExpr : sumExpr '+' term {
                    char str[5],str1[5]="t";
                    sprintf(str, "%d", temp_var);
                        strcat(str1,str);
                    temp_var++;
                    char *op2=pop();
                    char *op1=pop();
                    int i=search_sym(op1);
                    int j=search_sym(op2);
                    if(i==-1 && j==-1)
                    addquad("+",op2,op1,str1);
                    if(i==-1 && j!=-1){
                        if(strcmp(Sym[j].sym_type,"char")==0 ){
                            printf("Inappropriate type of %s\n",op2);
                            yyerror("");

                        }
                        else{
                          addquad("+",op2,op1,str1);
                        }
                    }
                    if(i!=-1 && j==-1){
                        if(strcmp(Sym[j].sym_type,"char")==0 ){
                            printf("Inappropriate type of %s\n",op1);
                            yyerror("");

                        }
                        else{
                          addquad("+",op2,op1,str1);
                        }
                    }
                    if(i!=-1 && j!=-1){
                        if(strcmp(Sym[j].sym_type,Sym[i].sym_type)!=0 ){
                            printf("Inappropriate type of %s and %s\n",op1,op2);
                            yyerror("");

                        }
                        else{
                          addquad("+",op2,op1,str1);
                        }
                    }
                    push(str1);
                    }|
          sumExpr '-' term {char str[5],str1[5]="t";
                    sprintf(str, "%d", temp_var);
                        strcat(str1,str);
                    temp_var++;
                    char *op2=pop();
                    char *op1=pop();
                    int i=search_sym(op1);
                    int j=search_sym(op2);
                    if(i==-1 && j==-1)
                    addquad("+",op2,op1,str1);
                    if(i==-1 && j!=-1){
                        if(strcmp(Sym[j].sym_type,"char")==0 ){
                            printf("Inappropriate type of %s\n",op2);
                            yyerror("");

                        }
                        else{
                          addquad("-",op2,op1,str1);
                        }
                    }
                    if(i!=-1 && j==-1){
                        if(strcmp(Sym[j].sym_type,"char")==0 ){
                            printf("Inappropriate type of %s\n",op1);
                            yyerror("");

                        }
                        else{
                          addquad("-",op2,op1,str1);
                        }
                    }
                    if(i!=-1 && j!=-1){
                        if(strcmp(Sym[j].sym_type,Sym[i].sym_type)!=0 ){
                            printf("Inappropriate type of %s and %s\n",op1,op2);
                            yyerror("");

                        }
                        else{
                          addquad("-",op2,op1,str1);
                        }
                    }
                    push(str1);
                    } |term ;

term : term '*' factor {char str[5],str1[5]="t";
                    sprintf(str, "%d", temp_var);
                        strcat(str1,str);
                    temp_var++;
                    char *op2=pop();
                    char *op1=pop();
                    int i=search_sym(op1);
                    int j=search_sym(op2);
                    if(i==-1 && j==-1)
                    addquad("+",op2,op1,str1);
                    if(i==-1 && j!=-1){
                        if(strcmp(Sym[j].sym_type,"char")==0 ){
                            printf("Inappropriate type of %s\n",op2);
                            yyerror("");

                        }
                        else{
                          addquad("*",op2,op1,str1);
                        }
                    }
                    if(i!=-1 && j==-1){
                        if(strcmp(Sym[j].sym_type,"char")==0 ){
                            printf("Inappropriate type of %s\n",op1);
                            yyerror("");

                        }
                        else{
                          addquad("*",op2,op1,str1);
                        }
                    }
                    if(i!=-1 && j!=-1){
                        if(strcmp(Sym[j].sym_type,Sym[i].sym_type)!=0 ){
                            printf("Inappropriate type of %s and %s\n",op1,op2);
                            yyerror("");

                        }
                        else{
                          addquad("*",op2,op1,str1);
                        }
                    }
                    push(str1);
                    }|
       term '/' factor {  char str[5],str1[5]="t";
                    sprintf(str, "%d", temp_var);
                        strcat(str1,str);
                    temp_var++;
                    char *op2=pop();
                    char *op1=pop();
                    int i=search_sym(op1);
                    int j=search_sym(op2);
                    if(i==-1 && j==-1)
                    addquad("+",op2,op1,str1);
                    if(i==-1 && j!=-1){
                        if(strcmp(Sym[j].sym_type,"char")==0 ){
                            printf("Inappropriate type of %s\n",op2);
                            yyerror("");

                        }
                        else{
                          addquad("/",op2,op1,str1);
                        }
                    }
                    if(i!=-1 && j==-1){
                        if(strcmp(Sym[j].sym_type,"char")==0 ){
                            printf("Inappropriate type of %s\n",op1);
                            yyerror("");

                        }
                        else{
                          addquad("/",op2,op1,str1);
                        }
                    }
                    if(i!=-1 && j!=-1){
                        if(strcmp(Sym[j].sym_type,Sym[i].sym_type)!=0 ){
                            printf("Inappropriate type of %s and %s\n",op1,op2);
                            yyerror("");

                        }
                        else{
                          addquad("/",op2,op1,str1);
                        }
                    }
                    push(str1);
                    }|
       term '%' factor {char str[5],str1[5]="t";
                    sprintf(str, "%d", temp_var);
                        strcat(str1,str);
                    temp_var++;
                    char *op2=pop();
                    char *op1=pop();
                    int i=search_sym(op1);
                    int j=search_sym(op2);
                    if(i==-1 && j==-1)
                    addquad("+",op2,op1,str1);
                    if(i==-1 && j!=-1){
                        if(strcmp(Sym[j].sym_type,"char")==0 ){
                            printf("Inappropriate type of %s\n",op2);
                            yyerror("");

                        }
                        else{
                          addquad("%",op2,op1,str1);
                        }
                    }
                    if(i!=-1 && j==-1){
                        if(strcmp(Sym[j].sym_type,"char")==0 ){
                            printf("Inappropriate type of %s\n",op1);
                            yyerror("");

                        }
                        else{
                          addquad("%",op2,op1,str1);
                        }
                    }
                    if(i!=-1 && j!=-1){
                        if(strcmp(Sym[j].sym_type,Sym[i].sym_type)!=0 ){
                            printf("Inappropriate type of %s and %s\n",op1,op2);
                            yyerror("");

                        }
                        else{
                          addquad("%",op2,op1,str1);
                        }
                    }
                    push(str1);
                    } | factor  ;
factor : immutable | mutable1   ;
mutable : IDENTIFIER {
            int i;
            i=search_sym($1);
            if(i==-1)
            printf("\n Undefined Variable");
            else
            strcpy(id,$1);
    }
     | mutable '[' Expr ']' | mutable'.'Memfun  ;
mutable1 : IDENTIFIER
        {
            int i;
            i=search_sym($1);
            if(i==-1)
            printf("\n Undefined Variable");
            else
            push($1);
    }
    | mutable '[' Expr ']' | mutable'.'Memfun  ;
Memfun : ISRUNNING'(' ')' | SUBMITJOBS'(' Array ')' | GETCLOCKSPEED'(' ')' | GETAVAILABLEMEMORY'(' ')' | GETMEMORY'(' ')' ;



Array : mutable | '[' IDsList ']';
IDsList : IDsList ',' mutable | mutable;
immutable : '(' Expr ')' | call | constant;
call : IDENTIFIER '(' args ')' ;
args : argList | ;
argList : argList ',' Expr | Expr ;
constant : CONSTANT {       char temp[10];
              snprintf(temp,10,"%d",$1);
              push(temp);

          }
         | STRING_LITERAL | FCONST | TRUE|FALSE;



%%




int main(){

    printf("starting\n");
    Stk.top=-1;
    ifstk.top=-1;
    ifstk.top=-1;
     yyparse();
    display_sym_tab();
    display_quad();
   mips_gen( Sym,sym_cnt,quad,Index);
}

int yyerror(char *s)
{
  printf(" %s near %s line number %d\n",s,yytext,yylineno);
  return 1;
}