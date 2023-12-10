//#include <iostream>
//using namespace std;
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
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    int intArray[] = { 3, 1, 4, 1, 5, 9, 2, 6, 5 };
//    int intSize = sizeof(intArray) / sizeof(int);
//
//    cout << "Максимальный элемент в массиве целых чисел: " << findMax(intArray, intSize) << endl;
//
//    bubbleSort(intArray, intSize);
//    cout << "Отсортированный массив целых чисел: ";
//    for (int i = 0; i < intSize; ++i) {
//        cout << intArray[i] << " ";
//    }
//    cout << endl;
//
//    double doubleArray[] = { 3.14, 2.71, 1.618, 0.577, 2.718 };
//    int doubleSize = sizeof(doubleArray) / sizeof(double);
//
//    cout << "Максимальный элемент в массиве вещественных чисел: " << findMax(doubleArray, doubleSize) << endl;
//
//    bubbleSort(doubleArray, doubleSize);
//    cout << "Отсортированный массив вещественных чисел: ";
//    for (int i = 0; i < doubleSize; ++i) {
//        cout << doubleArray[i] << " ";
//    }
//    cout << endl;
//
//    char charArray[] = { 'c', 'a', 't', 'd', 'o', 'g' };
//    int charSize = sizeof(charArray) / sizeof(char);
//
//    cout << "Максимальный элемент в массиве символов: " << findMax(charArray, charSize) << endl;
//
//    bubbleSort(charArray, charSize);
//    cout << "Отсортированный массив символов: ";
//    for (int i = 0; i < charSize; ++i) {
//        cout << charArray[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
//
///*1.	Создать шаблон функции, которая находит значение максимального элемента массива. 
//Аргументами функции должны быть имя и размер массива (типа int). Создать шаблон функции,
//осуществляющей сортировку данных массива. Аргументами функции должны быть имя и размер массива (типа int). 
//Продемонстрировать работу шаблонов на данных целого, вещественного и символьного типов.*/
