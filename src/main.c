#include <stdio.h>
#include <stdlib.h>
#include <gsl/gsl_vector.h>

#include "guass_target.h"



int main(void)
{
    puts("Program Start...");
    const size_t POSITION_VECTOR_SIZE = 3;

    gsl_vector *r1 = gsl_vector_alloc(POSITION_VECTOR_SIZE);
    if(r1 == NULL){
        puts("Failed to allocate memory for r1.");
        return EXIT_FAILURE;
    }
    gsl_vector *r2 = gsl_vector_alloc(POSITION_VECTOR_SIZE);
    if(r2 == NULL){
        puts("Failed to allocate memory for r2.");
        return EXIT_FAILURE;
    }

    int dm = 0; // direction of motion 1 or -1.
    double time = 0.0; // time of flight.

    gsl_vector *v1 = gsl_vector_alloc(POSITION_VECTOR_SIZE);
    if(v1 == NULL){
        puts("Failed to allocate memory for r2.");
        return EXIT_FAILURE;
    }
    gsl_vector *v2 = gsl_vector_alloc(POSITION_VECTOR_SIZE);
    if(v2 == NULL){
        puts("Failed to allocate memory for r2.");
        return EXIT_FAILURE;
    }

    const double init_val = 1.1;
    gsl_vector_set_all(r1, init_val);
    gsl_vector_set_all(r2, init_val);

#ifdef DEBUG
    for(int i = 0; i < 3; i++){
        printf("%g\n", gsl_vector_get(r1, i));
    }
#endif

    if(!guass_target(r1, r2, dm, time, v1, v2)) {
        printf("%s\n", "Error calculating Gauss Target delta v.");
        return EXIT_FAILURE;
    }

    puts("Program end...");
    return EXIT_SUCCESS;
}
