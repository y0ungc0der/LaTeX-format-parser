%{
#include "y.tab.h"
#include "..\project.h"

#define error(buf, com){printf("%s\n%s\n%s\n", err, buf, err); yyerror("Error with header: problem in command "com"");}
#define err "!------ERROR------ERROR------ERROR------!"

int dout();
int sbstr(char*, char*);
int controlopt (char*);
int linenum = 1;
int aut = 0;
int tit = 0;

%}

%option stack yylineno noyywrap

/*	опции декларации \documentclass	*/
papersz		("a4paper"|"letterpaper"|"legalpaper"|"executivepaper")
allpapersz	({papersz}|"a5paper"|"b5paper")
fontsz		("10pt"|"11pt"|"12pt")
column		("onecolumn"|"twocolumn")
chap		("openright"|"openany")
side		("oneside"|"twoside")
note		("draft"|"final")
tit			("titlepage"|"notitlepage")

/*	стили документа с необязательными опциями	*/
opa			({fontsz}|{allpapersz}|"landscape"|{side}|{note}|{tit}|{column}|"leqno"|"fleqn"|"openbib")
articleop	((("["((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)"]")|(((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)"["((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)(({opa}((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*),((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*))*{opa})"]"))?((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)"{article}")

opl			({fontsz}|{allpapersz}|"landscape"|{side}|{note}|"onecolumn"|"leqno"|"fleqn")
letterop	((("["((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)"]")|(((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)"["((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)(({opl}((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*),((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*))*{opl})"]"))?((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)"{letter}")

opr			({fontsz}|{papersz}|"landscape"|{side}|{note}|{tit}|{column}|"leqno"|"fleqn"|"openbib"|{chap})
reportop	((("["((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)"]")|(((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)"["((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)(({opr}((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*),((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*))*{opr})"]"))?((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)"{report}")

opb			({fontsz}|{allpapersz}|"landscape"|{side}|{note}|{tit}|{column}|"leqno"|"fleqn"|"openbib"|{chap})
bookop		((("["((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)"]")|(((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)"["((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)(({opb}((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*),((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*))*{opb})"]"))?((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)"{book}")

opp			({fontsz}|{allpapersz}|"landscape"|{side}|{note}|"notitlepage"|"twocolumn"|"leqno"|"fleqn"|"openbib")
procop		((("["((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)"]")|(((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)"["((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)(({opp}((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*),((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*))*{opp})"]"))?((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)"{proc}")

ops			({allpapersz}|"landscape"|{note}|{tit}|"onecolumn"|"leqno"|"fleqn")
slidesop	((("["((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)"]")|(((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)"["((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)(({ops}((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*),((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*))*{ops})"]"))?((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)"{slides}")

/*	все возможные варианты декларации \documentclass	*/
docclass	("\\documentclass"((" "|"\t")*("\n"|"\r\n")?(" "|"\t")*)({articleop}|{letterop}|{reportop}|{bookop}|{procop}|{slidesop}))

%%

{docclass}	{if (controlopt(yytext)) {dout(yytext, "DOCCLASS; "); return DOCCLASS;} }

"\\\\"	{ dout(yytext, NULL ); }
"\\"	{ dout(yytext, "BSL; "); return BSL; }
"{"		{ dout(yytext, "LCBR; "); return LCBR; }
"}"		{ dout(yytext, "RCBR; "); return RCBR; }
"["		{ dout(yytext, "LSBR; "); return LSBR; }
"]"		{ dout(yytext, "RSBR; "); return RSBR; }
"^"		{ dout(yytext, "POW; "); return POW; }
"_"		{ dout(yytext, "INDEX; "); return INDEX; }
\%.*\n	{ dout(yytext, NULL ); linenum++; }
\\\]	{ dout(yytext, "RSKF; "); return RSKF; }
\\\[	{ dout(yytext, "LSKF; "); return LSKF; }
\\\)	{ dout(yytext, "RSKF; "); return RSKF; }
\\\(	{ dout(yytext, "LSKF; "); return LSKF; }
\n		{ linenum++; }
\$		{ dout(yytext, "WORD "); return WORD; }
[0-9]+	{ dout(yytext, "INTEGER; "); return INTEGER; }
"\\newenvironment"		{ dout(yytext, "ERR "); return WORD; }
"\\renewenvironment"	{ dout(yytext, "ERR "); return WORD; }
"\\newcommand"			{ dout(yytext, "ERR "); return WORD; }
"\\renewcommand"		{ dout(yytext, "ERR "); return WORD; }
"\\def"					{ dout(yytext, "ERR "); return WORD; }
"\\def"[a-zA-Z0-9]		{ dout(yytext, "ERR "); return WORD; }
"\\begin{document}"		{ dout(yytext, "BEGINDOC; "); return BEGINDOC; }
"\\begin{document}+"	{ dout(yytext, "WORD; "); return WORD; }
"\\end{document}"		{ dout(yytext, "ENDDOC; "); return ENDDOC; }
"\\end{document}+"		{ dout(yytext, "WORD; "); return WORD; }
"\\begin"				{ dout(yytext, "BEGINENV; "); return BEGINENV; }
"\\begin"\{.*\}\+		{ dout(yytext, "WORD; "); return WORD; }
"\\end"					{ dout(yytext, "ENDENV; "); return ENDENV; }
"\\end"\{.*\}\+			{ dout(yytext, "WORD; "); return WORD; }
"\\usepackage"			{ dout(yytext, "USEPACKAGE; "); return USEPACKAGE; }
"\\usepackage"\{.+?\}"+"	{ dout(yytext, "WORD; "); return WORD; }
"\\usepackage"[a-zA-Z]+		{ dout(yytext, "WORD; "); return WORD; }
"\\input"[a-zA-Z]+[\+\*]*	{ dout(yytext, "WORD; "); return WORD; }
"\\input"					{ dout(yytext, "INPUT; "); return INPUT; }
"\\include"[a-z]*			{ dout(yytext, "INPUT; "); return INPUT; }
"\\include"[a-z|\+|\*]+		{ dout(yytext, "WORD; "); return WORD; }
"\\text"[a-zA-Z]+			{ dout(yytext, "FORMAT; "); return FORMAT; }
"\\if"[a-zA-Z]+				{ dout(yytext, "IF; "); return IF; }
"\\fi"						{ dout(yytext, "ENDIF; "); return ENDIF; }
"\\tableofcontents"			{ dout(yytext, "TABLEOFCONT;"); return TABLEOFCONT; }
"\\newpage"					{ dout(yytext, "NEWPAGE; "); return NEWPAGE; }
"\\hspace"					{ dout(yytext, "SPACE; "); return SPACE; }
"\\vspace"					{ dout(yytext, "SPACE; "); return SPACE; }
"\\hspace*"					{ dout(yytext, "SPACE; "); return SPACE; }
"\\vspace*"					{ dout(yytext, "SPACE; "); return SPACE; }
"\\maketitle"[a-zA-Z]+[\+\*]*	{ dout(yytext, "WORD; "); return WORD; }
"\\maketitle"					{ dout(yytext, "MAKETITLE; "); return MAKETITLE; }
"\\author"						{ dout(yytext, "AUTHOR; "); return AUTHOR; }
"\\author"[a-zA-Z]+[\+\*]*		{ dout(yytext, "WORD; "); return WORD; }
"\\date"						{ dout(yytext, "AUTHOR; "); return AUTHOR; }
"\\date"[a-zA-Z]+[\+\*]*		{ dout(yytext, "WORD; "); return WORD; }
"\\title"						{ dout(yytext, "TITLE; "); return TITLE; }
"\\title"[a-zA-Z]+[\+\*]*		{ dout(yytext, "WORD; "); return WORD; }
\$\$[^\$]+?\$\$					{ dout(yytext, "MATH "); linenum++; return MATH; }
\$[^\$]+?\$						{ dout(yytext, "MATH "); return MATH; }
\%.*[^\n]						{ dout(yytext, NULL ); }
"\\"[ ]*[a-zA-Z0-9|\+|\*|\-|\#|\/]+				{ dout(yytext, "WORD1 "); return WORD; }
(\\\%|\\\$|\\\&|\\\-|\\\<|\\\>|\\\#|\\\{|\\\})	{ dout(yytext, "SPECCHAR; "); return SPECCHAR; }
("+"|"-"|"="|"*"|"&"|"/"|"%"|"|"|"<"|">"|"~")	{ dout(yytext, "OPERATOR; "); return OPERATOR; }
((\.|\,|\!|\?|\:|\;)|[a-zA-Z0-9])+				{ dout(yytext, "WORD; "); return WORD; }
\\[\~|\`|\'|\^|\"|\=|\.|\_]						{ dout(yytext, "WORD; "); return WORD; }


[ \t\r]	;
.		{printf("Unknown character %s\n", yytext);}

%%

int dout(char *str, char *token)
{
#ifdef _DEBUG

fprintf(outpFile, "%s\t%s\n", (token == NULL) ? "" : token, str);

#endif

return 0;
}

/* пороверка того, что в преамбуле нет ошибок */
int controlopt (char* str)
{
	if (sbstr(str, "\\title") >= 1) {tit += 1;}
	if (sbstr(str, "\\author") >= 1) {aut += 1;}
	if (sbstr(str, "pt") > 1) {error(yytext, "\\documentclass")}
	else if (sbstr(str, "paper") > 1) {error(yytext, "\\documentclass")}
	else if (sbstr(str, "landscape") > 1) {error(yytext, "\\documentclass")} 
	else if (sbstr(str, "side") > 1) {error(yytext, "\\documentclass")}
	else if (sbstr(str, "page") > 1) {error(yytext, "\\documentclass")} 
	else if (sbstr(str, "column") > 1) {error(yytext, "\\documentclass")} 
	else if (sbstr(str, "leqno") > 1) {error(yytext, "\\documentclass")} 
	else if (sbstr(str, "fleqn") > 1) {error(yytext, "\\documentclass")} 
	else if (sbstr(str, "openbib") > 1) {error(yytext, "\\documentclass")} 
	else if (sbstr(str, "nofiles") > 1) {error(yytext, "\\nofiles")} 
	else if ((sbstr(str, "draft") > 1) || (sbstr(str, "final") > 1)) {error(yytext, "\\documentclass")} 
	else if ((sbstr(str, "draft") == sbstr(str, "final")) && (sbstr(str, "draft") != 0)) {error(yytext, "\\documentclass")} 	
	else if ((sbstr(str, "right") > 1) || (sbstr(str, "any") > 1)) {error(yytext, "\\documentclass")} 
	else if ((sbstr(str, "right") == sbstr(str, "any")) && (sbstr(str, "right") != 0)) {error(yytext, "\\documentclass")} 
	return 1;
}

int sbstr(char* str, char* substr)
{
	int  len = 0, c = 0;
	len  = (int)strlen(substr);
	char* p = strstr(str, substr);
	while (p)
	{
		c++;
		p = strstr(p + len, substr);
	}
	return c;
}