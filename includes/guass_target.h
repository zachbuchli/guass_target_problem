//
// Created by zach on 6/10/23.
//
#ifndef GUASS_TARGET_PROBLEM_GUASS_TARGET_H
#define GUASS_TARGET_PROBLEM_GUASS_TARGET_H

#include <gsl/gsl_vector.h>
#include <stdbool.h>

/**
 * Guass Target Function. Given:
 * @param r1 position vector of interceptor
 * @param r2 position vector of target after time
 * @param dm direction of motion.  'short' or 'long'
 * @param time time of flight between r1 and r2
 * @return delta_v_t struct that returns two velocity vectors v1 and v2.
 */
extern bool guass_target(gsl_vector *r1, gsl_vector *r2, int dm, double time, gsl_vector *v1, gsl_vector *v2);

#endif //GUASS_TARGET_PROBLEM_GUASS_TARGET_H
