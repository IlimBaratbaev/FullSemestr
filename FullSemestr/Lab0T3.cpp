//#include <iostream>
//#include <iomanip>
//using namespace std;
//struct WORKER {
//    string surname;
//    string position;
//    int birthDate;
//    int salary;
//    bool education;
//};
//int Task3();
//int inputWorker(WORKER&);
//int printWorker(WORKER&);
//void showMenu();
//void sortWorkers(WORKER*, int);
//void head();
//int main() {
//    setlocale(LC_ALL, "");
//    Task3();
//    return 0;
//}
//int Task3() {
//
//    int N;
//    char choice = '0';
//    int avarege = 0;
//    int count;
//    WORKER youngest;
//    WORKER oldest;
//    WORKER* workers = nullptr;
//    showMenu();
//    while (choice != '8') {
//        cout << "Выберите номер команды: ";
//        cin >> choice;
//        switch (choice) {
//        case '1':
//            cout << "Введите количество работников: ";
//            cin >> N;
//            workers = new WORKER[N];
//            for (int i = 0; i < N; i++) {
//                cout << "Введите информацию о работнике " << i << endl;
//                inputWorker(workers[i]);
//            }
//            break;
//        case '2':
//            head();
//            for (int i = 0; i < N; i++) {
//                printWorker(workers[i]);
//            }
//            break;
//        case '3':
//            sortWorkers(workers, N);
//            break;
//        case '4':
//            for (int i = 0; i < N; i++) {
//                avarege += workers[i].salary;
//            }
//            avarege /= N;
//            cout << "Средняя зарплата: " << avarege << endl << "Вывод всех сотрудников с зарплатой выше среднего" << endl;
//
//            head();
//            for (int i = 0; i < N; i++) {
//                if (workers[i].salary >= avarege) {
//                    printWorker(workers[i]);
//                }
//            }
//            break;
//        case '5':
//            youngest = workers[0];
//            oldest = workers[0];
//            for (int i = 1; i < N; i++) {
//                if (workers[i].birthDate > youngest.birthDate) {
//                    youngest = workers[i];
//                }
//                if (workers[i].birthDate < oldest.birthDate) {
//                    oldest = workers[i];
//                }
//            }
//            cout << "Самый младший" << endl;
//            head();
//            printWorker(youngest);
//            cout << "Самый старший" << endl;
//            head();
//            printWorker(oldest);
//            break;
//        case '6':
//            count = 0;
//            for (int i = 0; i < N; i++) {
//                if (workers[i].education == 1) {
//                    count++;
//                }
//            }
//            cout << "Количество работников с высшим образованием:" << count << endl;
//            break;
//        case '7':
//            showMenu();
//        }
//    }
//    delete[] workers;
//    return 0;
//}
//int inputWorker(WORKER& worker) {
//    cout << "Введите фамилию: ";
//    cin >> worker.surname;
//    cout << "Введите должность: ";
//    cin >> worker.position;
//    cout << "Введите год рождения: ";
//    cin >> worker.birthDate;
//    cout << "Введите зарплату сотрудника: ";
//    cin >> worker.salary;
//    cout << "Введите образование (1 да 0 нет): ";
//    cin >> worker.education;
//    return 0;
//}
//
//int printWorker(WORKER& worker) {
//    cout << "| " << setw(11) << worker.surname << " | " << setw(14) << worker.position
//        << " | " << setw(12) << worker.birthDate << " | " << setw(10) << worker.salary
//        << " | " << setw(10) << (worker.education ? "Высшее" : "Нет") << " |\n";
//    cout << "------------------------------------------------------------------------\n";
//    return 0;
//}
//void showMenu() {
//    cout << "Меню" << endl;
//    cout << "1 - ввод данных        2 - вывод данных\n3 - сортировка        4 - зарплата выше среднего\n5 - самый младший и самый старший сотрудник         6 - кол-во работников с высшим образованием\n7 - меню          8 - выход" << endl;
//}
//void sortWorkers(WORKER* workers, int N) {
//    cout << "Сортировка в алфавитном порядке по Фамилии работника" << endl;
//    for (int i = 0; i < N - 1; i++) {
//        for (int j = i; j < N; j++) {
//            if (workers[i].surname[0] > workers[j].surname[0]) {
//                swap(workers[i], workers[j]);
//            }
//        }
//    }
//}
//void head() {
//    cout << "------------------------------------------------------------------------\n";
//    cout << "|   Фамилия   |   Должность   | Год рождения |  Зарплата  | Образование |\n";
//    cout << "------------------------------------------------------------------------\n";
//}