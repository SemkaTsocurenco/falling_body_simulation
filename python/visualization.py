import pandas as pd
import matplotlib.pyplot as plt

# Загрузка данных
euler_data = pd.read_csv("../results/euler_results.csv")
rk_data = pd.read_csv("../results/runge_kutta_results.csv")

# Построение графиков
plt.figure(figsize=(10, 6))

# График метода Эйлера
plt.plot(euler_data["time"], euler_data["velocity"], label="Метод Эйлера", linestyle="--", marker="o")

# График метода Рунге-Кутты
plt.plot(rk_data["time"], rk_data["velocity"], label="Метод Рунге-Кутты 4-го порядка", linestyle="-", marker="x")

# Настройка графика
plt.title("Зависимость скорости тела от времени")
plt.xlabel("Время (с)")
plt.ylabel("Скорость (м/с)")
plt.grid()
plt.legend()
plt.savefig("velocity_vs_time.png")
plt.savefig("../results/velocity_vs_time.png")

print ("График сохранён в /results/velocity_vs_time.png")


