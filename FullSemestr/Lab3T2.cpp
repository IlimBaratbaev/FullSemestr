//#include <iostream>
//#include <string>
//#include <vector>
//#include <map>
//#include <time.h>
//using namespace std;
//class Car {
//
//};
//class Tatra;
//
//class Kamaz : public Car {
//private:
//    string racer;
//    map<string, int> finishTimes;
//    int points = 0;
//public:
//    Kamaz(string r) : racer(r) {}
//
//    friend int FrCreater(vector<Kamaz>& kamazRacers, vector<Tatra>& tatraRacers);
//    friend void EnterResults(Kamaz& kamaz);
//    friend map<string, int> EnterDopMap(vector<Kamaz> kamazRacers, vector<Tatra> tatraRacers, string race);
//};
//
//class Tatra : public Car {
//private:
//    string racer;
//    map<string, int> finishTimes;
//    int points = 0;
//    Tatra(string r) : racer(r) {}
//
//    friend int FrCreater(vector<Kamaz>& kamazRacers, vector<Tatra>& tatraRacers);
//    friend void EnterResults(Tatra& tatra);
//    friend map<string, int> EnterDopMap(vector<Kamaz> kamazRacers, vector<Tatra> tatraRacers, string race);
//};
//
//int FrCreater(map<string, int>& racersResults) {
//    
//}
//
//void EnterResults(Kamaz& kamaz) {
//    kamaz.finishTimes["Plain"] = 30 + rand() % (60 - 30 + 1);
//    kamaz.finishTimes["Mountain"] = 30 + rand() % (60 - 30 + 1);
//    kamaz.finishTimes["Desert"] = 30 + rand() % (60 - 30 + 1);
//}
//
//void EnterResults(Tatra& tatra) {
//    string trackName;
//    tatra.finishTimes["Plain"] = 30 + rand() % (60 - 30 + 1);
//    tatra.finishTimes["Mountain"] = 30 + rand() % (60 - 30 + 1);;
//    tatra.finishTimes["Desert"] = 30 + rand() % (60 - 30 + 1);;
//}
//map<string, int> EnterDopMap(vector<Kamaz> kamazRacers, vector<Tatra> tatraRacers, string race) {
//    map<string, int> plainResults;
//    for (Tatra& tatra : tatraRacers) {
//        plainResults[tatra.racer] = tatra.finishTimes[race];
//    }
//    for (Kamaz& kamaz : kamazRacers) {
//        plainResults[kamaz.racer] = kamaz.finishTimes[race];
//    }
//}
//
//int main() {
//    setlocale(LC_ALL, "");
//    srand(time(NULL));
//    int sizeKamaz, sizeTatra;
//    cout << "Enter the number of Kamaz racers: ";
//    cin >> sizeKamaz;
//    cout << "Enter the number of Tatra racers: ";
//    cin >> sizeTatra;
//    vector<Kamaz> kamazRacers;
//    vector<Tatra> tatraRacers;
//    vector<Car> all;
//    for (int i = 0; i < sizeKamaz; ++i) {
//        string racerName = "KamazRacer" + to_string(i + 1);
//        Kamaz kamaz(racerName);
//        EnterResults(kamaz);
//        kamazRacers.push_back(kamaz);
//        all.push_back(kamaz);
//    }
//    for (int i = 0; i < sizeTatra; ++i) {
//        string racerName = "TatraRacer" + to_string(i + 1);
//        Tatra tatra(racerName);
//        EnterResults(tatra);
//        tatraRacers.push_back(tatra);
//        all.push_back(tatra);
//    }
//    
//    // Вывод результатов
//    //for (const Kamaz& kamaz : kamazRacers) {
//    //    DisplayResults(kamaz, tatraRacers[0]);  // Сравнение с первым гонщиком Tatra
//    //}
//
//    //for (const Tatra& tatra : tatraRacers) {
//    //    DisplayResults(kamazRacers[0], tatra);  // Сравнение с первым гонщиком Kamaz
//    //}
//
//    return 0;
//}
//
//
//
///*
//2.	Для участия в ежегодном трансконтинентальном Ралли-марафоне «Дакар» по усложненной трассе в Южной Америке выбраны грузовики Камаз и Tatra, 
//которые лидируют в зачете грузовиков. Решите задачу сравнения скоростей движения грузовиков по разным по проходимости участкам трассы, а именно: по равнине, 
//горам, пустыне.  Создайте и выдайте на экран таблицу результатов ралли - марафона. Определите победителя.
//А) Для решения задачи используйте классы Kamaz и Tatra, а также функцию сравнения скоростей FrCreater(). Функция FrCreater () возвращает два балла объекту- победителю этапа, 
//одно очко - если скорости одинаковые и ноль баллов проигравшему грузовику. Оба класса содержат поля: «гонщик», «название авто», «время в пути» и «название этапа»,
//а также методы: инициализация и отображение полей на экране. Определитесь с идентификаторами доступа к членам класса, не нарушая принципа инкапсуляции.
//В) Сделайте функцию FrCreater() дружественной: классу Kamaz, обоим классам Kamaz и Tatra.
//С) Сделайте класс Tatra дружественным классу Kamaz.
//
//*/