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
//        cout << "Выберите тип данных для возведения в степень" << endl;
//        cout << "i = int    l = long    s = short   d = double  f = float   c = char    e = exit" << endl;
//        cout << "Введите выбранный тип данных:";
//        cin >> choice;
//        switch (choice) {
//        case 'i':
//            int baseInt;
//            cout << "Введите целое число: ";
//            cin >> baseInt;
//            cout << "Будете вводить степень числа (y/n)? ";
//            cin >> inputChoice;
//            if (inputChoice == 'y' || inputChoice == 'Y') {
//            beginI:
//                cout << "Введите степень: ";
//                cin >> exponent;
//                if (exponent < 0) {
//                    cout << "Степень должна быть положительной!" << endl;
//                    goto beginI;
//                }
//
//                cout << endl << baseInt << " возведенный в степень: " << integerPower(baseInt, exponent) << endl;
//            }
//            else {
//                cout << endl << baseInt << " возведенный в степень: " << integerPower(baseInt) << endl;
//            }
//            break;
//        case 'l':
//            long baseLong;
//            cout << "Введите long: ";
//            cin >> baseLong;
//            cout << "Будете вводить степень числа (y/n)? ";
//            cin >> inputChoice;
//            if (inputChoice == 'y' || inputChoice == 'Y') {
//            beginL:
//                cout << "Введите степень: ";
//                cin >> exponent;
//                if (exponent < 0) {
//                    cout << "Степень должна быть положительной!" << endl;
//                    goto beginL;
//                }
//                cout << endl << baseLong << " возведенный в степень: " << integerPower(baseLong, exponent) << endl;
//            }
//            else {
//                cout << endl << baseLong << " возведенный в степень: " << integerPower(baseLong) << endl;
//            }
//            break;
//        case 's':
//            short baseShort;
//            cout << "Введите short: ";
//            cin >> baseShort;
//            cout << "Будете вводить степень числа (y/n)? ";
//            cin >> inputChoice;
//            if (inputChoice == 'y' || inputChoice == 'Y') {
//            beginS:
//                cout << "Введите степень: ";
//                cin >> exponent;
//                if (exponent < 0) {
//                    cout << "Степень должна быть положительной!" << endl;
//                    goto beginS;
//                }
//                cout << endl << baseShort << " возведенный в степень: " << integerPower(baseShort, exponent) << endl;
//            }
//            else {
//                cout << endl << baseShort << " возведенный в степень: " << integerPower(baseShort) << endl;
//            }
//            break;
//        case 'd':
//            double baseDouble;
//            cout << "Введите double: ";
//            cin >> baseDouble;
//            cout << "Будете вводить степень числа (y/n)? ";
//            cin >> inputChoice;
//            if (inputChoice == 'y' || inputChoice == 'Y') {
//            beginD:
//                cout << "Введите степень: ";
//                cin >> exponent;
//                if (exponent < 0) {
//                    cout << "Степень должна быть положительной!";
//                    goto beginD;
//                }
//                cout << endl << baseDouble << " возведенный в степень: " << integerPower(baseDouble, exponent) << endl;
//            }
//            else {
//                cout << endl << baseDouble << " возведенный в степень: " << integerPower(baseDouble) << endl;
//            }
//            break;
//        case 'f':
//            float baseFloat;
//            cout << "Введите float: ";
//            cin >> baseFloat;
//            cout << "Будете вводить степень числа (y/n)? ";
//            cin >> inputChoice;
//            if (inputChoice == 'y' || inputChoice == 'Y') {
//            beginF:
//                cout << "Введите степень: ";
//                cin >> exponent;
//                if (exponent < 0) {
//                    cout << "Степень должна быть положительной!";
//                    goto beginF;
//                }
//                cout << endl << baseFloat << " возведенный в степень: " << integerPower(baseFloat, exponent) << endl;
//            }
//            else {
//                cout << endl << baseFloat << " возведенный в степень: " << integerPower(baseFloat) << endl;
//            }
//            break;
//        case 'c':
//            char baseChar;
//            cout << "Введите символ: ";
//            cin >> baseChar;
//            cout << "Будете вводить степень числа (y/n)? ";
//            cin >> inputChoice;
//            if (inputChoice == 'y' || inputChoice == 'Y') {
//            beginC:
//                cout << "Введите степень: ";
//                cin >> exponent;
//                if (exponent < 0) {
//                    cout << "Степень должна быть положительной!";
//                    goto beginC;
//                }
//                cout << endl << baseChar << " возведенный в степень: " << integerPower(baseChar, exponent) << endl;
//            }
//            else {
//                cout << endl << baseChar << " возведенный в степень: " << integerPower(baseChar) << endl;
//            }
//            break;
//        default:
//            cout << "Выбранного типа нет!" << endl;
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
