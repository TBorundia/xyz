%{
#include<stdio.h>
%}
%%
"int"|"float"|"char"|"for"|"if"|"else"|"switch"|"main"|"return"|"include"|"<stdio.h>"|"printf"|"scanf" printf("\n %s is a keyword ",yytext);
\".*\" printf("\n %s is a string",yytext);
"("|")"|";"|"{"|"}"|","|"." printf("\n %s is a special symbol",yytext);
"+"|"-"|"*"|"/"|"="|"!="|"%" printf("\n %s is an operator",yytext);
[a-zA-Z_][0-9a-zA-Z_]* printf("\n %s is an identifier",yytext);
[0-9]+ printf("\n %s is an integer constant",yytext);
\'.*\' printf("\n %s is a character constant",yytext);
[0-9]+[.][0-9]+ printf("\n %s is a float constant",yytext);

%%
int main(void)
{
yyin= fopen("input_prac1.txt","r");
yylex();

}
 
int yywrap()
{
return(1);
}