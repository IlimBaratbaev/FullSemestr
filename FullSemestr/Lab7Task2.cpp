//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//// Шаблон класса
//template <typename T>
//class ArrayProcessor {
//private:
//    T* array1;
//    T* array2;
//    int size;
//
//public:
//    // Конструктор
//    ArrayProcessor(int size) : size(size) {
//        array1 = new T[size];
//        array2 = new T[size];
//        // Инициализация генератора случайных чисел
//        srand(static_cast<unsigned>(time(0)));
//        // Заполнение массивов случайными значениями
//        for (int i = 0; i < size; ++i) {
//            array1[i] = static_cast<T>(rand() % 100 - 50); // Произвольные числа от -50 до 49
//            array2[i] = static_cast<T>(rand() % 100 - 50);
//        }
//    }
//
//    // Деструктор
//    ~ArrayProcessor() {
//        delete[] array1;
//        delete[] array2;
//    }
//
//    // Метод для вычисления суммы элементов первого массива
//    T calculateSum() {
//        T sum = 0;
//        for (int i = 0; i < size; ++i) {
//            sum += array1[i];
//        }
//        return sum;
//    }
//
//    // Метод для подсчета количества положительных элементов первого массива
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
//    // Метод для вычисления произведения элементов с четными индексами второго массива
//    T calculateProductOfEvenIndexedElements() {
//        T product = 1;
//        for (int i = 0; i < size; i += 2) {
//            product *= array2[i];
//        }
//        return product;
//    }
//};
//
//// Явная специализация класса для символьного типа
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
//        // Инициализация генератора случайных чисел
//        srand(static_cast<unsigned>(time(0)));
//        // Заполнение массивов случайными символами (ASCII-коды от 32 до 126)
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
//        std::cout << "ASCII-коды элементов первого массива: ";
//        for (int i = 0; i < size; ++i) {
//            std::cout << static_cast<int>(array1[i]) << " ";
//        }
//        std::cout << std::endl;
//
//        std::cout << "ASCII-коды элементов второго массива: ";
//        for (int i = 0; i < size; ++i) {
//            std::cout << static_cast<int>(array2[i]) << " ";
//        }
//        std::cout << std::endl;
//    }
//};
//
//int main() {
//    // Примеры использования шаблона класса на различных типах данных
//    ArrayProcessor<int> intProcessor(5);
//    std::cout << "Сумма элементов первого массива (целые числа): " << intProcessor.calculateSum() << std::endl;
//    std::cout << "Количество положительных элементов первого массива: " << intProcessor.countPositiveElements() << std::endl;
//    std::cout << "Произведение элементов с четными индексами второго массива: "
//        << intProcessor.calculateProductOfEvenIndexedElements() << std::endl;
//
//    ArrayProcessor<double> doubleProcessor(5);
//    std::cout << "Сумма элементов первого массива (вещественные числа): " << doubleProcessor.calculateSum() << std::endl;
//    std::cout << "Количество положительных элементов первого массива: " << doubleProcessor.countPositiveElements() << std::endl;
//    std::cout << "Произведение элементов с четными индексами второго массива: "
//        << doubleProcessor.calculateProductOfEvenIndexedElements() << std::endl;
//
//    ArrayProcessor<char> charProcessor(5);
//    charProcessor.displayAsciiCodes();
//
//    return 0;
//}
//
///*Создать шаблон класса, у которого есть 2 поля в виде одномерных массивов одного размера. Заполнить массивы с помощью 
//генератора случайных чисел. Найти сумму, количество положительных элементов первого массива и произведение элементов с 
//четными индексами второго массива. Продемонстрировать работу шаблонов на данных различных типов. Реализовать явную специализацию 
//класса для символьного типа, которая выводит на экран ASCII-коды элементов символьных массивов.*/