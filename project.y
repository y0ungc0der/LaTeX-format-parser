%{

#include "..\project.h"

extern FILE *yyin;

%}

%token SPACE OPERATOR SPECCHAR BEGINDOC ENDDOC DOCCLASS LCBR RCBR
%token TITLE POW END USEPACKAGE MAKETITLE AUTHOR INDEX TABLEOFCONT
%token MATH BSL LSBR RSBR NEWPAGE INPUT LSKF RSKF ENDIF IF
%token BEGINENV ENDENV ERR FORMAT INTEGER WORD

%%

start: 
	   start code
	 | code
	 ;

code: 
	DOCCLASS preamble BEGINDOC body ENDDOC
	;

preamble: 
		  preamble usepackage
		| preamble author
		| preamble titletype
		|
		;

usepackage:
			USEPACKAGE LCBR math RCBR
		  | USEPACKAGE LSBR math RSBR LCBR math RCBR
		  | USEPACKAGE LCBR RCBR
		  | USEPACKAGE LSBR RSBR LCBR RCBR
		  | math
		  ;

title:
	   titletype title
	 | titletype
	 | author title
	 | author
	 ;

titletype:
		  TITLE LCBR math RCBR
		| TITLE LCBR RCBR
		| TITLE LSBR math RSBR LCBR math RCBR
		| TITLE LCBR math RCBR LSBR math RSBR LCBR math RCBR
		| TITLE LSBR RSBR LCBR RCBR
		;

author:
		AUTHOR LCBR math RCBR
	  | AUTHOR LCBR RCBR
	  ;
body:
	  part body
	| part
	;

textenvir:
		   text textenvir
		 | text
		 ;

text:
	  LCBR math RCBR
	| LSBR math RSBR
	;

part:
	  math
	| title
	;

math: 
	  operand
	| LSKF math RSKF
	;

operand:
		 operand LCBR RCBR
	   | operand LCBR math RCBR
	   | operand SPACE LCBR math RCBR
	   | operand LCBR operand RCBR
	   | operand LSBR math RSBR
	   | operand environment
	   | operand textoption
	   | operand if
	   | SPACE LCBR math RCBR
	   | LCBR operand RCBR
	   | LSBR math RSBR
	   | environment
	   | textoption
	   | if
	   | operand POW math
	   | operand POW LCBR math RCBR
	   | operand POW LCBR math RCBR LCBR math RCBR
	   | operand POW LCBR RCBR LCBR math RCBR
	   | operand POW LCBR math RCBR LCBR RCBR
	   | operand POW LCBR RCBR LCBR RCBR
	   | operand INDEX math
	   | operand INDEX LCBR math RCBR
	   | operand INDEX LCBR math RCBR LCBR math RCBR
	   | operand INDEX LCBR RCBR LCBR math RCBR
	   | operand INDEX LCBR math RCBR LCBR RCBR
	   | operand INDEX LCBR RCBR LCBR RCBR
	   ;

if:
  IF math ENDIF
  ;

environment: 
			 BEGINENV textenvir ENDENV textenvir
		   | BEGINENV textenvir body ENDENV textenvir
		   | BEGINENV textenvir LCBR body RCBR ENDENV textenvir
		   | LCBR BEGINENV LCBR textoption RCBR math RCBR
		   | LCBR math BEGINENV LCBR textoption RCBR RCBR
		   | LCBR BEGINENV LCBR textoption RCBR RCBR
		   | LCBR ENDENV LCBR textoption RCBR math RCBR
		   | LCBR math ENDENV LCBR textoption RCBR RCBR
		   | LCBR ENDENV LCBR textoption RCBR RCBR
		   ;

textoption:
			WORD
		  | BSL LCBR WORD BSL RCBR
		  | FORMAT
		  | OPERATOR
		  | NEWPAGE
		  | MAKETITLE
		  | INPUT LCBR math RCBR
		  | INPUT LSBR math RSBR LCBR math RCBR
		  | INPUT LSBR RSBR LCBR math RCBR
		  | INPUT LSBR RSBR LCBR RCBR
		  | INPUT LSBR math RSBR LCBR RCBR
		  | INPUT LSBR math RSBR LSBR math RSBR LCBR math RCBR
		  | INPUT LSBR math RSBR LSBR math RSBR LSBR math RSBR LCBR math RCBR
		  | FORMAT LCBR math RCBR
		  | LSBR OPERATOR RSBR
		  | INTEGER
		  | SPECCHAR
		  | BSL WORD
		  | TABLEOFCONT
		  | MATH
		  | BSL OPERATOR
		  | LSBR RSBR
		  ;

%%

int main(int argc, char *argv[])
{
	
	if (argc == 2)
	{
		yyin = fopen(argv[1], "r");
		
		if (yyin == NULL)
		{
			yyerror("file was not opened");
			system("pause");
			return 0;
		}
	}
	else goto usage;
	
	outpFile = fopen ("output.txt","w");
    if (outpFile == NULL)
	{
		yyerror(" output file was not opened\n");
		system("pause");
		return 0;
	}

	if (!yyparse()) printf("\nyyparse(): parsing successful!\n\n");
	fclose(yyin);
	fclose(outpFile);
	system("pause");
	return 0;

usage:  printf("usage: %s [input file]\n\n", argv[0]);
		system("pause");
		return 0;
}

void yyerror(char *str, ...)
{
	if (str == NULL) return;

	printf("\nERROR: ");

	va_list ap;
	va_start(ap, str);
	while (*str != '\0')
	{
		if (*str == '%' && *(str + 1) != '\0')
		{
			str++;
			switch (*str)
			{
				case 'd':
					int i = va_arg(ap, int);
					printf("%d", i);
					break;
				case 'c':
					char c = va_arg(ap, char);
					printf("%c", c);
					break;
				case 's':
					char *s = va_arg(ap, char *);
					printf("%s", s);
					break;
				default:
					printf("yyerror: unknown parameter '%c'\n\n", *str);
					break;
			}
		} else
			printf("%c", *str);

		str++;
	}
	va_end(ap);

	printf(" :: (line #%d of the input file)\n\n", yylineno);

	system("pause");
	exit(-1);
}