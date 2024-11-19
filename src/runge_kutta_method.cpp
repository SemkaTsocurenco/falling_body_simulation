#include "../include/runge_kutta_method.h"

double acceleration(double v, double m, double alpha, double g) {
    return g - (alpha / m) * v;
}

std::vector<double> runge_kutta_method(double m, double alpha, double g, double v0, double t0, double t_end, double dt) {
    std::vector<double> velocities;
    double v = v0;
    double t = t0;

    while (t <= t_end) {
        velocities.push_back(v);

        double k1 = dt * acceleration(v, m, alpha, g);
        double k2 = dt * acceleration(v + 0.5 * k1, m, alpha, g);
        double k3 = dt * acceleration(v + 0.5 * k2, m, alpha, g);
        double k4 = dt * acceleration(v + k3, m, alpha, g);

        v += (k1 + 2 * k2 + 2 * k3 + k4) / 6.0;
        t += dt;
    }

    return velocities;
}
