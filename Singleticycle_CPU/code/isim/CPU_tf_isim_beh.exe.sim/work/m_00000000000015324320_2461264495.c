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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/gd/Desktop/CPU/DataMemory.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};



static void Initial_31_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(31, ng0);

LAB2:    xsi_set_current_line(32, ng0);
    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2088);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);
    t12 = ((char*)((ng3)));
    t13 = (t0 + 1928);
    t16 = (t0 + 1928);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 1928);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 2088);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 2088);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2088);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB7;

}

static void Always_36_1(char *t0)
{
    char t6[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3576);
    *((int *)t2) = 1;
    t3 = (t0 + 3288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(39, ng0);

LAB14:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1928);
    t4 = (t0 + 1928);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = (t0 + 1928);
    t21 = (t8 + 64U);
    t22 = *((char **)t21);
    t28 = (t0 + 1208U);
    t29 = *((char **)t28);
    xsi_vlog_generic_convert_array_indices(t6, t31, t7, t22, 2, 1, t29, 32, 2);
    t28 = (t6 + 4);
    t9 = *((unsigned int *)t28);
    t40 = (!(t9));
    t30 = (t31 + 4);
    t10 = *((unsigned int *)t30);
    t41 = (!(t10));
    t42 = (t40 && t41);
    if (t42 == 1)
        goto LAB15;

LAB16:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(37, ng0);

LAB13:    xsi_set_current_line(38, ng0);
    t28 = (t0 + 1928);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t32 = (t0 + 1928);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 1928);
    t36 = (t35 + 64U);
    t37 = *((char **)t36);
    t38 = (t0 + 1208U);
    t39 = *((char **)t38);
    xsi_vlog_generic_get_array_select_value(t31, 32, t30, t34, t37, 2, 1, t39, 32, 2);
    t38 = (t0 + 1768);
    xsi_vlogvar_assign_value(t38, t31, 0, 0, 32);
    goto LAB12;

LAB15:    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t31);
    t43 = (t11 - t12);
    t44 = (t43 + 1);
    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t31), t44);
    goto LAB16;

}


extern void work_m_00000000000015324320_2461264495_init()
{
	static char *pe[] = {(void *)Initial_31_0,(void *)Always_36_1};
	xsi_register_didat("work_m_00000000000015324320_2461264495", "isim/CPU_tf_isim_beh.exe.sim/work/m_00000000000015324320_2461264495.didat");
	xsi_register_executes(pe);
}
