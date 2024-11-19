#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <vector>
#include <string>

void print_results(const std::vector<double>& velocities, double dt);
void save_results_to_file(const std::vector<double>& velocities, double dt, const std::string& filename);

#endif
