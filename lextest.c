#include <stdio.h>
extern int yylex();
extern int yylineno;
extern char *yytext;
int main(){
    int n,v;
    n=yylex();
    while(n){
        printf("%d  %s\n",n,yytext);
        n=yylex();
    }
}