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
//        cout << "| " << setw(15) << softName << " | " << setw(15) << developer << " | " << setw(10) << programSize << " �� | ";
//            cout << setw(4) << endLicenseDate.day << '.'  << endLicenseDate.month << '.' << endLicenseDate.year << " |";
//            if (daysUntilLicenseExpiration() > 0) {
//                cout << setw(13) << daysUntilLicenseExpiration() << "|\n";
//            }
//            else {
//                cout << setw(13) << "���� �������� �����" << "|\n";
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
//        cout << "|    ���������    |   �����������   |     �����     |  �������� �� |�������� ����|\n";
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
//        cout << "�������� ����� �������: ";
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
//            cout << "��� ��������� �������" << endl;
//        }
//    }
//    return 0;
//}
//void showMenu() {
//    cout << "����" << endl;
//    cout << "1 - ���� �����        2 - ����� ������         3 - ����          4 - �����" << endl;
//}
//Soft addSoft() {
//    Soft soft;
//    string sName, sdeveloper;
//    double sSize;
//    Lisense sEndDate;
//    int endDateDays;
//    int year, month, day;
//    cout << "�������� �����: ";
//    cin >> sName;
//    cout << "����������� �����: ";
//    cin >> sdeveloper;
//    cout << "������ �����(MB): ";
//    cin >> sSize;
//    cout << "������ ���� ���������� ��������" << endl;
//    cout << "���: ";
//    cin >> year;
//    cout << "�����: ";
//    cin >> month;
//    cout << "����: ";
//    cin >> day;
//    sEndDate.year = year;
//    sEndDate.month = month;
//    sEndDate.day = day;
//    soft.setSoftwareInfo(sName, sdeveloper, sSize, sEndDate);
//    return soft;
//}
//
///*
//* �������� ����� Soft, ������� �������� ���������� �� ������������� ����������� �����������. ��������� ���������� ������ �����: �������� ���������, �����������, 
//���������� �����, ���� ���������� ��������. �������� � ����� �������� ������� �������� ���������� ���� �� ���������� �������� � ������ ���� ������ 
//�� ������������� ����������� ����������� �� �����. ��� ������������� � �������� �������� ������ ����������� ������������ � �����������.
//*/