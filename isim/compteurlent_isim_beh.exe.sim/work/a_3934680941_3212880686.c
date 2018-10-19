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
static const char *ng0 = "/home/asalazar/Documents/VHDL/compteur8/diviseur.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1006216973935652998_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3934680941_3212880686_p_0(char *t0)
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
    int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 2784U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);

LAB6:    t2 = (t0 + 3352);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t5 = (t0 + 3352);
    *((int *)t5) = 0;
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t6 = (t4 == (unsigned char)3);
    if (t6 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 1808U);
    t5 = *((char **)t2);
    t13 = *((int *)t5);
    t2 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t12, t13, 32);
    t4 = 1;
    if (32U == 32U)
        goto LAB13;

LAB14:    t4 = 0;

LAB15:    if (t4 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5280U);
    t5 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t12, t3, t2, 1);
    t7 = (t0 + 3448);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t5, 32U);
    xsi_driver_first_trans_fast(t7);

LAB9:    goto LAB2;

LAB5:    t3 = (t0 + 992U);
    t4 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t4 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(36, ng0);
    t2 = xsi_get_transient_memory(32U);
    memset(t2, 0, 32U);
    t5 = t2;
    memset(t5, (unsigned char)2, 32U);
    t7 = (t0 + 3448);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 32U);
    xsi_driver_first_trans_fast(t7);
    goto LAB9;

LAB11:    xsi_set_current_line(40, ng0);
    t9 = xsi_get_transient_memory(32U);
    memset(t9, 0, 32U);
    t10 = t9;
    memset(t10, (unsigned char)2, 32U);
    t11 = (t0 + 3448);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 32U);
    xsi_driver_first_trans_fast(t11);
    goto LAB9;

LAB13:    t14 = 0;

LAB16:    if (t14 < 32U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t7 = (t3 + t14);
    t8 = (t2 + t14);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB14;

LAB18:    t14 = (t14 + 1);
    goto LAB16;

}

static void work_a_3934680941_3212880686_p_1(char *t0)
{
    char t3[16];
    char *t1;
    char *t2;
    char *t4;
    int t5;
    unsigned char t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 1808U);
    t4 = *((char **)t1);
    t5 = *((int *)t4);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t3, t5, 32);
    t6 = 1;
    if (32U == 32U)
        goto LAB5;

LAB6:    t6 = 0;

LAB7:    if (t6 != 0)
        goto LAB3;

LAB4:
LAB11:    t15 = (t0 + 3512);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t15);

LAB2:    t20 = (t0 + 3368);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t10 = (t0 + 3512);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t10);
    goto LAB2;

LAB5:    t7 = 0;

LAB8:    if (t7 < 32U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t8 = (t2 + t7);
    t9 = (t1 + t7);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB6;

LAB10:    t7 = (t7 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}


extern void work_a_3934680941_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3934680941_3212880686_p_0,(void *)work_a_3934680941_3212880686_p_1};
	xsi_register_didat("work_a_3934680941_3212880686", "isim/compteurlent_isim_beh.exe.sim/work/a_3934680941_3212880686.didat");
	xsi_register_executes(pe);
}
