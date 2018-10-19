/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ddf5b5d */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/asalazar/Documents/VHDL/compteur8/compteur.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1006216973935652998_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1527060950_3708392848_p_0(char *t0)
{
    char t12[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;

LAB0:    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);

LAB6:    t2 = (t0 + 3464);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 3464);
    *((int *)t5) = 0;
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t6 = (t4 == (unsigned char)2);
    if (t6 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t6 = (t4 == (unsigned char)3);
    if (t6 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t6 = (t4 == (unsigned char)2);
    if (t6 != 0)
        goto LAB13;

LAB14:
LAB9:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 3608);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 5500);
    t7 = (t0 + 3544);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 8U);
    xsi_driver_first_trans_fast(t7);
    goto LAB9;

LAB11:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t2 = (t0 + 3544);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 8U);
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB13:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1992U);
    t5 = *((char **)t2);
    t2 = (t0 + 5456U);
    t7 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t12, t5, t2, 1);
    t8 = (t0 + 3544);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t7, 8U);
    xsi_driver_first_trans_fast(t8);
    goto LAB9;

}


extern void work_a_1527060950_3708392848_init()
{
	static char *pe[] = {(void *)work_a_1527060950_3708392848_p_0};
	xsi_register_didat("work_a_1527060950_3708392848", "isim/test_cmpt_isim_beh.exe.sim/work/a_1527060950_3708392848.didat");
	xsi_register_executes(pe);
}
