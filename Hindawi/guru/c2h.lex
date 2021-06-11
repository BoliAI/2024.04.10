%{
/*
Copyright (C) 2003,2004,2005,2006 Abhishek Choudhary
This file is part of the Hindawi Indic Programming System.

The Hindawi Indic Programming Systemis free software; 
you can redistribute it and/or modify it under the terms of the 
GNU General Public License as published by the 
Free Software Foundation; either version 2 of the License, or 
(at your option) any later version.

The Hindawi Indic Programming System is distributed in the hope 
that it will be useful, but WITHOUT ANY WARRANTY; without 
even the implied warranty of MERCHANTABILITY or FITNESS FOR 
A PARTICULAR PURPOSE. See the GNU General Public License for 
more details.

You should have received a copy of the GNU General Public
License along with this file; see the file COPYING. If
not, write to the Free Software Foundation,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*/

/*
Modifications: (Please maintain reverse chronological order)

	dd-mmm-yyyy, Nature of modification,
                        Name of modifier <alias>,
			email adress of modifier

        31-Jul-2006, Added the modifications section,
                        Abhishek Choudhary <hi_pedler>,
                        choudhary@indicybers.net

End of modifications.
"_"          {printf("��");}
*/
 
%}
 
 
%%
 
\'("\\\'"|.*)*\'                       {printf("%s",yytext);}
\"("\\\""|[^\"^\n]*)*\"                {printf("%s",yytext);}
 
main         {printf("�ݴ��");}
alloc\.h         {printf("�ڵ.�");}
assert\.h         {printf("������.�");}
bios\.h         {printf("�������.�");}
conio\.h         {printf("Ƚ���.�");}
ctype\.h         {printf("��ϳ��.�");}
dir\.h         {printf("�޸�.�");}
dos\.h         {printf("���.�");}
errno\.h         {printf("���ݽ�ע.�");}
float\.h         {printf("˵��.�");}
io\.h         {printf("��.�");}
limits\.h         {printf("����.�");}
locale\.h         {printf("�������.�");}
math\.h         {printf("����.�");}
mem\.h         {printf("������.�");}
process\.h         {printf("������.�");}
setjmp\.h         {printf("���ڡ�.�");}
signal\.h         {printf("ע���.�");}
stdarg\.h         {printf("��Ƴ���.�");}
stddef\.h         {printf("��Ƴ���.�");}
stdio\.h         {printf("��Ƴ��.�");}
stdlib\.h         {printf("��Ƴ���.�");}
string\.h         {printf("����.�");}
stat\.h         {printf("������.�");}
time\.h         {printf("���.�");}
timeb\.h         {printf("�_���.�");}
\{         {printf("���");}
\}         {printf("�����");}
\#define         {printf("#�����");}
\#elif         {printf("#��_���");}
\#else         {printf("#������");}
\#endif         {printf("#�����_���");}
\#error         {printf("#���ݽ�");}
\#if         {printf("#���");}
\#ifdef         {printf("#���_�����");}
\#ifndef         {printf("#���_������");}
\#include         {printf("#������");}
\#line         {printf("#Ȣ����");}
\#pragma         {printf("#���");}
\#undef         {printf("#������");}
BUFSIZ         {printf("��_���");}
CHAR_BIT         {printf("�����_�۽");}
CHAR_MAX         {printf("�����_���");}
CHAR_MIN         {printf("�����_�����");}
CHILD_MAX         {printf("����_���");}
CLK_TCK         {printf("����_�۳");}
DBL_DIG         {printf("���۵_˵��");}
DBL_EPSILON         {printf("���۵_����");}
DBL_MANT_DIG         {printf("���۵_�����");}
DBL_MAX         {printf("���۵_���");}
DBL_MIN         {printf("���۵_�����");}
DIR         {printf("�޸�");}
EDOM         {printf("���_���");}
EOF         {printf("���������");}
ERANGE         {printf("������");}
EXIT_FAILURE         {printf("�۳��_���ݽ�");}
EXIT_SUCCESS         {printf("�۳��_���");}
FILE         {printf("����");}
FILENAME_MAX         {printf("�������_���");}
FLT_DIG         {printf("˵��_˵��");}
FLT_EPSILON         {printf("˵��_����");}
FLT_MANT_DIG         {printf("˵��_�����");}
FLT_MAX         {printf("˵��_���");}
FLT_MIN         {printf("˵��_�����");}
FLT_RADIX         {printf("˵��_����");}
FOPEN_MAX         {printf("�_����_���");}
HUGE_VAL         {printf("�����_���");}
INFINITY         {printf("�����");}
INT_MAX         {printf("�����ڢ�_���");}
INT_MIN         {printf("�����ڢ�_�����");}
LDBL_DIG         {printf("�_����_˵��");}
LDBL_EPSILON         {printf("�_����_����");}
LDBL_MANT_DIG         {printf("�_����_�����");}
LDBL_MAX         {printf("�_����_���");}
LDBL_MIN         {printf("�_����_�����");}
LONG_MAX         {printf("����_���");}
LONG_MIN         {printf("����_�����");}
L_tmpnam         {printf("�_����۳");}
NAN         {printf("�_���");}
NDEBUG         {printf("�_ע����");}
NULL         {printf("�����");}
RAND_MAX         {printf("�����_���");}
SCHAR_MAX         {printf("�_�����_���");}
SCHAR_MIN         {printf("�_�����_�����");}
SEEK_CUR         {printf("��������_��");}
SEEK_END         {printf("���_��");}
SEEK_SET         {printf("����_��");}
SHRT_MAX         {printf("Ѷ�_���");}
SHRT_MIN         {printf("Ѷ�_�����");}
SIBGABRT         {printf("ע�_���");}
SIGFPE         {printf("ע�_�_���ݽ�");}
SIGILL         {printf("ע�_����");}
SIGINT         {printf("ע�_�۶��");}
SIGSEGV         {printf("ע�_���");}
SIGTERM         {printf("ע�_���");}
SIG_DFL         {printf("ע�_�����");}
SIG_ERR         {printf("ע�_���ݽ�");}
SIG_IGN         {printf("ע�_����");}
TMP_MAX         {printf("����۳_���");}
UCHAR_MAX         {printf("��_�����_���");}
UINT_MAX         {printf("��_�����ڢ�_���");}
ULONG_MAX         {printf("��_����_���");}
USHRT_MAX         {printf("��_Ѷ�_���");}
\\a         {printf("\\�");}
\\b         {printf("\\�");}
\\f         {printf("\\�");}
\\n         {printf("\\�");}
\\r         {printf("\\�");}
\\t         {printf("\\�");}
\\v         {printf("\\�");}
\\x         {printf("\\�");}
____DATE____         {printf("__���__");}
____FILE____         {printf("__����__");}
____LINE____         {printf("__Ȣ����__");}
____STDC____         {printf("__��Ƴ__");}
____TIME____         {printf("__���__");}
_exit         {printf("_�۳��");}
abort         {printf("���");}
abs         {printf("���");}
asctime         {printf("���_�ܳ");}
asm         {printf("͢���");}
assert         {printf("������");}
atexit         {printf("�۳��_��");}
atof         {printf("�_��_�");}
atoi         {printf("�_��_�");}
atol         {printf("�_��_�");}
auto         {printf("���£");}
break         {printf("�����");}
bsearch         {printf("����_��");}
calloc         {printf("��������");}
case         {printf("���");}
ceil         {printf("������");}
char         {printf("�����");}
chdir         {printf("�_����");}
clearerr         {printf("���_���ݽ�");}
clock         {printf("����");}
clock_t         {printf("����_��ϳ��");}
close         {printf("ʢ�");}
closedir         {printf("ʢ�_�޸�");}
const         {printf("�����");}
continue         {printf("����");}
ctime         {printf("�_���");}
default         {printf("���");}
difftime         {printf("�_����");}
dirname         {printf("�_���");}
div         {printf("�ڵ");}
div_t         {printf("�ڵ_��ϳ��");}
do         {printf("���");}
double         {printf("���۵��");}
else         {printf("������");}
enum         {printf("����ڵ�");}
errno         {printf("���ݽ�_ע");}
exit         {printf("�۳��");}
extern         {printf("�����");}
fabs         {printf("�_���");}
fclose         {printf("�_ʢ�");}
feof         {printf("�_�����");}
ferror         {printf("�_���ݽ�");}
fflush         {printf("�_���");}
fgetc         {printf("�_�����_��");}
fgetpos         {printf("�_�����_��");}
fgets         {printf("�_����_��");}
float         {printf("˵��");}
floor         {printf("��������");}
fmod         {printf("�_���");}
fopen         {printf("�_����");}
for         {printf("����");}
fork         {printf("���ں�");}
fpos_t         {printf("�_�����_��ϳ��");}
fprintf         {printf("�_�۴�");}
fputc         {printf("�_�����_��");}
fputs         {printf("�_����_��");}
fread         {printf("�_����");}
free         {printf("�ݳ��");}
freopen         {printf("�_�_����");}
friend         {printf("�����");}
fscanf         {printf("�_�޹�");}
fseek         {printf("�_�ڰ");}
fsetpos         {printf("�_�����_��");}
fstat         {printf("�_������");}
ftell         {printf("�_��ڰ");}
fwrite         {printf("�_����");}
getc         {printf("�_��");}
getchar         {printf("�����_��");}
getenv         {printf("��_�����");}
gets         {printf("����_��");}
gettime      {printf("���_��");}
gmtime         {printf("�_�̽");}
goto         {printf("�ڰ");}
if         {printf("���");}
inline         {printf("�������");}
int         {printf("�����ڢ�");}
isalnum         {printf("��_�����_���");}
isalpha         {printf("��_�����");}
iscntrl         {printf("��_��͢����");}
isdigit         {printf("��_���");}
isfinite         {printf("��_�����");}
isgraph         {printf("��_�����");}
islower         {printf("��_���");}
isodigit         {printf("��_��轳");}
isprint         {printf("��_���");}
ispunct         {printf("��_�����");}
isspace         {printf("��_����");}
isupper         {printf("��_ʿ��");}
isxdigit         {printf("��_�����ճ");}
jmp_buf         {printf("�ڡ�_��");}
kill         {printf("������");}
labs         {printf("�_���");}
lconv         {printf("����_���");}
ldiv         {printf("�_�ڵ");}
ldiv_t         {printf("�_�ڵ_��ϳ��");}
localeconv         {printf("�������_����");}
localtime         {printf("�_�������");}
long         {printf("����");}
longjmp         {printf("����_�ڡ�");}
malloc         {printf("��_������");}
memchr         {printf("�_�����");}
memcmp         {printf("�_���");}
memcpy         {printf("�_Ƴ�");}
memmove         {printf("�_ؽڰ");}
memset         {printf("�_ϴ�");}
mkdir         {printf("�޸�_����");}
mktime         {printf("�_����");}
offsetof         {printf("������");}
open         {printf("����");}
opendir         {printf("�޸�_����");}
operator         {printf("��ѳ");}
pause         {printf("����");}
perror         {printf("�۴�_���ݽ�");}
pow         {printf("���");}
printf         {printf("�_�۴�");}
private         {printf("�ۺ�");}
protected         {printf("ϳ����");}
ptrdiff_t         {printf("�޸�_���_��ϳ��");}
public         {printf("����");}
putc         {printf("�_��");}
putchar         {printf("�����_��");}
puts         {printf("����_��");}
qsort         {printf("���۳");}
raise         {printf("��ڰ");}
rand         {printf("�����");}
read         {printf("����");}
readdir         {printf("�޸�_����");}
realloc         {printf("��ƣ_������");}
register         {printf("������");}
remove         {printf("ؽڰ");}
rename         {printf("���");}
return         {printf("����");}
rewind         {printf("���ݥ�");}
rewinddir         {printf("�޸�_����");}
rmdir         {printf("�޸�_ؽڰ");}
scanf         {printf("�_�޹�");}
setbuf         {printf("ϴ�_��");}
setjmp         {printf("��ڰ_�ڡ�");}
setlocale         {printf("ϴ�_�������");}
settime      {printf("���_ϴ�");}
setvbuf         {printf("ϴ�_���");}
short         {printf("Ѷ�");}
sig_atomic_t         {printf("ע�_�����_��ϳ��");}
signal         {printf("ע���");}
signed         {printf("�������");}
sigpending         {printf("ע�_�ڳ�");}
sigsuspend         {printf("ע�_���");}
size_t         {printf("���_��ϳ��");}
sizeof         {printf("���");}
sprintf         {printf("���_�۴�");}
sqrt         {printf("���_���");}
srand         {printf("�����");}
sscanf         {printf("����_�޹�");}
static         {printf("���");}
stderr         {printf("��Ƴ_���ݽ�");}
stdin         {printf("��Ƴ_�����");}
stdout         {printf("��Ƴ_�۳��");}
strcat         {printf("�_����");}
strchr         {printf("�_�����");}
strcmp         {printf("�_���");}
strcpy         {printf("�_Ƴ�");}
strcspn         {printf("�_��");}
strerror         {printf("�_���ݽ�");}
strftime         {printf("�_����");}
strlen         {printf("�_���");}
strncat         {printf("�_����");}
strncmp         {printf("�_����");}
strncpy         {printf("�_Ƴ��");}
strrchr         {printf("�_���");}
strspn         {printf("�_���");}
strstr         {printf("�_����");}
strtod         {printf("�_��_˵��");}
strtok         {printf("�_����");}
strtol         {printf("�_��_����");}
strtoul         {printf("�_��_�����");}
struct         {printf("�����");}
switch         {printf("���");}
system         {printf("�������");}
template         {printf("�ڡ��");}
time         {printf("���");}
time_t         {printf("���_��ϳ��");}
times         {printf("���");}
tm         {printf("Ȣ�ڢ�");}
tmpfile         {printf("����۳_�");}
tmpnam         {printf("����۳");}
tolower         {printf("���");}
toupper         {printf("ʿ��");}
typedef         {printf("��ϳ��");}
ungetc         {printf("�����_����");}
union         {printf("���");}
unsigned         {printf("��������");}
va_arg         {printf("���_���");}
va_end         {printf("���_�����");}
va_list         {printf("���_�޸�");}
va_start         {printf("���_����");}
vfprintf         {printf("˴_�۴�");}
virtual         {printf("��");}
void         {printf("�����");}
volatile         {printf("������");}
vprintf         {printf("�_�۴�");}
vsprintf         {printf("��_�۴�");}
wait         {printf("�ݳ�");}
wchar_t         {printf("�_�����_��ϳ��");}
while         {printf("��³");}
write         {printf("�_�۴�");}
 
%%
