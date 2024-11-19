#include <iostream>
#include "./include/euler_method.h"
#include "./include/runge_kutta_method.h"
#include "./include/utils.h"
#include "./include/critical_alpha.h"

int main() {
    double m = 1.0;      // масса тела (кг)
    double alpha = 0.5;  // коэффициент вязкого трения (Н·с/м)
    double g = 9.81;     // ускорение свободного падения (м/с^2)
    double v0 = 0.0;     // начальная скорость (м/с)
    double t0 = 0.0;     // начальное время (с)
    double t_end = 10.0; // конечное время (с)
    double dt = 0.1;     // шаг времени (с)
    double v_pred = 19.62; // предельная скорость (м/с)

    std::cout << "Метод Эйлера:" << std::endl;
    auto euler_velocities = euler_method(m, alpha, g, v0, t0, t_end, dt);
    print_results(euler_velocities, dt);
    save_results_to_file(euler_velocities, dt, "../results/euler_results.csv");


    std::cout << "\nМетод Рунге-Кутты 4-го порядка:" << std::endl;
    auto rk_velocities = runge_kutta_method(m, alpha, g, v0, t0, t_end, dt);
    print_results(rk_velocities, dt);
    save_results_to_file(rk_velocities, dt, "../results/runge_kutta_results.csv");


    // Вычисление критического коэффициента трения
    double alpha_crit = find_critical_alpha(m, g, v_pred);
    std::cout << "\nКритическое значение коэффициента трения: " << alpha_crit << std::endl;

    return 0;
}

