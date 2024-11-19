#ifndef RUNGE_KUTTA_METHOD_H
#define RUNGE_KUTTA_METHOD_H

#include <vector>

std::vector<double> runge_kutta_method(double m, double alpha, double g, double v0, double t0, double t_end, double dt);

#endif
