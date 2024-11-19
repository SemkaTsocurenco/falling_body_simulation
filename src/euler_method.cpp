#include "../include/euler_method.h"

std::vector<double> euler_method(double m, double alpha, double g, double v0, double t0, double t_end, double dt) {
    std::vector<double> velocities;
    double v = v0;
    double t = t0;

    while (t <= t_end) {
        velocities.push_back(v);
        v += dt * (g - (alpha / m) * v);
        t += dt;
    }

    return velocities;
}
