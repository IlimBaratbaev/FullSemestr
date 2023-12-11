//#include <iostream>
//#include <cmath>
//using namespace std;
//class AntiAircraftGun {
//private:
//    static double probabilityOfHit; 
//public:
//    static void setProbabilityOfHit(double p) {
//        probabilityOfHit = p;
//    }
//
//    static int shootDownTarget(int n) {
//        for (int i = 0; i < n; ++i) {
//            double randomValue = static_cast<double>(rand()) / RAND_MAX;
//
//            if (randomValue < probabilityOfHit) {
//                return 1;
//            }
//        }
//        return 0;
//    }
//
//    static double estimateHitProbability(int n) {
//        return 1 - pow(1 - probabilityOfHit, n);
//    }
//};
//
//double AntiAircraftGun::probabilityOfHit = 0.0;
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    AntiAircraftGun::setProbabilityOfHit(0.2);
//
//    int shots = 10;
//    int result = AntiAircraftGun::shootDownTarget(shots);
//
//    cout << "Результат стрельбы: " << (result == 1 ? "Цель уничтожена" : "Самолет не сбит") << endl;
//
//    cout << "Оценочная вероятность поражения цели: " << AntiAircraftGun::estimateHitProbability(shots) << endl;
//
//    return 0;
//}
//
///*Написать программу для решения статическими методами следующей задачи. Из зенитного орудия производится стрельба по самолету. 
//Вероятность попадания одного выстрела равна p. Стрельба производится n раз или до первого попадания. В программе необходимо создать класс
//с полем p и методом (n – аргумент метода) для вычисления результата стрельбы (0 если самолет не сбит, 1 если цель уничтожена). Предусмотреть 
//метод для вычисления оценочного значения вероятности поражения цели (в пределе это значение стремиться к величине 1-(1-p)n)).*/