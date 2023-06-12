//
// Created by zach on 6/10/23.
//
#include <stdio.h>
#include <gsl/gsl_math.h>
#include <gsl/gsl_vector.h>
#include <gsl/gsl_blas.h>
#include <stdbool.h>

#include "guass_target.h"



bool guass_target(gsl_vector* r1, gsl_vector* r2, int dm, double time, gsl_vector *v1, gsl_vector *v2)
{

    // Calc the dot product of position vectors
    double r_dot_product_result;
    if(gsl_blas_ddot(r1, r2, &r_dot_product_result) != 0){
        return false;
    }

    printf("%s %g\n","Result of dot product", r_dot_product_result);


    double cos_delta_v = 0;

    return true;
}
