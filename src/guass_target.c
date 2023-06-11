//
// Created by zach on 6/10/23.
//
#include <stdio.h>
#include <gsl/gsl_math.h>
#include <gsl/gsl_vector.h>

#include "guass_target.h"



int guass_target(void)
{
    int i = 0;
    gsl_vector *v = gsl_vector_alloc(3);

    for(i=0; i < 3; i++)
    {
        gsl_vector_set(v, i, 1.23 + i);
    }

    for (i = 0; i < 3; i++) /* OUT OF RANGE ERROR */
    {
        printf("v_%d = %g\n", i, gsl_vector_get(v, i));
    }

    gsl_vector_free(v);

    return 0;
}
