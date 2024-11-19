#include "../include/utils.h"
#include <fstream>

void print_results(const std::vector<double>& velocities, double dt) {
    for (size_t i = 0; i < velocities.size(); ++i) {
        std::cout << "t = " << i * dt << ", v = " << velocities[i] << std::endl;
    }
}

void save_results_to_file(const std::vector<double>& velocities, double dt, const std::string& filename) {
    std::ofstream file(filename);
    if (file.is_open()) {
        file << "time,velocity\n";
        for (size_t i = 0; i < velocities.size(); ++i) {
            file << i * dt << "," << velocities[i] << "\n";
        }
        file.close();
        std::cout << "Результаты сохранены в файл: " << filename << std::endl;
    } else {
        std::cerr << "Ошибка открытия файла: " << filename << std::endl;
    }
}
