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
//                cout << "�������� " << remainingSeconds << " ���" << endl;
//            }
//
//            this_thread::sleep_for(chrono::seconds(1));
//        }
//
//        isRunning = false;
//        cout << "������ ����������!" << endl;
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
//            cout << "������� ���-�� ������: ";
//            cin >> seconds;
//            timer = Timer(seconds);
//            timer.run();
//            showMenu();
//            break;
//        case '2':
//            cout << "������� ���-�� �����: ";
//            cin >> minuts;
//            cout << "������� ���-�� ������: ";
//            cin >> seconds;
//            timer2 = Timer(minuts, seconds);
//            timer2.run();
//            showMenu();
//            break;
//        case '3':
//            cout << "������� ����� � ������� (minuts:seconds): ";
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
//    cout << "����" << endl;
//    cout << "1 - ���� �� ��������       2 - ���� min/sec        3 - ���� �������(m:s)       4 - ����        5 - �����" << endl;
//}
///*
//3. ������������ ��������� � ������� Timer, � ������� ������ ��������� ��� ������ ��������� �������.��� �������� ������� ���� timer ��� ������������� ��������� �������� �������.
//� ���������� ������ ������� run() ������ �������� ������ � ������� ������������� ��������, ���� �� ��������� �������� 0, ����� ���� �������� ������.
//�������� 3 �������� ������������, �.�.����������� ����������� 3 ���� ��� ����, ����� ����� ���� ��������� ����� � �������� � ������� ������ ����� ��� ������, ��� � ������� � ��������, 
//���� ����������� ��� ����� �����.��� ��������� ���������� ������������ ������� clock(), ������������ ����� �����, ��������� � ������� ������� ���������.������� ��� �������� �� ������ CLK_TCK, 
//�������� �������� � ��������.��������� ��� clock() � CLK_TCK ���������� � ������������ ����� <time>
//
//*/
//
//
