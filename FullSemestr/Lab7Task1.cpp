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
//    cout << "������������ ������� � ������� ����� �����: " << findMax(intArray, intSize) << endl;
//
//    bubbleSort(intArray, intSize);
//    cout << "��������������� ������ ����� �����: ";
//    for (int i = 0; i < intSize; ++i) {
//        cout << intArray[i] << " ";
//    }
//    cout << endl;
//
//    double doubleArray[] = { 3.14, 2.71, 1.618, 0.577, 2.718 };
//    int doubleSize = sizeof(doubleArray) / sizeof(double);
//
//    cout << "������������ ������� � ������� ������������ �����: " << findMax(doubleArray, doubleSize) << endl;
//
//    bubbleSort(doubleArray, doubleSize);
//    cout << "��������������� ������ ������������ �����: ";
//    for (int i = 0; i < doubleSize; ++i) {
//        cout << doubleArray[i] << " ";
//    }
//    cout << endl;
//
//    char charArray[] = { 'c', 'a', 't', 'd', 'o', 'g' };
//    int charSize = sizeof(charArray) / sizeof(char);
//
//    cout << "������������ ������� � ������� ��������: " << findMax(charArray, charSize) << endl;
//
//    bubbleSort(charArray, charSize);
//    cout << "��������������� ������ ��������: ";
//    for (int i = 0; i < charSize; ++i) {
//        cout << charArray[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
//
///*1.	������� ������ �������, ������� ������� �������� ������������� �������� �������. 
//����������� ������� ������ ���� ��� � ������ ������� (���� int). ������� ������ �������,
//�������������� ���������� ������ �������. ����������� ������� ������ ���� ��� � ������ ������� (���� int). 
//������������������ ������ �������� �� ������ ������, ������������� � ����������� �����.*/
