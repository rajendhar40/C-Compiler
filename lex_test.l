D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*

%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "y.tab.h"

void count();
%}

%%
"/*"			{ comment(); }


"break"			{ count(); return(BREAK); }

"char"			{ count(); return(CHAR); }
"const"			{ count(); return(CONST); }


"do"			{ count(); return(DO); }

"else"			{ count(); return(ELSE); }


"float"			{ count(); return(FLOAT); }
"for"			{ count(); return(FOR); }

"if"			{ count(); return(IF); }
"int"			{ count(); return(INT); }
"bool"			{ count(); return(BOOL); }

"return"		{ count(); return(RETURN); }

"true"			{ count(); return(TRUE); }
"false"			{ count(); return(FALSE); }

"static"		{ count(); return(STATIC); }





"void"			{ count(); return(VOID); }

"while"			{ count(); return(WHILE); }

"Processor"     { count(); return(PROCESSOR); }
"isa"           { count(); return(ISA); }
"clock_speed"   { count(); return(CLOCKSPEED); }
"l1_memory"     { count(); return(L1MEMORY); }
"l2_memory"     { count(); return(L2MEMORY); }
"name"          { count(); return(NAME); }
"is_running"    { count(); return(ISRUNNING); }
"submit_jobs"   { count(); return(SUBMITJOBS); }
"get_clock_speed"  {count(); return(GETCLOCKSPEED);}
"run"           {count(); return(RUN); }
"discard_job"   {count(); return(DISCARD_JOB); }
"Link"          {count(); return(LINK); }
"start_point"   {count(); return(STARTPOINT); }
"end_point"     {count(); return(ENDPOINT); }
"bandwidth"     {count(); return(BANDWIDTH); }
"get_available_memory"   {count(); return (GETAVAILABLEMEMORY);}
"Memory"        {count(); return(MEMORY); }
"memory_type"   {count(); return(MEMORYTYPE); }
"mem_size"      {count(); return(MEMSIZE); }
"get_memory"    {count(); return(GETMEMORY); }
"Job"           {count(); return(JOB); }
"job_id"        {count(); return(JOB_ID);}
"flops_required"  {count(); return(FLOPSREQUIRED);}
"deadline"       {count(); return(DEADLINE);}
"mem_required"   {count(); return(MEMREQUIRED);}
"affinity"      {count(); return(AFFINITY);}
"Cluster"       {count(); return(CLUSTER); }
"processors"    {count(); return(PROCESSORS); }
"topology"      {count(); return(TOPOLOGY); }
"link_bandwidth" {count(); return(LINKBANDWIDTH);}
"link_capacity"   {count(); return(LINKCAPACITY);}
"channel_capacity" {count(); return(CHANNELCAPACITY);}


{L}({L}|{D})*		{ strcpy(yylval.string,yytext); return(IDENTIFIER); }


0{D}+{IS}?		{ yylval.ival=atoi(yytext); return(CONSTANT); }
{D}+{IS}?		{ yylval.ival=atoi(yytext); return(CONSTANT); }
L?'(\\.|[^\\'])+'	{ yylval.ival=atoi(yytext); return(CONSTANT); }

{D}+{E}{FS}?		{yylval.ival=atoi(yytext); return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{ count(); return(FCONST); }
{D}+"."{D}*({E})?{FS}?	{ count(); return(FCONST); }

L?\"(\\.|[^\\"])*\"	{ count(); return(STRING_LITERAL); }




"+="			{ count(); return(ADD_ASSIGN); }
"-="			{ count(); return(SUB_ASSIGN); }
"*="			{ count(); return(MUL_ASSIGN); }
"/="			{ count(); return(DIV_ASSIGN); }
"%="			{ count(); return(MOD_ASSIGN); }
"&="			{ count(); return(AND_ASSIGN); }
"^="			{ count(); return(XOR_ASSIGN); }
"|="			{ count(); return(OR_ASSIGN); }


"++"			{ count(); return(INC_OP); }
"--"			{ count(); return(DEC_OP); }

"&&"			{ count(); return(AND_OP); }
"||"			{ count(); return(OR_OP); }
"<="			{ count(); return(LE_OP); }
">="			{ count(); return(GE_OP); }
"=="			{ count(); return(EQ_OP); }
"!="			{ count(); return(NE_OP); }
";"			{ count(); return(';'); }
"{"		{ count(); return('{'); }
"}"		{ count(); return('}'); }
","			{ count(); return(','); }
":"			{ count(); return(':'); }
"="			{ count(); return('='); }
"("			{ count(); return('('); }
")"			{ count(); return(')'); }
"["		{ count(); return('['); }
"]" 	{ count(); return(']'); }
"."			{ count(); return('.'); }
"&"			{ count(); return('&'); }
"!"			{ count(); return('!'); }
"~"			{ count(); return('~'); }
"-"			{ count(); return('-'); }
"+"			{ count(); return('+'); }
"*"			{ count(); return('*'); }
"/"			{ count(); return('/'); }
"%"			{ count(); return('%'); }
"<"			{ count(); return('<'); }
">"			{ count(); return('>'); }




[ \t\v\f]		{ count(); }
[\n]			{yylineno++;}
.			{ /* ignore bad characters */ }

%%

yywrap()
{
	return(1);
}


comment()
{
	char c, c1;

loop:
	while ((c = input()) != '*' && c != 0)
		putchar(c);

	if ((c1 = input()) != '/' && c != 0)
	{
		unput(c1);
		goto loop;
	}

	if (c != 0)
		putchar(c1);
}


int column = 0;

void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	
}


/*int check_type()
{

* pseudo code --- this is what it should check
*
*	if (yytext == type_name)
*		return(TYPE_NAME);
*
*	return(IDENTIFIER);
*/

/*
*	it actually will only return IDENTIFIER


	return(IDENTIFIER);
}*/