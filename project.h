#ifndef PROJECT_H
# define PROJECT_H

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <locale.h>

#define _CRT_SECURE_NO_WARNINGS

extern void yyerror(char* str, ...);
extern int yylineno; // Номер строки с ошибкой.
extern int yylex(void);
FILE* outpFile;

#endif