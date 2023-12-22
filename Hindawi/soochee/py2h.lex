%{
/*
Copyright (C) 2003-2023 Abhishek Choudhary
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
*/

%}


%%

\'("\\\'"|.*)*\'                       {printf("%s",yytext);}
\"("\\\""|[^\"^\n]*)*\"                {printf("%s",yytext);}                                                                  
and       {printf("�����");}
as       {printf("Ԣ��");}
assert       {printf("�ڽݳ�Կ�");}
async       {printf("��̳��ܳ");}
await       {printf("�����");}
break       {printf("�ۿ����");}
class       {printf("�ϵ��");}
continue       {printf("����ڵۢ��");}
def       {printf("����Ըۢ��");}
del       {printf("��ѵۢ��");}
elif       {printf("����_����");}
else       {printf("����");}
except       {printf("����");}
exec       {printf("�����ϸ�");}
false       {printf("�����");}
finally       {printf("���ϳ�");}
for       {printf("��ע");}
from       {printf("�ݢ��");}
global       {printf("���Ȣ�");}
if       {printf("����");}
import       {printf("�۵����");}
in       {printf("��");}
is       {printf("����");}
None       {printf("��ܳ���");}
nonlocal       {printf("�����۳�_������");}
not       {printf("����");}
or       {printf("����");}
pass       {printf("�������");}
print       {printf("�����ۢ��");}
raise       {printf("�ࢸ�");}
return       {printf("���۵�");}
true       {printf("�ۺ�");}
try       {printf("�������ۢ��");}
while       {printf("����");}
with       {printf("��");}
yield       {printf("�۵�ʿ�");}
%%

