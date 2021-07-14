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


#define UNI_LEN 70

  unsigned char unicode_hin[UNI_LEN][3] = {
    {21, 9, '�'}, //1
    {22, 9, '�'},
    {23, 9, '�'},
    {24, 9, '�'},
    {25, 9, '�'}, //5

    {26, 9, '�'}, //6
    {27, 9, '�'},
    {28, 9, '�'},
    {29, 9, '�'},
    {30, 9, '�'}, //10

    {31, 9, '�'}, //11
    {32, 9, '�'},
    {33, 9, '�'},
    {34, 9, '�'},
    {35, 9, '�'}, //15

    {36, 9, '�'}, //16
    {37, 9, '�'},
    {38, 9, '�'},
    {39, 9, '�'},
    {40, 9, '�'}, //20

    {41, 9, '�'}, //21


    {42, 9, '�'}, //22
    {43, 9, '�'},
    {44, 9, '�'},
    {45, 9, '�'},
    {46, 9, '�'}, //26

    {47, 9, '�'}, //27
    {48, 9, '�'},
    {50, 9, '�'},
    {53, 9, '�'},
    {54, 9, '�'}, //31

    {55, 9, '�'}, //32
    {56, 9, '�'},
    {57, 9, '�'}, //34

    {2, 9, '�'}, //35
    {3, 9, '�'},
    {1, 9, '�'},
    {60, 9, '�'}, //38

    {5, 9, '�'}, //39
    {77, 9, '�'}, //40

    {6, 9, '�'}, //41
    {62, 9, '�'},

    {7, 9, '�'}, //43
    {63, 9, '�'},

    {8, 9, '�'}, //44
    {64, 9, '�'},

    {9, 9, '�'}, //45
    {65, 9, '�'}, //46

    {10, 9, '�'}, //47
    {66, 9, '�'},

    {11, 9, '�'}, //49
    {67, 9, '�'},

    {14, 9,  '�'}, //51
    {70, 9,  '�'},

    {15, 9, '�'}, //53
    {71, 9, '�'},

    {16, 9, '�'}, //55
    {72, 9, '�'},

    {19, 9, '�'}, //57
    {75, 9, '�'},

    {20, 9, '�'}, //59
    {76, 9, '�'},

    {13, 9, '�'}, //61
    {69, 9, '�'},

    {17, 9, '�'}, //63
    {73, 9, '�'},

    {51, 9, '�'}, //65
    {100, 9, '�'},
    
    {121, 9, '�'}, //67: \u0979 placed at \x80
    
    {61, 9, '�'} //68: avagraha

  };


#ifdef __cplusplus
}
#endif



#endif

