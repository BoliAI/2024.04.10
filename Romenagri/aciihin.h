/*
Copyright (C) 2003-2023 Abhishek Choudhary
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
	
/* ACII to romenagri(saral) conversion table */

#ifndef __ACIIHIN_H__
#define __ACIIHIN_H__
#define ACII_HIN_LEN 75

#ifdef __cplusplus
extern "C"
{
#endif



  static char *acii_hin_chrt[ACII_HIN_LEN][2] = {
    {"", "�B"},
    {"a", "�"},
    {"^a", ""},
    {"aa", "�"},
    {"^aa", "�"},
    {"i", "�"},
    {"^i", "�"},
    {"i", "�"},
    {"^i", "�"},
    {"u", "�"},
    {"^u", "�"},
    {"oo", "�"},
    {"^oo", "�"},
    {"ri", "�"},
    {"^ri", "�"},
    {"e", "�"},
    {"^e", "�"},
    {"ai", "�"},
    {"^ai", "�"},
    {"o", "�"},
    {"^o", "�"},
    {"ou", "�"},
    {"^ou", "�"},
    {"o", "�"},
    {"^o", "�"},
    {"ao", "�"},
    {"^ao", "�"},
    {"ka", "�"},
    {"kha", "�"},
    {"ga", "�"},
    {"gha", "�"},
    {"na", "�"},
    {"cha", "�"},
    {"chha", "�"},
    {"ja", "�"},
    {"jha", "�"},
    {"na", "�"},
    {"ta", "�"},
    {"tha", "�"},
    {"da", "�"},
    {"dha", "�"},
    {"na", "�"},
    {"ta", "�"},
    {"tha", "�"},
    {"da", "�"},
    {"dha", "�"},
    {"na", "�"},
    {"pa", "�"},
    {"pha", "�"},
    {"ba", "�"},
    {"bha", "�"},
    {"ma", "�"},
    {"ya", "�"},
    {"ra", "�"},
    {"la", "�"},
    {"wa", "�"},
    {"lvra", "�"},
    {"sha", "�"},
    {"sha", "�"},
    {"sa", "�"},
    {"ha", "�"},
    {"n", "�"},
    {"h", "�"},
    {"n", "�"},
    {"", "�"},
    {"|", "�"},
    {"^", "�"},
    {"rda", "��"},
    {"rdha", "��"},
    {"^ra", "��"},
    {"r", "��"},
    {"ksha", "���"},
    {"tra", "���"},
    {"gya", "��"},
    {"shra", "���"}
  };

#ifdef __cplusplus
}
#endif


#endif
