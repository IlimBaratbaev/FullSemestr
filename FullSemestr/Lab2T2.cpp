//#include <iostream>
//#include <ctime>
//#include <string>
//#include <iomanip>
//#include <windows.h>
//#include <vector>
//using namespace std;
//int array_1[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//struct Lisense {
//    int day;
//    int month;
//    int year;
//};
//class Soft {
//private:
//    string softName;
//    string developer;
//    double programSize;
//    Lisense endLicenseDate;
//public:
//    Soft(string name, string dev, double size, Lisense endDate)
//        : softName(name), developer(dev), programSize(size), endLicenseDate(endDate) {
//    }
//    Soft() {
//        softName = " ";
//        developer = " ";
//        programSize = 0.0;
//    }
//    ~Soft() {
//    }
//    void setSoftwareInfo(const string& name, const string& dev, double size, Lisense endDate) {
//        softName = name;
//        developer = dev;
//        programSize = size;
//        endLicenseDate = endDate;
//    }
//    void printSoftwareInfo() {
//        cout << "| " << setw(15) << softName << " | " << setw(15) << developer << " | " << setw(10) << programSize << " МБ | ";
//            cout << setw(4) << endLicenseDate.day << '.'  << endLicenseDate.month << '.' << endLicenseDate.year << " |";
//            if (daysUntilLicenseExpiration() > 0) {
//                cout << setw(13) << daysUntilLicenseExpiration() << "|\n";
//            }
//            else {
//                cout << setw(13) << "Срок лицензии истек" << "|\n";
//            }
//            cout << "----------------------------------------------------------------------------------\n";
//        }
//    
//    int daysUntilLicenseExpiration() {
//        Lisense currentDate;
//        time_t now;
//        time(&now);
//
//        tm ltm;
//        localtime_s(&ltm, &now);
//        currentDate.day = ltm.tm_mday;
//        currentDate.month = ltm.tm_mon + 1;
//        currentDate.year = ltm.tm_year + 1900;
//
//        int daysRemaining = 0;
//
//        if (endLicenseDate.year > currentDate.year ||
//            (endLicenseDate.year == currentDate.year && endLicenseDate.month > currentDate.month) ||
//            (endLicenseDate.year == currentDate.year && endLicenseDate.month == currentDate.month && endLicenseDate.day >= currentDate.day)) {
//            daysRemaining = (endLicenseDate.year - currentDate.year) * 365 +
//                (endLicenseDate.month - currentDate.month) * 30 +
//                (endLicenseDate.day - currentDate.day);
//        }
//
//        return daysRemaining;
//    }
//
//    void head() {
//        cout << "----------------------------------------------------------------------------------\n";
//        cout << "|    Программа    |   Разработчик   |     Объем     |  Лицензия до |Осталось дней|\n";
//        cout << "----------------------------------------------------------------------------------\n";
//    }
//};
//Soft addSoft();
//void showMenu();
//int main() {
//    setlocale(LC_ALL, "");
//    showMenu();
//    Soft forUsageSoft;
//    vector<Soft> softs;
//    char choice = 'y';
//    while (choice != '4') {
//        cout << "Выберите номер команды: ";
//        cin >> choice;
//        switch (choice) {
//        case '1':
//            softs.push_back(addSoft());
//            break;
//        case '2':
//            forUsageSoft.head();
//            for (int i = 0; i < softs.size(); i++) {
//                softs[i].printSoftwareInfo();
//            }
//            break;
//        case '3':
//            showMenu();
//            break;
//        default:
//            cout << "Нет выбранной команды" << endl;
//        }
//    }
//    return 0;
//}
//void showMenu() {
//    cout << "Меню" << endl;
//    cout << "1 - ввод софта        2 - вывод софтов         3 - меню          4 - выход" << endl;
//}
//Soft addSoft() {
//    Soft soft;
//    string sName, sdeveloper;
//    double sSize;
//    Lisense sEndDate;
//    int endDateDays;
//    int year, month, day;
//    cout << "Название софта: ";
//    cin >> sName;
//    cout << "Разраьотчик софта: ";
//    cin >> sdeveloper;
//    cout << "Размер софта(MB): ";
//    cin >> sSize;
//    cout << "Вводим дату завершения лицензии" << endl;
//    cout << "Год: ";
//    cin >> year;
//    cout << "Месяц: ";
//    cin >> month;
//    cout << "День: ";
//    cin >> day;
//    sEndDate.year = year;
//    sEndDate.month = month;
//    sEndDate.day = day;
//    soft.setSoftwareInfo(sName, sdeveloper, sSize, sEndDate);
//    return soft;
//}
//
///*
//* Создайте класс Soft, который содержит информацию об установленном программном обеспечении. Закрытыми элементами класса будут: название программы, разработчик, 
//занимаемый объем, дата завершения лицензии. Включите в класс открытые функции подсчета количества дней до завершения лицензии и вывода всех данных 
//об установленном программном обеспечении на экран. Для инициализации и удаления объектов класса используйте конструкторы и деструкторы.
//*/