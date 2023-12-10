//#include <iostream>
//#include <cmath>
//
//class AntiAircraftGun {
//private:
//    static double probabilityOfHit; // Вероятность попадания одного выстрела
//
//public:
//    // Установить вероятность попадания
//    static void setProbabilityOfHit(double p) {
//        probabilityOfHit = p;
//    }
//
//    // Метод для вычисления результата стрельбы
//    static int shootDownTarget(int n) {
//        for (int i = 0; i < n; ++i) {
//            // Генерируем случайное число от 0 до 1
//            double randomValue = static_cast<double>(rand()) / RAND_MAX;
//
//            // Если случайное число меньше вероятности попадания, цель сбита
//            if (randomValue < probabilityOfHit) {
//                return 1; // Цель уничтожена
//            }
//        }
//        return 0; // Самолет не сбит после n выстрелов
//    }
//
//    // Метод для вычисления оценочного значения вероятности поражения цели
//    static double estimateHitProbability(int n) {
//        return 1 - std::pow(1 - probabilityOfHit, n);
//    }
//};
//
//// Инициализация статической переменной
//double AntiAircraftGun::probabilityOfHit = 0.0;
//
//int main() {
//    // Установим вероятность попадания
//    AntiAircraftGun::setProbabilityOfHit(0.2); // Пример: вероятность попадания 20%
//
//    // Проведем стрельбу и выведем результат
//    int shots = 10;
//    int result = AntiAircraftGun::shootDownTarget(shots);
//
//    std::cout << "Результат стрельбы: " << (result == 1 ? "Цель уничтожена" : "Самолет не сбит") << std::endl;
//
//    // Выведем оценочное значение вероятности поражения цели
//    std::cout << "Оценочная вероятность поражения цели: " << AntiAircraftGun::estimateHitProbability(shots) << std::endl;
//
//    return 0;
//}
//
///*Написать программу для решения статическими методами следующей задачи. Из зенитного орудия производится стрельба по самолету. 
//Вероятность попадания одного выстрела равна p. Стрельба производится n раз или до первого попадания. В программе необходимо создать класс
//с полем p и методом (n – аргумент метода) для вычисления результата стрельбы (0 если самолет не сбит, 1 если цель уничтожена). Предусмотреть 
//метод для вычисления оценочного значения вероятности поражения цели (в пределе это значение стремиться к величине 1-(1-p)n)).*/