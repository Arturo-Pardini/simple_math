/** \file simple_math:h
    \brief a toy exampke of math library
	\author Arturo Pardini
	
	
*/

#ifndef _SIMPLEMATH_   //se non è mai stato definito    così non ho problemi di redefinizione di funzioni
#define _SIMPLEMATH_   //allora lo definisco
typedef struct complex_int {
	int re;
	int imm;
} cx_int_t;

typedef struct complex_float {
	int re;
	int imm;
} cx_float_t;

float mean (int a, int b);
cx_float_t cx_mean (cx_int_t a,cx_int_t b);

int max ( int a, int b);
#endif