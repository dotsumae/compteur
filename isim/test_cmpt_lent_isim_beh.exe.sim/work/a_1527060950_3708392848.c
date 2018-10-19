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
    char t13[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t14;

LAB0:    t1 = (t0 + 3144U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 != 0)
        goto LAB4;

LAB6:    t2 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t4 != 0)
        goto LAB7;

LAB8:
LAB5:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 3592);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB4:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 5484);
    t7 = (t0 + 3528);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 8U);
    xsi_driver_first_trans_fast(t7);
    goto LAB5;

LAB7:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 1512U);
    t6 = *((char **)t3);
    t5 = *((unsigned char *)t6);
    t12 = (t5 == (unsigned char)3);
    if (t12 != 0)
        goto LAB9;

LAB11:    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 != 0)
        goto LAB12;

LAB13:
LAB10:    goto LAB5;

LAB9:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 1672U);
    t7 = *((char **)t3);
    t3 = (t0 + 3528);
    t8 = (t3 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t7, 8U);
    xsi_driver_first_trans_fast(t3);
    goto LAB10;

LAB12:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1992U);
    t6 = *((char **)t2);
    t2 = (t0 + 5440U);
    t7 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t13, t6, t2, 1);
    t8 = (t0 + 3528);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t14 = *((char **)t11);
    memcpy(t14, t7, 8U);
    xsi_driver_first_trans_fast(t8);
    goto LAB10;

LAB1:    return;
}


extern void work_a_1527060950_3708392848_init()
{
	static char *pe[] = {(void *)work_a_1527060950_3708392848_p_0};
	xsi_register_didat("work_a_1527060950_3708392848", "isim/test_cmpt_lent_isim_beh.exe.sim/work/a_1527060950_3708392848.didat");
	xsi_register_executes(pe);
}
