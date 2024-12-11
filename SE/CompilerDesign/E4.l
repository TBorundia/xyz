%{
#include <stdio.h>
#include <stdlib.h>
int line_count = 1;
%}
%%
[0-9]+ { 
    int num = atoi(yytext); 
    if (num % 7 == 0) num += 3;  
    if (num % 2 == 0) num += 4;  
    printf("%d\n", num); 
}
[a-zA-Z]+ {
    printf("%d. %s\n", line_count++, yytext); 
}
\n { printf("\n"); }
. { printf("%s", yytext); }
%%
int yywrap() { return 1; }
int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return 1;
    }
    FILE *inFile = fopen(argv[1], "r");
    if (!inFile) {
        perror("Error opening input file");
        return 1;
    }
    yyin = inFile;
    yylex();
    fclose(inFile);
    return 0;
}
