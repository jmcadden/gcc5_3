/* Test the `vget_lows64' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vget_lows64 (void)
{
  int64x1_t out_int64x1_t;
  int64x2_t arg0_int64x2_t;

  out_int64x1_t = vget_low_s64 (arg0_int64x2_t);
}

/* { dg-final { cleanup-saved-temps } } */