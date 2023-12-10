//#include <iostream>
//#include <ctime>
//#include<Windows.h>
//#include <string>
//#include <chrono>
//#include <thread>
//
//using namespace std;
//void cutToMinAndSec(string , int& , int& );
//void showMenu();
//class Timer {
//public:
//    Timer(int seconds) : initialTime(seconds) {
//    }
//    Timer(string timeString) {
//        int minutes, seconds;
//        cutToMinAndSec(timeString, minutes, seconds);
//        initialTime = minutes * 60 + seconds;
//        isRunning = false;
//    }
//    Timer(int minutes, int seconds) : initialTime(minutes * 60 + seconds) {
//        
//    }
//    Timer() : initialTime(0), isRunning(false){
//    }
//    void run() {
//        isRunning = true;
//        clock_t startTime = clock();
//        clock_t endTime = startTime + initialTime * CLOCKS_PER_SEC;
//
//        while (clock() < endTime) {
//            clock_t currentTime = clock();
//            int elapsedSeconds = static_cast<int>((currentTime - startTime) / CLOCKS_PER_SEC);
//            int remainingSeconds = initialTime - elapsedSeconds;
//
//            if (remainingSeconds > 0) {
//                system("cls");
//                cout << "Осталось " << remainingSeconds << " сек" << endl;
//            }
//
//            this_thread::sleep_for(chrono::seconds(1));
//        }
//
//        isRunning = false;
//        cout << "Таймер завершился!" << endl;
//    }
//
//private:
//    int initialTime;
//    bool isRunning;
//};
//
//int main() {
//    setlocale(LC_ALL, "ru_RU.UTF-8");
//
//    showMenu();
//    int seconds, minuts;
//    string time;
//    char choice = '7';
//    Timer timer;
//    Timer timer2;
//    Timer timer3;
//    while (choice != 5) {
//        cin >> choice;
//        switch (choice) {
//        case '1':
//            cout << "Введите кол-во секунд: ";
//            cin >> seconds;
//            timer = Timer(seconds);
//            timer.run();
//            showMenu();
//            break;
//        case '2':
//            cout << "Введите кол-во минут: ";
//            cin >> minuts;
//            cout << "Введите кол-во секунд: ";
//            cin >> seconds;
//            timer2 = Timer(minuts, seconds);
//            timer2.run();
//            showMenu();
//            break;
//        case '3':
//            cout << "Введите время в формате (minuts:seconds): ";
//            cin >> time;
//            timer3 = Timer(time);
//            timer3.run();
//            showMenu();
//            break;
//        case '4':
//            showMenu();
//            break;
//        }
//    }
//    return 0;
//    exit(0);
//}
//void cutToMinAndSec(string time, int& min, int &sec ) {
//    string minuts = "";
//    string secounds = "";
//    bool flag = true;
//    for (int i = 0; i < time.size(); i++) {
//        if (time[i] == ':') {
//            flag = false;
//            continue;
//        }
//        if (flag) {
//            minuts += time[i];
//        }
//        else {
//            secounds += time[i];
//        }
//    }
//    min = stoi(minuts);
//    sec = stoi(secounds);
//}
//void showMenu() {
//    cout << "Меню" << endl;
//    cout << "1 - ввод по секундам       2 - ввод min/sec        3 - ввод строкой(m:s)       4 - меню        5 - выход" << endl;
//}
///*
//3. Разработайте программу с классом Timer, в которой таймер действует как таймер обратного отсчета.При создании объекта типа timer ему присваивается начальное значение времени.
//В результате вызова функции run() таймер начинает отсчет в сторону уменьшающихся значений, пока не достигнет значения 0, после чего зазвонит звонок.
//Создайте 3 варианта конструктора, т.е.конструктор перегрузите 3 раза для того, чтобы можно было указывать время в секундах с помощью целого числа или строки, или в минутах и секундах, 
//если указываются два целых числа.Эта программа использует библиотечную функцию clock(), возвращающую число тиков, прошедших с момента запуска программы.Поделив это значение на макрос CLK_TCK, 
//получаем значение в секундах.Прототипы для clock() и CLK_TCK содержатся в заголовочном файле <time>
//
//*/
//
//
