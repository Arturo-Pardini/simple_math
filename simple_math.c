/** \file simple_math:c
    \brief a toy exampke of math library
	\author Arturo Pardini
	
	
*/
#include "simple_math.h"
float mean (int a, int b){
	return (a+b)/2.0;
}
int max (int a, int b){
	if (a > b)
		return a;
	return b;
}

cx_float_t cx_mean (cx_int_t a, cx_int_t b){
	cx_float_t average;
	
	average.re = mean(a.re,b.re);
	average.imm = mean(a.imm,b.imm);
	
	return average;
}