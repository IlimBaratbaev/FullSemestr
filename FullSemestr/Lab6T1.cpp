//#include <iostream>
//using namespace std;
//class Array {
//protected:
//	const int maxAmount = 0;
//	unsigned* array;
//public:
//	Array(int max) : maxAmount(max) {
//		array = new unsigned[maxAmount];
//	}
//	~Array() {
//		delete[] array;
//	}
//	virtual int arrayOperation() {
//		int result = 0;
//		for (int i = 0; i < maxAmount; i++) {
//			result += array[i];
//		}
//		return result;
//	}
//	int getMaxAmount() {
//		return maxAmount;
//	}
//	unsigned* getArray() {
//		return array;
//	}
//};
//class Array2 : public Array {
//
//public:
//	Array2(int max) : Array(max) {
//	}
//	virtual int arrayOperation() {
//		int result = 0;
//		for (int i = 0; i < maxAmount; i++) {
//			result -= array[i];
//		}
//		return result;
//	}
//};
//class Array3 : public Array2 {
//
//public:
//	Array3(int max) : Array2(max) {
//	}
//	virtual int arrayOperation() {
//		int result = 1;
//		for (int i = 0; i < maxAmount; i++) {
//			result *= array[i];
//		}
//		return result;
//	}
//};
//void addElementsToArray(unsigned*, int);
//void showArray(unsigned*, int);
//int main() {
//	setlocale(LC_ALL, "ru");
//	srand(time(NULL));
//	Array a1(10);
//	addElementsToArray(a1.getArray(), a1.getMaxAmount());
//	showArray(a1.getArray(), a1.getMaxAmount());
//	cout << "����� ���������: " << a1.arrayOperation();
//	cout << endl;
//	Array2 a2(10);
//	addElementsToArray(a2.getArray(), a2.getMaxAmount());
//	showArray(a2.getArray(), a2.getMaxAmount());
//	cout << "�������� ���������: " << a2.arrayOperation();
//	cout << endl;
//	Array3 a3(10);
//	addElementsToArray(a3.getArray(), a3.getMaxAmount());
//	showArray(a3.getArray(), a3.getMaxAmount());
//	cout << "��������� ���������: " << a3.arrayOperation();
//	return 0;
//}
//void addElementsToArray(unsigned* array, int amount) {
//	for (int i = 0; i < amount; i++)
//	{
//		array[i] = rand() % 10 + 1;
//	}
//}
//void showArray(unsigned* array, int amount) {
//	for (int i = 0; i < amount; i++)
//	{
//		cout << array[i] << "\t";
//	}
//	cout << endl;
//}
///*������� ������� ����� Array � ������ : ������ ���� unsigned � ���� ��� �������� ���������� ��������� � �������� ������� �������.����������� ��������� ������ ������� �������� ����������� ����������.����������� ����������� �������������, �������� ���������� ��������� � ��������� ��������(�� ��������� 0).����������� � ������ Array ����������� ������� ������������� �������� ��������.����������� ��� ������, ������������� ����������� ������� ��������.���������� ��������� ������ ������������������ ��� �������� ������ ����������� �������.
//* */