#include "../include/critical_alpha.h"

double find_critical_alpha(double m, double g, double v_pred) {
    // Вычисляем критическое значение коэффициента трения
    return (m * g) / v_pred;
}
