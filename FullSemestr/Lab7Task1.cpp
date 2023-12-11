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
//        cout << "\nВыберите действие: ";
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
//            cout << "Где искать максимальное значение(i - int array, d - double array, c - char array): ";
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
//                cout << "НЕправильно введено значение!" << endl;
//            }
//            break;*/
//        default:
//            break;
//        }
//    }
//    return 0;
//}
//void menu() {
//    cout << "1 - массив int\t2 - массив double\t3 - массив char\nОтсортировать:4 - массив int\t5 - массив double\t6 - массив char\nВывести:7 - массив int\t8 - массив double\t9 - массив char\nm - меню\te-выход";
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
//    cout << "Массив: ";
//    for (int i = 0; i < sizeof(array); i++) {
//        cout << array[i] << " ";
//    }
//    cout << endl << "Максимальное значение: " << findMax(array, sizeof(array)) << endl;
//}
//template <typename T>
//void input(T* array) {
//    cout << "Введите размер массива: ";
//    int size;
//    cin >> size;
//    array = new T[size];
//    for (int i = 0; i < size; ++i) {
//        arrInt[i] = 33 + rand() % 94;
//    }
//}
///*1.	Создать шаблон функции, которая находит значение максимального элемента массива. 
//Аргументами функции должны быть имя и размер массива (типа int). Создать шаблон функции,
//осуществляющей сортировку данных массива. Аргументами функции должны быть имя и размер массива (типа int). 
//Продемонстрировать работу шаблонов на данных целого, вещественного и символьного типов.*/