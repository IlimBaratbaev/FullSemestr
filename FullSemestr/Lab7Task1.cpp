//#include <iostream>
//#include <cstdlib> 
//#include <ctime>  
//using namespace std;
//template <typename T>
//T findMax(const T*, int);
//template <typename T>
//void bubbleSort(T*, int);
//void menu();
//template <typename T>
//void display(T* array);
//template <typename T>
//void input(T* array);
//int main() {
//    setlocale(LC_ALL, "ru");
//    char choice = 'z';
//    int size;
//    int *arrInt = nullptr;
//    double* arrDouble = nullptr;
//    char* arrChar = nullptr;
//    srand(static_cast<unsigned>(time(0)));
//    char choiceForFindMax = 'r';
//    menu();
//    while (choice != 'e') {
//        cout << "\n�������� ��������: ";
//        cin >> choice;
//        switch (choice)
//        {
//        case '1':
//            input(arrInt);
//            break;
//        case '2':
//            input(arrDouble);
//            break;
//
//        case '3':
//            input(arrChar);
//            break;
//        case '4':
//            bubbleSort(arrInt, sizeof(arrInt));
//            break;
//        case '5':
//            bubbleSort(arrDouble, sizeof(arrInt));
//            break;
//        case '6':
//            bubbleSort(arrChar, sizeof(arrInt));
//            break;
//        case '7':
//            display(arrInt);
//            break;
//        case '8':
//            display(arrDouble);
//            break;
//        case '9':
//            display(arrChar);
//            break;
//        case 'm':
//            menu();
//            break;
//        case 'e':
//            break;
//        /*case 'x':
//            cout << "��� ������ ������������ ��������(i - int array, d - double array, c - char array): ";
//            cin >> choiceForFindMax;
//            if (choiceForFindMax == 'i') {
//                cout << findMax(arrInt, sizeof(arrInt)) << endl;
//            } 
//            else if (choiceForFindMax == 'd') {
//                cout << findMax(arrDouble, sizeof(arrDouble)) << endl;
//            }
//            else if (choiceForFindMax == 'c') {
//                cout << findMax(arrChar, sizeof(arrChar)) << endl;
//            }
//            else {
//                cout << "����������� ������� ��������!" << endl;
//            }
//            break;*/
//        default:
//            break;
//        }
//    }
//    return 0;
//}
//void menu() {
//    cout << "1 - ������ int\t2 - ������ double\t3 - ������ char\n�������������:4 - ������ int\t5 - ������ double\t6 - ������ char\n�������:7 - ������ int\t8 - ������ double\t9 - ������ char\nm - ����\te-�����";
//}
//template <typename T>
//T findMax(const T* array, int size) {
//    T maxElement = array[0];
//    for (int i = 1; i < size; ++i) {
//        if (array[i] > maxElement) {
//            maxElement = array[i];
//        }
//    }
//    return maxElement;
//}
//
//template <typename T>
//void bubbleSort(T* array, int size) {
//    for (int i = 0; i < size - 1; ++i) {
//        for (int j = 0; j < size - i - 1; ++j) {
//            if (array[j] > array[j + 1]) {
//                T temp = array[j];
//                array[j] = array[j + 1];
//                array[j + 1] = temp;
//            }
//        }
//    }
//}
//template <typename T>
//void display(const T* array) {
//    cout << "������: ";
//    for (int i = 0; i < sizeof(array); i++) {
//        cout << array[i] << " ";
//    }
//    cout << endl << "������������ ��������: " << findMax(array, sizeof(array)) << endl;
//}
//template <typename T>
//void input(T* array) {
//    cout << "������� ������ �������: ";
//    int size;
//    cin >> size;
//    array = new T[size];
//    for (int i = 0; i < size; ++i) {
//        arrInt[i] = 33 + rand() % 94;
//    }
//}
///*1.	������� ������ �������, ������� ������� �������� ������������� �������� �������. 
//����������� ������� ������ ���� ��� � ������ ������� (���� int). ������� ������ �������,
//�������������� ���������� ������ �������. ����������� ������� ������ ���� ��� � ������ ������� (���� int). 
//������������������ ������ �������� �� ������ ������, ������������� � ����������� �����.*/