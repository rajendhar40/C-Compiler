
#include <string.h>
#include <stdlib.h>
#include "dec.h"

int mips_gen(struct sym_tab Sym[],int sym_cnt,struct quadruple *quad,int index)
{
    int i=0;
    FILE* fout = fopen("output.asm", "w+");
    fprintf(fout, ".data\n");
    for(i=0;i<sym_cnt;i++)
    {
        if(strcmp(Sym[i].sym_type,"int")==0)
        {
            fprintf(fout, "%s:  .space %d  #type integer\n",Sym[i].sym_name,Sym[i].size * 4);
        }
        else if(strcmp(Sym[i].sym_type,"char")==0)
        {
            fprintf(fout, "%s:  .space %d  #type char\n",Sym[i].sym_name,Sym[i].size);
        }
        else if(strcmp(Sym[i].sym_type,"float")==0)
        {
            fprintf(fout, "%s:  .space %d  #type float\n",Sym[i].sym_name,Sym[i].size*8);
        }
        else if(strcmp(Sym[i].sym_type,"bool")==0)
        {
            fprintf(fout, "%s:  .space %d  #type boolean\n",Sym[i].sym_name,Sym[i].size);
        }
    }
    for(i=0;i<8;i++)
    {
        fprintf(fout, "t%d:  .space %d  #type integer\n",i,4);
    }
    fprintf(fout, ".text\n");
    for(i=0;i<index;i++)
    {
        if(strcmp(quad[i].label,"")!=0)
        {
            fprintf(fout,"%s\n",quad[i].label);
        }
        else{
            if(strcmp(quad[i].result,"IF")==0)
            {
                //fprintf(fout,"li   $t1,%s\n",quad[i+1].operand2);
                fprintf(fout,"lw   $t0,%s\n",quad[i+1].operand1);
                fprintf(fout,"blez   $t0,%s\n",quad[i+2].label);
                i=i+2;
            }
            else if(strcmp(quad[i].operator,"<")==0){
            if(isdigit(quad[i].operand1[0])==0 && isdigit(quad[i].operand2[0])==0)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t0,$t1,$t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 && isdigit(quad[i].operand2[0])==0)
            {
                fprintf(fout,"li   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t0,$t1,$t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==0 && isdigit(quad[i].operand2[0])==1)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"li   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t0,$t1,$t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 && isdigit(quad[i].operand2[0])==1)
            {
                fprintf(fout,"li   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"li   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t0,$t1,$t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            }
            else if(strcmp(quad[i].operator,">")==0){
            if(isdigit(quad[i].operand1[0])==0 && isdigit(quad[i].operand2[0])==0)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t0,$t0,$t1\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 && isdigit(quad[i].operand2[0])==0)
            {
                fprintf(fout,"li   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t0,$t0,$t1\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==0 && isdigit(quad[i].operand2[0])==1)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"li   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t0,$t0,$t1\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 && isdigit(quad[i].operand2[0])==1)
            {
                fprintf(fout,"li   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"li   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t0,$t0,$t1\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            }
            else if(strcmp(quad[i].operator,">=")==0){
            if(isdigit(quad[i].operand1[0])==0 && isdigit(quad[i].operand2[0])==0)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t0,$t1,$t0\n");
                fprintf(fout,"xori $t0,$t0,1\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 && isdigit(quad[i].operand2[0])==0)
            {
                fprintf(fout,"li   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t0,$t1,$t0\n");
                fprintf(fout,"xori $t0,$t0,1\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==0 && isdigit(quad[i].operand2[0])==1)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"li   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t0,$t1,$t0\n");
                fprintf(fout,"xori $t0,$t0,1\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 && isdigit(quad[i].operand2[0])==1)
            {
                fprintf(fout,"li   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"li   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t0,$t1,$t0\n");
                fprintf(fout,"xori $t0,$t0,1\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            }
            else if(strcmp(quad[i].operator,"<=")==0){
            if(isdigit(quad[i].operand1[0])==0 && isdigit(quad[i].operand2[0])==0)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t0,$t0,$t1\n");
                fprintf(fout,"xori $t0,$t0,1\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 && isdigit(quad[i].operand2[0])==0)
            {
                fprintf(fout,"li   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t0,$t0,$t1\n");
                fprintf(fout,"xori $t0,$t0,1\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==0 && isdigit(quad[i].operand2[0])==1)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"li   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t0,$t0,$t1\n");
                fprintf(fout,"xori $t0,$t0,1\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 && isdigit(quad[i].operand2[0])==1)
            {
                fprintf(fout,"li   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"li   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t0,$t0,$t1\n");
                fprintf(fout,"xori $t0,$t0,1\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            }
            else if(strcmp(quad[i].operator,"!=")==0){
            if(isdigit(quad[i].operand1[0])==0 && isdigit(quad[i].operand2[0])==0)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t2,$t0,$t1\n");
                fprintf(fout,"slt   $t0,$t1,$t0\n");
                fprintf(fout,"xor $t0,$t0,$t2\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 && isdigit(quad[i].operand2[0])==0)
            {
                fprintf(fout,"li   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t2,$t0,$t1\n");
                fprintf(fout,"slt   $t0,$t1,$t0\n");
                fprintf(fout,"xor $t0,$t0,$t2\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==0 && isdigit(quad[i].operand2[0])==1)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"li   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t2,$t0,$t1\n");
                fprintf(fout,"slt   $t0,$t1,$t0\n");
                fprintf(fout,"xor $t0,$t0,$t2\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 && isdigit(quad[i].operand2[0])==1)
            {
                fprintf(fout,"li   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"li   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t2,$t0,$t1\n");
                fprintf(fout,"slt   $t0,$t1,$t0\n");
                fprintf(fout,"xor $t0,$t0,$t2\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            }
            else if(strcmp(quad[i].operator,"==")==0){
            if(isdigit(quad[i].operand1[0])==0 && isdigit(quad[i].operand2[0])==0)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t2,$t0,$t1\n");
                fprintf(fout,"slt   $t0,$t1,$t0\n");
                fprintf(fout,"xor $t0,$t0,$t2\n");
                fprintf(fout,"xori $t0,$t0,1\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 && isdigit(quad[i].operand2[0])==0)
            {
                fprintf(fout,"li   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t2,$t0,$t1\n");
                fprintf(fout,"slt   $t0,$t1,$t0\n");
                fprintf(fout,"xor $t0,$t0,$t2\n");
                fprintf(fout,"xori $t0,$t0,1\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==0 && isdigit(quad[i].operand2[0])==1)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"li   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t2,$t0,$t1\n");
                fprintf(fout,"slt   $t0,$t1,$t0\n");
                fprintf(fout,"xor $t0,$t0,$t2\n");
                fprintf(fout,"xori $t0,$t0,1\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 && isdigit(quad[i].operand2[0])==1)
            {
                fprintf(fout,"li   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"li   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"slt   $t2,$t0,$t1\n");
                fprintf(fout,"slt   $t0,$t1,$t0\n");
                fprintf(fout,"xor $t0,$t0,$t2\n");
                fprintf(fout,"xori $t0,$t0,1\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            }
            else if(strcmp(quad[i].operator,"+")==0)
            {
            if(isdigit(quad[i].operand1[0])==0 && isdigit(quad[i].operand2[0])==0)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"add   $t0,$t0,$t1\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 && isdigit(quad[i].operand2[0])==0)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand2);
                fprintf(fout,"addi   $t0,$t0,%s\n",quad[i].operand1);
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==0 && isdigit(quad[i].operand2[0])==1)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"addi   $t0,$t0,%s\n",quad[i].operand2);
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 && isdigit(quad[i].operand2[0])==1)
            {
                fprintf(fout,"li   $t0,%s\n",quad[i].operand2);
                fprintf(fout,"addi   $t0,$t0,%s\n",quad[i].operand1);
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            }
            else if(strcmp(quad[i].operator,"-")==0)
            {
            if(isdigit(quad[i].operand1[0])==0 && isdigit(quad[i].operand2[0])==0)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"sub   $t0,$t1,$t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 && isdigit(quad[i].operand2[0])==0)
            {
                fprintf(fout,"li   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"sub   $t0,$t1,$t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==0 && isdigit(quad[i].operand2[0])==1)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"li   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"sub   $t0,$t1,$t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 && isdigit(quad[i].operand2[0])==1)
            {
                fprintf(fout,"li   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"li   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"sub   $t0,$t1,$t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            }
            else if(strcmp(quad[i].operator,"*")==0)
            {
            if(isdigit(quad[i].operand1[0])==0 && isdigit(quad[i].operand2[0])==0)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"mult   $t0,$t1\n");
                fprintf(fout,"mflo $t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 && isdigit(quad[i].operand2[0])==0)
            {
                fprintf(fout,"li   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"mult   $t0,$t1\n");
                fprintf(fout,"mflo $t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==0 && isdigit(quad[i].operand2[0])==1)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"li   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"mult   $t0,$t1\n");
                fprintf(fout,"mflo $t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 && isdigit(quad[i].operand2[0])==1)
            {
                fprintf(fout,"li   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"li   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"mult   $t0,$t1\n");
                fprintf(fout,"mflo $t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            }
            else if(strcmp(quad[i].operator,"/")==0)
            {
            if(isdigit(quad[i].operand1[0])==0 && isdigit(quad[i].operand2[0])==0)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"div   $t1,$t0\n");
                fprintf(fout,"mflo $t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 && isdigit(quad[i].operand2[0])==0)
            {
                fprintf(fout,"li   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"div   $t1,$t0\n");
                fprintf(fout,"mflo $t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==0 && isdigit(quad[i].operand2[0])==1)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"li   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"div   $t1,$t0\n");
                fprintf(fout,"mflo $t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 && isdigit(quad[i].operand2[0])==1)
            {
                fprintf(fout,"li   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"li   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"div   $t1,$t0\n");
                fprintf(fout,"mflo $t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            }
            else if(strcmp(quad[i].operator,"%")==0)
            {
            if(isdigit(quad[i].operand1[0])==0 && isdigit(quad[i].operand2[0])==0)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"div   $t1,$t0\n");
                fprintf(fout,"mfhi $t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 && isdigit(quad[i].operand2[0])==0)
            {
                fprintf(fout,"li   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"div   $t1,$t0\n");
                fprintf(fout,"mfhi $t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==0 && isdigit(quad[i].operand2[0])==1)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"li   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"div   $t1,$t0\n");
                fprintf(fout,"mfhi $t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 && isdigit(quad[i].operand2[0])==1)
            {
                fprintf(fout,"li   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"li   $t1,%s\n",quad[i].operand2);
                fprintf(fout,"div   $t1,$t0\n");
                fprintf(fout,"mfhi $t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            }
            else if(strcmp(quad[i].operator,"+=")==0)
            {
            if(isdigit(quad[i].operand1[0])==0 )
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].result);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand1);
                fprintf(fout,"add   $t0,$t0,$t1\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].result);
                fprintf(fout,"addi   $t0,$t0,%s\n",quad[i].operand1);
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            }
            else if(strcmp(quad[i].operator,"-=")==0)
            {
            if(isdigit(quad[i].operand1[0])==0 )
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].result);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand1);
                fprintf(fout,"sub   $t0,$t0,$t1\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].result);
                fprintf(fout,"li   $t1,%s\n",quad[i].operand1);
                fprintf(fout,"sub   $t0,$t0,$t1\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            }
            else if(strcmp(quad[i].operator,"*=")==0)
            {
            if(isdigit(quad[i].operand1[0])==0)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].result);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand1);
                fprintf(fout,"mult   $t0,$t1\n");
                fprintf(fout,"mflo $t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 )
            {
                fprintf(fout,"li   $t1,%s\n",quad[i].operand1);
                fprintf(fout,"lw   $t0,%s\n",quad[i].result);
                fprintf(fout,"mult   $t0,$t1\n");
                fprintf(fout,"mflo $t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            }
            else if(strcmp(quad[i].operator,"/=")==0)
            {
            if(isdigit(quad[i].operand1[0])==0)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].result);
                fprintf(fout,"lw   $t1,%s\n",quad[i].operand1);
                fprintf(fout,"div   $t0,$t1\n");
                fprintf(fout,"mflo $t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else if(isdigit(quad[i].operand1[0])==1 )
            {
                fprintf(fout,"li   $t1,%s\n",quad[i].operand1);
                fprintf(fout,"lw   $t0,%s\n",quad[i].result);
                fprintf(fout,"div   $t0,$t1\n");
                fprintf(fout,"mflo $t0\n");
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            }
            else if(strcmp(quad[i].operator,"=")==0)
            {
            if(isdigit(quad[i].operand1[0])==0)
            {
                fprintf(fout,"lw   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
            else{
                fprintf(fout,"li   $t0,%s\n",quad[i].operand1);
                fprintf(fout,"sw   $t0,%s\n",quad[i].result);
            }
        }
        }
    }

    fclose(fout);
}
