//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//template <typename T>
//class ArrayProcessor {
//private:
//    T* array1;
//    T* array2;
//    int size;
//
//public:
//    ArrayProcessor(int size) : size(size) {
//        array1 = new T[size];
//        array2 = new T[size];
//        srand(static_cast<unsigned>(time(0)));
//        for (int i = 0; i < size; ++i) {
//            array1[i] = static_cast<T>(rand() % 100 - 50); 
//            array2[i] = static_cast<T>(rand() % 100 - 50);
//        }
//    }
//    ~ArrayProcessor() {
//        delete[] array1;
//        delete[] array2;
//    }
//    T calculateSum() {
//        T sum = 0;
//        for (int i = 0; i < size; ++i) {
//            sum += array1[i];
//        }
//        return sum;
//    }
//    int countPositiveElements() {
//        int count = 0;
//        for (int i = 0; i < size; ++i) {
//            if (array1[i] > 0) {
//                ++count;
//            }
//        }
//        return count;
//    }
//
//    T calculateProductOfEvenIndexedElements() {
//        T product = 1;
//        for (int i = 0; i < size; i += 2) {
//            product *= array2[i];
//        }
//        return product;
//    }
//    void display() {
//        cout << "Array1: ";
//        for (int i = 0; i < size; i++) {
//            cout << array1[i] << " ";
//        }
//        cout << endl;
//        cout << "Array2: ";
//        for (int i = 0; i < size; i++) {
//            cout << array2[i] << " ";
//        }
//        cout << endl;
//    }
//};
//
//template <>
//class ArrayProcessor<char> {
//private:
//    char* array1;
//    char* array2;
//    int size;
//
//public:
//    ArrayProcessor(int size) : size(size) {
//        array1 = new char[size];
//        array2 = new char[size];
//        srand(static_cast<unsigned>(time(0)));
//        for (int i = 0; i < size; ++i) {
//            array1[i] = static_cast<char>(rand() % 95 + 32);
//            array2[i] = static_cast<char>(rand() % 95 + 32);
//        }
//    }
//
//    ~ArrayProcessor() {
//        delete[] array1;
//        delete[] array2;
//    }
//
//    void displayAsciiCodes() {
//        cout << "ASCII-коды элементов первого массива: ";
//        for (int i = 0; i < size; ++i) {
//            cout << static_cast<int>(array1[i]) << " ";
//        }
//        cout << endl;
//
//        cout << "ASCII-коды элементов второго массива: ";
//        for (int i = 0; i < size; ++i) {
//            cout << static_cast<int>(array2[i]) << " ";
//        }
//        cout << endl;
//    }
//    void display() {
//        cout << "Array1: ";
//        for (int i = 0; i < size; i++) {
//            cout << array1[i] << " ";
//        }
//        cout << endl;
//        cout << "Array2: ";
//        for (int i = 0; i < size; i++) {
//            cout << array2[i] << " ";
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    cout << "Целочисленные числа" << endl;
//    ArrayProcessor<int> intProcessor(5);
//    intProcessor.display();
//    cout << "Сумма элементов первого массива (целые числа): " << intProcessor.calculateSum() << endl;
//    cout << "Количество положительных элементов первого массива: " << intProcessor.countPositiveElements() << endl;
//    cout << "Произведение элементов с четными индексами второго массива: "
//        << intProcessor.calculateProductOfEvenIndexedElements() << endl;
//    cout << "Вещественные числа" << endl;
//    ArrayProcessor<double> doubleProcessor(5);
//    cout << "Сумма элементов первого массива (вещественные числа): " << doubleProcessor.calculateSum() << endl;
//    cout << "Количество положительных элементов первого массива: " << doubleProcessor.countPositiveElements() << endl;
//    cout << "Произведение элементов с четными индексами второго массива: "
//        << doubleProcessor.calculateProductOfEvenIndexedElements() << endl;
//    cout << "Символы" << endl;
//    ArrayProcessor<char> charProcessor(5);
//    charProcessor.display();
//    charProcessor.displayAsciiCodes();
//
//    return 0;
//}
//
///*Создать шаблон класса, у которого есть 2 поля в виде одномерных массивов одного размера. Заполнить массивы с помощью 
//генератора случайных чисел. Найти сумму, количество положительных элементов первого массива и произведение элементов с 
//четными индексами второго массива. Продемонстрировать работу шаблонов на данных различных типов. Реализовать явную специализацию 
//класса для символьного типа, которая выводит на экран ASCII-коды элементов символьных массивов.*/