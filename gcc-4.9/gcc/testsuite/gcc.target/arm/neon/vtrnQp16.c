/* Test the `vtrnQp16' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0" } */
/* { dg-add-options arm_neon } */

#include "arm_neon.h"

void test_vtrnQp16 (void)
{
  poly16x8x2_t out_poly16x8x2_t;
  poly16x8_t arg0_poly16x8_t;
  poly16x8_t arg1_poly16x8_t;

  out_poly16x8x2_t = vtrnq_p16 (arg0_poly16x8_t, arg1_poly16x8_t);
}

/* { dg-final { scan-assembler "vtrn\.16\[ 	\]+\[qQ\]\[0-9\]+, \[qQ\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
