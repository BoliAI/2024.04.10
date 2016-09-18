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
	
/* ACII to UNICODE conversion table */


#ifndef __UNICODE_H__
#define __UNICODE_H__


#ifdef __cplusplus
extern "C"
{
#endif


#define UNI_LEN 65

  unsigned char unicode_hin[UNI_LEN][3] = {
    {21, 9, '�'},
    {22, 9, '�'},
    {23, 9, '�'},
    {24, 9, '�'},
    {25, 9, '�'},

    {26, 9, '�'},
    {27, 9, '�'},
    {28, 9, '�'},
    {29, 9, '�'},
    {30, 9, '�'},

    {31, 9, '�'},
    {32, 9, '�'},
    {33, 9, '�'},
    {34, 9, '�'},
    {35, 9, '�'},

    {36, 9, '�'},
    {37, 9, '�'},
    {38, 9, '�'},
    {39, 9, '�'},
    {40, 9, '�'},

    {42, 9, '�'},
    {43, 9, '�'},
    {44, 9, '�'},
    {45, 9, '�'},
    {46, 9, '�'},

    {47, 9, '�'},
    {48, 9, '�'},
    {50, 9, '�'},
    {53, 9, '�'},
    {54, 9, '�'},

    {55, 9, '�'},
    {56, 9, '�'},
    {57, 9, '�'},

    {2, 9, '�'},
    {3, 9, '�'},
    {1, 9, '�'},
    {60, 9, '�'},

    {5, 9, '�'},
    {77, 9, '�'},

    {6, 9, '�'},
    {62, 9, '�'},

    {7, 9, '�'},
    {63, 9, '�'},

    {8, 9, '�'},
    {64, 9, '�'},

    {9, 9, '�'},
    {65, 9, '�'},

    {10, 9, '�'},
    {66, 9, '�'},

    {11, 9, '�'},
    {67, 9, '�'},

    {15, 9, '�'},
    {71, 9, '�'},

    {16, 9, '�'},
    {72, 9, '�'},

    {19, 9, '�'},
    {75, 9, '�'},

    {20, 9, '�'},
    {76, 9, '�'},

    {13, 9, '�'},
    {69, 9, '�'},

    {17, 9, '�'},
    {73, 9, '�'},

    {51, 9, '�'},
    {100, 9, '�'}
  };


#ifdef __cplusplus
}
#endif



#endif
