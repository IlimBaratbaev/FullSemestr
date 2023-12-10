//#include <iostream>
//using namespace std;
//
//int integerPower(int base, unsigned int exponent = 2);
//
//long integerPower(long base, unsigned int exponent = 2);
//
//short integerPower(short base, unsigned int exponent = 2);
//
//float integerPower(float base, unsigned int exponent = 2);
//
//double integerPower(double base, unsigned int exponent = 2);
//
//char integerPower(char base, unsigned int exponent = 2);
//int Task2();
//int main() {
//    setlocale(LC_ALL, "");
//    Task2();
//    return 0;
//}
//int Task2() {
//    int exponent;
//    char choice = 'i';
//    char inputChoice;
//    while (choice != 'e') {
//        cout << "�������� ��� ������ ��� ���������� � �������" << endl;
//        cout << "i = int    l = long    s = short   d = double  f = float   c = char    e = exit" << endl;
//        cout << "������� ��������� ��� ������:";
//        cin >> choice;
//        switch (choice) {
//        case 'i':
//            int baseInt;
//            cout << "������� ����� �����: ";
//            cin >> baseInt;
//            cout << "������ ������� ������� ����� (y/n)? ";
//            cin >> inputChoice;
//            if (inputChoice == 'y' || inputChoice == 'Y') {
//            beginI:
//                cout << "������� �������: ";
//                cin >> exponent;
//                if (exponent < 0) {
//                    cout << "������� ������ ���� �������������!" << endl;
//                    goto beginI;
//                }
//
//                cout << endl << baseInt << " ����������� � �������: " << integerPower(baseInt, exponent) << endl;
//            }
//            else {
//                cout << endl << baseInt << " ����������� � �������: " << integerPower(baseInt) << endl;
//            }
//            break;
//        case 'l':
//            long baseLong;
//            cout << "������� long: ";
//            cin >> baseLong;
//            cout << "������ ������� ������� ����� (y/n)? ";
//            cin >> inputChoice;
//            if (inputChoice == 'y' || inputChoice == 'Y') {
//            beginL:
//                cout << "������� �������: ";
//                cin >> exponent;
//                if (exponent < 0) {
//                    cout << "������� ������ ���� �������������!" << endl;
//                    goto beginL;
//                }
//                cout << endl << baseLong << " ����������� � �������: " << integerPower(baseLong, exponent) << endl;
//            }
//            else {
//                cout << endl << baseLong << " ����������� � �������: " << integerPower(baseLong) << endl;
//            }
//            break;
//        case 's':
//            short baseShort;
//            cout << "������� short: ";
//            cin >> baseShort;
//            cout << "������ ������� ������� ����� (y/n)? ";
//            cin >> inputChoice;
//            if (inputChoice == 'y' || inputChoice == 'Y') {
//            beginS:
//                cout << "������� �������: ";
//                cin >> exponent;
//                if (exponent < 0) {
//                    cout << "������� ������ ���� �������������!" << endl;
//                    goto beginS;
//                }
//                cout << endl << baseShort << " ����������� � �������: " << integerPower(baseShort, exponent) << endl;
//            }
//            else {
//                cout << endl << baseShort << " ����������� � �������: " << integerPower(baseShort) << endl;
//            }
//            break;
//        case 'd':
//            double baseDouble;
//            cout << "������� double: ";
//            cin >> baseDouble;
//            cout << "������ ������� ������� ����� (y/n)? ";
//            cin >> inputChoice;
//            if (inputChoice == 'y' || inputChoice == 'Y') {
//            beginD:
//                cout << "������� �������: ";
//                cin >> exponent;
//                if (exponent < 0) {
//                    cout << "������� ������ ���� �������������!";
//                    goto beginD;
//                }
//                cout << endl << baseDouble << " ����������� � �������: " << integerPower(baseDouble, exponent) << endl;
//            }
//            else {
//                cout << endl << baseDouble << " ����������� � �������: " << integerPower(baseDouble) << endl;
//            }
//            break;
//        case 'f':
//            float baseFloat;
//            cout << "������� float: ";
//            cin >> baseFloat;
//            cout << "������ ������� ������� ����� (y/n)? ";
//            cin >> inputChoice;
//            if (inputChoice == 'y' || inputChoice == 'Y') {
//            beginF:
//                cout << "������� �������: ";
//                cin >> exponent;
//                if (exponent < 0) {
//                    cout << "������� ������ ���� �������������!";
//                    goto beginF;
//                }
//                cout << endl << baseFloat << " ����������� � �������: " << integerPower(baseFloat, exponent) << endl;
//            }
//            else {
//                cout << endl << baseFloat << " ����������� � �������: " << integerPower(baseFloat) << endl;
//            }
//            break;
//        case 'c':
//            char baseChar;
//            cout << "������� ������: ";
//            cin >> baseChar;
//            cout << "������ ������� ������� ����� (y/n)? ";
//            cin >> inputChoice;
//            if (inputChoice == 'y' || inputChoice == 'Y') {
//            beginC:
//                cout << "������� �������: ";
//                cin >> exponent;
//                if (exponent < 0) {
//                    cout << "������� ������ ���� �������������!";
//                    goto beginC;
//                }
//                cout << endl << baseChar << " ����������� � �������: " << integerPower(baseChar, exponent) << endl;
//            }
//            else {
//                cout << endl << baseChar << " ����������� � �������: " << integerPower(baseChar) << endl;
//            }
//            break;
//        default:
//            cout << "���������� ���� ���!" << endl;
//            break;
//        }
//    }
//    return 0;
//}
//
//int integerPower(int base, unsigned int exponent) {
//    int result = base;
//    for (int i = 1; i < exponent; i++) {
//        result *= base;
//    }
//    return result;
//}
//
//long integerPower(long base, unsigned int exponent) {
//    long result = base;
//    for (int i = 1; i < exponent; i++) {
//        result *= base;
//    }
//    return result;
//}
//
//short integerPower(short base, unsigned int exponent) {
//    short result = base;
//    for (int i = 1; i < exponent; i++) {
//        result *= base;
//    }
//    return result;
//}
//
//float integerPower(float base, unsigned int exponent) {
//    float result = base;
//    for (int i = 1; i < exponent; i++) {
//        result *= base;
//    }
//    return result;
//}
//
//double integerPower(double base, unsigned int exponent) {
//    double result = base;
//    for (int i = 1; i < exponent; i++) {
//        result *= base;
//    }
//    return result;
//}
//
//char integerPower(char base, unsigned int exponent) {
//    char result = base;
//    for (int i = 1; i < exponent; i++) {
//        result *= base;
//    }
//    return result;
//}
