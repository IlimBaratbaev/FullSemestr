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
//        cout << "ASCII-���� ��������� ������� �������: ";
//        for (int i = 0; i < size; ++i) {
//            cout << static_cast<int>(array1[i]) << " ";
//        }
//        cout << endl;
//
//        cout << "ASCII-���� ��������� ������� �������: ";
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
//    cout << "������������� �����" << endl;
//    ArrayProcessor<int> intProcessor(5);
//    intProcessor.display();
//    cout << "����� ��������� ������� ������� (����� �����): " << intProcessor.calculateSum() << endl;
//    cout << "���������� ������������� ��������� ������� �������: " << intProcessor.countPositiveElements() << endl;
//    cout << "������������ ��������� � ������� ��������� ������� �������: "
//        << intProcessor.calculateProductOfEvenIndexedElements() << endl;
//    cout << "������������ �����" << endl;
//    ArrayProcessor<double> doubleProcessor(5);
//    cout << "����� ��������� ������� ������� (������������ �����): " << doubleProcessor.calculateSum() << endl;
//    cout << "���������� ������������� ��������� ������� �������: " << doubleProcessor.countPositiveElements() << endl;
//    cout << "������������ ��������� � ������� ��������� ������� �������: "
//        << doubleProcessor.calculateProductOfEvenIndexedElements() << endl;
//    cout << "�������" << endl;
//    ArrayProcessor<char> charProcessor(5);
//    charProcessor.display();
//    charProcessor.displayAsciiCodes();
//
//    return 0;
//}
//
///*������� ������ ������, � �������� ���� 2 ���� � ���� ���������� �������� ������ �������. ��������� ������� � ������� 
//���������� ��������� �����. ����� �����, ���������� ������������� ��������� ������� ������� � ������������ ��������� � 
//������� ��������� ������� �������. ������������������ ������ �������� �� ������ ��������� �����. ����������� ����� ������������� 
//������ ��� ����������� ����, ������� ������� �� ����� ASCII-���� ��������� ���������� ��������.*/