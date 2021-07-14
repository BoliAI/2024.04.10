/*
Copyright (C) 2003,2004,2005,2006 Abhishek Choudhary
This file is part of the Romenagri Transliteration System.

The Romenagri Transliteration System is free software; 
you can redistribute it and/or modify it under the terms of the 
GNU General Public License as published by the 
Free Software Foundation; either version 2 of the License, or 
(at your option) any later version.

The Romenagri Transliteration System is distributed in the hope 
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

	19-Jan-2006, Added the modifications section,
                        Abhishek Choudhary <hi_pedler>,
                        choudhary@indicybers.net

End of modifications.
*/
	
/* ACII to romenagri conversion table */

/** IMPORTANT change on ^a (matra '^a') --  17-mar-2004*/
/** change undone */
/* however the pathology is that rmn='^a' is matched on empty string*/

#ifndef __ACII_H__
#define __ACII_H__
#define ACII_LEN 79

#ifdef __cplusplus
   extern "C" {
#endif



static char *acii_chrt[ACII_LEN][2]=
{
{"",    "�B"},           /*control should be at index 0*/
{"__",   "_"},           /*expand control underscore*/
{"_a",   "�"},
{"^a",    ""},           /*maatra 'a' is invisible in acii*/
{"_aa",  "�"},
{"^aa",  "�"},
{"_i",   "�"},
{"^i" ,  "�"},
{"_ee",  "�"},
{"^ee",  "�"},
{"_u",   "�"},
{"^u",   "�"},
{"_oo",  "�"},
{"^oo",  "�"},
{"_ri",  "�"},
{"^_ri", "�"},
{"_ae",  "�"},
{"^ae",  "�"},
{"_ai",  "�"},
{"^ai",  "�"},
{"_oa",  "�"},
{"^oa",  "�"},
{"_ou",  "�"},
{"^ou",  "�"},
{"_au",  "�"},
{"^au",  "�"},
{"_ao",  "�"},
{"^ao",  "�"},
{"ka",   "�"},
{"kha",  "�"},
{"ga",   "�"},
{"gha",  "�"},
{"_nga", "�"},
{"cha",  "�"},
{"chha", "�"},
{"ja",   "�"},
{"jha",  "�"},
{"_yna", "�"},
{"ta",   "�"},
{"tha",  "�"},
{"da",   "�"},
{"dha",  "�"},
{"_nna", "�"},
{"_ta",  "�"},
{"_tha", "�"},
{"_da",  "�"},
{"_dha", "�"},
{"na",   "�"},
{"pa",   "�"},
{"pha",  "�"},
{"ba",   "�"},
{"bha",  "�"},
{"ma",   "�"},
{"ya",   "�"},
{"ra",   "�"},
{"la",   "�"},
{"wa",   "�"},
{"lvra", "�"},
{"sha",  "�"},
{"xa",   "�"},
{"sa",   "�"},
{"_ha",  "�"},
{"_m",   "�"},    /*only for trailing bindu else find warg*/
{"_hh",  "�"},
{"_na",  "�"},
{"^za",  "�"},
{"|",    "�"},
{"^",    "�"},
{"_rda",  "��"},
{"_rdha", "��"},
{"^ra",   "��"},
{"r",     "��"},
{"kxa",  "���"},
{"_tra", "���"},
{"j_yna","��"},  /*correct to g_yna*/
{"shra", "���"},
{"_jza", "�"}, // \u0979 placed at \x80
{"_nza","�"},
{"_s","�"} //Avagraha
};

#ifdef __cplusplus
   }
#endif

#endif

