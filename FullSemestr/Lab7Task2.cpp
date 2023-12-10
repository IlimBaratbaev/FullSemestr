//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//// ������ ������
//template <typename T>
//class ArrayProcessor {
//private:
//    T* array1;
//    T* array2;
//    int size;
//
//public:
//    // �����������
//    ArrayProcessor(int size) : size(size) {
//        array1 = new T[size];
//        array2 = new T[size];
//        // ������������� ���������� ��������� �����
//        srand(static_cast<unsigned>(time(0)));
//        // ���������� �������� ���������� ����������
//        for (int i = 0; i < size; ++i) {
//            array1[i] = static_cast<T>(rand() % 100 - 50); // ������������ ����� �� -50 �� 49
//            array2[i] = static_cast<T>(rand() % 100 - 50);
//        }
//    }
//
//    // ����������
//    ~ArrayProcessor() {
//        delete[] array1;
//        delete[] array2;
//    }
//
//    // ����� ��� ���������� ����� ��������� ������� �������
//    T calculateSum() {
//        T sum = 0;
//        for (int i = 0; i < size; ++i) {
//            sum += array1[i];
//        }
//        return sum;
//    }
//
//    // ����� ��� �������� ���������� ������������� ��������� ������� �������
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
//    // ����� ��� ���������� ������������ ��������� � ������� ��������� ������� �������
//    T calculateProductOfEvenIndexedElements() {
//        T product = 1;
//        for (int i = 0; i < size; i += 2) {
//            product *= array2[i];
//        }
//        return product;
//    }
//};
//
//// ����� ������������� ������ ��� ����������� ����
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
//        // ������������� ���������� ��������� �����
//        srand(static_cast<unsigned>(time(0)));
//        // ���������� �������� ���������� ��������� (ASCII-���� �� 32 �� 126)
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
//        std::cout << "ASCII-���� ��������� ������� �������: ";
//        for (int i = 0; i < size; ++i) {
//            std::cout << static_cast<int>(array1[i]) << " ";
//        }
//        std::cout << std::endl;
//
//        std::cout << "ASCII-���� ��������� ������� �������: ";
//        for (int i = 0; i < size; ++i) {
//            std::cout << static_cast<int>(array2[i]) << " ";
//        }
//        std::cout << std::endl;
//    }
//};
//
//int main() {
//    // ������� ������������� ������� ������ �� ��������� ����� ������
//    ArrayProcessor<int> intProcessor(5);
//    std::cout << "����� ��������� ������� ������� (����� �����): " << intProcessor.calculateSum() << std::endl;
//    std::cout << "���������� ������������� ��������� ������� �������: " << intProcessor.countPositiveElements() << std::endl;
//    std::cout << "������������ ��������� � ������� ��������� ������� �������: "
//        << intProcessor.calculateProductOfEvenIndexedElements() << std::endl;
//
//    ArrayProcessor<double> doubleProcessor(5);
//    std::cout << "����� ��������� ������� ������� (������������ �����): " << doubleProcessor.calculateSum() << std::endl;
//    std::cout << "���������� ������������� ��������� ������� �������: " << doubleProcessor.countPositiveElements() << std::endl;
//    std::cout << "������������ ��������� � ������� ��������� ������� �������: "
//        << doubleProcessor.calculateProductOfEvenIndexedElements() << std::endl;
//
//    ArrayProcessor<char> charProcessor(5);
//    charProcessor.displayAsciiCodes();
//
//    return 0;
//}
//
///*������� ������ ������, � �������� ���� 2 ���� � ���� ���������� �������� ������ �������. ��������� ������� � ������� 
//���������� ��������� �����. ����� �����, ���������� ������������� ��������� ������� ������� � ������������ ��������� � 
//������� ��������� ������� �������. ������������������ ������ �������� �� ������ ��������� �����. ����������� ����� ������������� 
//������ ��� ����������� ����, ������� ������� �� ����� ASCII-���� ��������� ���������� ��������.*/