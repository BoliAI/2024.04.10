/*
Copyright (C) 2003-2023 Abhishek Choudhary
This file is part of the AP Code for Indian Script Representation.

The AP Code for Indian Script Representation is free software; 
you can redistribute it and/or modify it under the terms of the 
GNU General Public License as published by the 
Free Software Foundation; either version 2 of the License, or 
(at your option) any later version.

The AP Code for Indian Script Representation is distributed in the hope 
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

        20-Jan-2006, Added the modifications section,
                        Abhishek Choudhary <hi_pedler>,
                        choudhary@indicybers.net

End of modifications.
*/

/* ISCII to APCISR mapping table */

#ifndef __APCISR_H__
#define __APCISR_H__
#define APCISR_LEN 82


#ifdef __cplusplus
extern "C"
{
#endif


  static int _urdha = 0;
  static int _madhya = 3;
  static int _nimna = 6;

  static int _matrik = 0;
  static int _lipik = 1;
  static int _purak = 2;

  typedef struct
  {
    char urdha[1024];		/*originaly 1024 each of the three */
    char madhya[1024];
    char nimna[1024];
    int curpos;
  } cisr;

  typedef struct
  {
    char *rmn;
    char *acii;
    int purna;
    int grid[9];
  } grid9;

  static grid9 apcisr_chrt[APCISR_LEN] = {

    {"_hra", "���", 1, {0, 0, 0,
			0, 103, 32,
			0, 0, 0}},

    {"kxa", "���", 2, {0, 0, 0,
		       0, 40, 2,
		       0, 0, 0}},

    {"_tra", "���", 2, {0, 0, 0,
			0, 41, 2,
			0, 0, 0}},

    {"j_yna", "��", 2, {0, 0, 0,
			 0, 42, 2,
			 0, 0, 0}},

    {"_dya", "���", 2, {0, 0, 0,
			0, 43, 2,
			0, 0, 0}},

    {"_t_ta", "���", 2, {0, 0, 0,
			 0, 51, 2,
			 0, 0, 0}},

    {"k_ta", "���", 2, {0, 0, 0,
			0, 48, 1,
			0, 0, 0}},

    {"shra", "���", 2, {0, 0, 0,
			0, 44, 2,
			0, 0, 0}},

    {"_ee_m", "��", 1, {0, 1, 16,
			0, 2, 32,
			0, 0, 0}},

    {"_h_ri", "��", 1, {0, 0, 0,
			0, 104, 32,
			0, 0, 0}},

    {"_rda", "��", 1, {0, 0, 0,
		       0, 19, 32,
		       0, 32, 0}},

    {"_rdha", "��", 1, {0, 0, 0,
			0, 20, 32,
			0, 32, 0}},

    {"ru", "��", 1, {0, 0, 0,
		     0, 46, 32,
		     0, 0, 0}},

    {"roo", "��", 1, {0, 0, 0,
		      0, 47, 32,
		      0, 0, 0}},

    {"r", "��", 1, {0, 0, 0,
		    0, 33, 32,
		    0, 64, 0}},

    {"^ra", "��", 0, {0, 0, 0,
		      0, 64, 0,
		      0, 0, 0}},

    {"_h", "��", 1, {0, 0, 0,
		     0, 39, 32,
		     0, 64, 0}},

    {"_a", "�", 2, {0, 0, 0,
		    0, 1, 2,
		    0, 0, 0}},

    {"_aa", "�", 2, {0, 0, 0,
		     0, 1, 6,
		     0, 0, 0}},

    {"^aa", "�", 0, {0, 0, 0,
		     0, 0, 4,
		     0, 0, 0}},

    {"_i", "�", 1, {0, 0, 0,
		    0, 2, 32,
		    0, 0, 0}},

    {"^i", "�", 0, {1, 2, 0,
		    8, 0, 0,
		    0, 0, 0}},

    {"_ee", "�", 1, {0, 1, 0,
		     0, 2, 32,
		     0, 0, 0}},

    {"^ee", "�", 0, {0, 1, 2,
		     0, 0, 4,
		     0, 0, 0}},

    {"_u", "�", 1, {0, 0, 0,
		    0, 3, 32,
		    0, 0, 0}},

    {"^u", "�", 0, {0, 0, 0,
		    0, 0, 0,
		    0, 0, 2}},

    {"_oo", "�", 2, {0, 0, 0,
		     0, 4, 1,
		     0, 0, 0}},

    {"^oo", "�", 0, {0, 0, 0,
		     0, 0, 0,
		     0, 0, 1}},

    {"_ri", "�", 1, {0, 0, 0,
		     0, 6, 32,
		     0, 16, 0}},

    {"^_ri", "�", 0, {0, 0, 0,
		      0, 0, 0,
		      0, 16, 0}},

    {"_ae", "�", 1, {0, 0, 0,
		     0, 5, 32,
		     0, 0, 0}},

    {"^ae", "�", 0, {0, 4, 0,
		     0, 0, 0,
		     0, 0, 0}},

    {"_ai", "�", 1, {0, 4, 0,
		     0, 5, 32,
		     0, 0, 0}},

    {"^ai", "�", 0, {0, 8, 0,
		     0, 0, 0,
		     0, 0, 0}},

    {"_oa", "�", 2, {0, 0, 4,
		     0, 1, 6,
		     0, 0, 0}},

    {"^oa", "�", 0, {0, 0, 4,
		     0, 0, 4,
		     0, 0, 0}},

    {"_ou", "�", 2, {0, 0, 8,
		     0, 1, 6,
		     0, 0, 0}},

    {"^ou", "�", 0, {0, 0, 8,
		     0, 0, 4,
		     0, 0, 0}},

    {"_au", "�", 2, {0, 0, 64,
		     0, 1, 6,
		     0, 0, 0}},

    {"^au", "�", 0, {0, 0, 64,
		     0, 0, 4,
		     0, 0, 0}},

    {"_ao", "�", 1, {0, 64, 0,
		     0, 5, 32,
		     0, 0, 0}},

    {"^ao", "�", 0, {0, 64, 0,
		     0, 0, 0,
		     0, 0, 0}},

    {"ka", "�", 3, {0, 0, 0,
		    0, 7, 1,
		    0, 0, 0}},

    {"kha", "�", 2, {0, 0, 0,
		     0, 8, 2,
		     0, 0, 0}},

    {"ga", "�", 2, {0, 0, 0,
		    0, 9, 2,
		    0, 0, 0}},

    {"gha", "�", 2, {0, 0, 0,
		     0, 10, 2,
		     0, 0, 0}},

    {"_nga", "�", 1, {0, 0, 0,
		      0, 11, 32,
		      0, 0, 0}},

    {"cha", "�", 2, {0, 0, 0,
		     0, 12, 2,
		     0, 0, 0}},

    {"chha", "�", 1, {0, 0, 0,
		      0, 13, 32,
		      0, 0, 0}},

    {"ja", "�", 2, {0, 0, 0,
		    0, 14, 2,
		    0, 0, 0}},

    {"jha", "�", 2, {0, 0, 0,
		     0, 15, 2,
		     0, 0, 0}},

    {"_yna", "�", 2, {0, 0, 0,
		      0, 16, 2,
		      0, 0, 0}},

    {"ta", "�", 1, {0, 0, 0,
		    0, 17, 32,
		    0, 0, 0}},

    {"tha", "�", 1, {0, 0, 0,
		     0, 18, 32,
		     0, 0, 0}},

    {"da", "�", 1, {0, 0, 0,
		    0, 19, 32,
		    0, 0, 0}},

    {"dha", "�", 1, {0, 0, 0,
		     0, 20, 32,
		     0, 0, 0}},

    {"_nna", "�", 2, {0, 0, 0,
		      0, 21, 2,
		      0, 0, 0}},

    {"_ta", "�", 2, {0, 0, 0,
		     0, 22, 2,
		     0, 0, 0}},

    {"_tha", "�", 2, {0, 0, 0,
		      0, 23, 2,
		      0, 0, 0}},

    {"_da", "�", 1, {0, 0, 0,
		     0, 24, 32,
		     0, 128, 0}},

    {"_dha", "�", 2, {0, 0, 0,
		      0, 25, 2,
		      0, 0, 0}},

    {"na", "�", 2, {0, 0, 0,
		    0, 26, 2,
		    0, 0, 0}},

    {"pa", "�", 2, {0, 0, 0,
		    0, 27, 2,
		    0, 0, 0}},

    {"pha", "�", 3, {0, 0, 0,
		     0, 28, 1,
		     0, 0, 0}},

    {"ba", "�", 2, {0, 0, 0,
		    0, 29, 2,
		    0, 0, 0}},

    {"bha", "�", 2, {0, 0, 0,
		     0, 30, 2,
		     0, 0, 0}},

    {"ma", "�", 2, {0, 0, 0,
		    0, 31, 2,
		    0, 0, 0}},

    {"ya", "�", 2, {0, 0, 0,
		    0, 32, 2,
		    0, 0, 0}},

    {"ra", "�", 1, {0, 0, 0,
		    0, 33, 32,
		    0, 0, 0}},

    {"la", "�", 2, {0, 0, 0,
		    0, 34, 2,
		    0, 0, 0}},

    {"wa", "�", 2, {0, 0, 0,
		    0, 35, 2,
		    0, 0, 0}},

    {"lvra", "�", 1, {0, 0, 0,
		      0, 105, 32,
		      0, 0, 0}},

    {"sha", "�", 2, {0, 0, 0,
		     0, 36, 2,
		     0, 0, 0}},

    {"xa", "�", 2, {0, 0, 0,
		    0, 37, 2,
		    0, 0, 0}},

    {"sa", "�", 2, {0, 0, 0,
		    0, 38, 2,
		    0, 0, 0}},

    {"_ha", "�", 1, {0, 0, 0,
		     0, 39, 32,
		     0, 0, 0}},

    {"_m", "�", 0, {0, 0, 16,
		    0, 0, 0,
		    0, 0, 0}},

    {"_hh", "�", 0, {0, 0, 0,
		     0, 0, 16,
		     0, 0, 0}},

    {"_na", "�", 0, {0, 0, 32,
		     0, 0, 0,
		     0, 0, 0}},

    {"^za", "�", 0, {0, 0, 0,
		     0, 0, 0,
		     0, 32, 0}},

    {"|", "�", 1, {0, 0, 0,
		   0, 50, 0,
		   0, 0, 0}},

    {"^", "�", 0, {0, 0, 0,
		   0, 0, 0,
		   0, 0, 64}}
  };
#ifdef __cplusplus
}
#endif

#endif
