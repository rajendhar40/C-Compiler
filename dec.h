
struct sym_tab
  {
     char sym_name[10];
     char sym_type[10];
     double value;

     int size;
  }Sym[100];

struct ifstack
{
  int i[100];
  int top;
}ifstk;

struct whilestack
{
  int i[100];
  int top;
}whlstk;

struct quadruple
  {
    char operator[5];
    char operand1[10];
    char operand2[10];
    char result[10];
    char label[25];
  }quad[250];

  int sym_cnt=0;
  int Index=0;
  int temp_var=0;
  int while_cnt=0;
  int if_cnt=0;


int type;

struct Stack
  {
    char *items[100];
    int top;
  }Stk;

int search_sym(char a[]);
void insert_sym(char [],char [],double,int);
void addquad(char [],char [],char [],char []);
void display_quad();
void push(char*);
char* pop();
int pushif(int i);
int popif();
int pushwhile(int i);
int popwhile();

int search_sym(char sym[10])
{
   int i,flag=0;
  for(i=0;i<sym_cnt;i++)
  {
    if(strcmp(Sym[i].sym_name,sym)==0)
    {
      flag=1;
      break;
    }
  }
  if(flag==0)
    return(-1);
  else
    return(i);
}

void insert_sym(char sym[10],char dtype[10],double val,int size)
{
  strcpy(Sym[sym_cnt].sym_name,sym);
  strcpy(Sym[sym_cnt].sym_type,dtype);
  Sym[sym_cnt].value=val;
  Sym[sym_cnt].size=size;
  sym_cnt++;
}

void display_sym_tab()
{
  int i;
  printf("The Symbol Table  \n");
  printf(" Name   Type    Value         size");
  for(i=0;i<sym_cnt;i++)
    printf("\n %s       %s          %f           %d",Sym[i].sym_name,Sym[i].sym_type,Sym[i].value,Sym[i].size);
  printf("\n");
}

void display_quad()
{
  int i;
  printf("\n The INTERMEDIATE CODE Is : \n");
  printf(" The Quadruple Table \n");
  printf("     Label    Result  Operator  Operand1  Operand2  ");
  for(i=0;i<Index;i++)
    printf("\n    %s         %s          %s          %s          %s",quad[i].label,quad[i].result,quad[i].operator,quad[i].operand1,quad[i].operand2);
  printf("\n");
}


void push(char *str)
{
  Stk.top++;
    Stk.items[Stk.top]=(char *)malloc(strlen(str)+1);
  strcpy(Stk.items[Stk.top],str);
}

char * pop()
{
  int i;
  if(Stk.top==-1)
  {
     printf("\nStack Empty!! \n");
     exit(0);
  }
  char *str=(char *)malloc(strlen(Stk.items[Stk.top])+1);;
strcpy(str,Stk.items[Stk.top]);
  Stk.top--;
  return(str);
}
int pushif(int i){
  ifstk.top++;
  ifstk.i[ifstk.top]=i;
}
int popif(){
  int k;
  if(ifstk.top==-1)
  {
    printf("\nIFStack Empty!! \n");
     exit(0);
  }
   k=ifstk.i[ifstk.top];
  ifstk.top--;
  return k;
}

int pushwhile(int i){
  whlstk.top++;
  whlstk.i[whlstk.top]=i;
}
int popwhile(){
  int k;
  if(whlstk.top==-1)
  {
    printf("\nIFStack Empty!! \n");
     exit(0);
  }
   k=whlstk.i[whlstk.top];
  whlstk.top--;
  return k;
}

 void addquad(char op[10],char op2[10],char op1[10],char res[10]){
                                        strcpy(quad[Index].operator,op);
                                        strcpy(quad[Index].operand2,op2);
                                        strcpy(quad[Index].operand1,op1);
                                        strcpy(quad[Index].result,res);
                    Index++;
}
