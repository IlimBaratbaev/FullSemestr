///*1.	�������� ����� ���������� � ��������� ARROVER1, ����� �������, ��������� �� ������� �������, ��������
//��������� ����������. ����-������� ����� �������� ������������ ��������� �� ������. ������ ���������� � ������ � 
//������� ������ putel () � ��������� �� ����� � ������� ������ getel (). ������������ ������� ����������� � ������� ������ ��������� 
//�� ������ ��� ������� ������������� �������, �� ��������� � ������� �������.*/
//#include <iostream>
//#include <process.h>
//using namespace std;
//const int LIMIT = 100;
//class safearray {
//private:
//	int arr[LIMIT];
//public:
//	void putEl(int n, int elValue) {
//		if (n < 0 || n >= LIMIT) {
//			cout << "������";
//			exit(1);
//		}
//		arr[n] = elValue;
//	}
//	int getEL(int n) const {
//		if (n < 0 || n >= LIMIT) {
//			cout << "������ ������";
//			exit(1);
//		}
//		return arr[n];
//	}
//};
//int main() {
//	safearray sa1;
//	for (int j = 0; j < LIMIT; j++)
//		sa1.putEl(j, j * 10);
//	for (int j = 0; j < LIMIT; j++) {
//		int temp = sa1.getEL(j);
//		cout << "������� " << j << " ����� " << temp << endl;
//	}
//	return 0;
//}