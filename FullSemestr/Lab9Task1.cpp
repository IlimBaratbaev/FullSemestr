/*1.	�������� ����� ���������� � ��������� ARROVER1, ����� �������, ��������� �� ������� �������, ��������
��������� ����������. ����-������� ����� �������� ������������ ��������� �� ������. ������ ���������� � ������ � 
������� ������ putel () � ��������� �� ����� � ������� ������ getel (). ������������ ������� ����������� � ������� ������ ��������� 
�� ������ ��� ������� ������������� �������, �� ��������� � ������� �������.*/
#include <iostream>
#include <process.h>
using namespace std;
const int LIMIT = 10;
class IndexOutOfRangeException : public exception {
public:
	const char* what() const throw() {
		return "������ ��� ����������� ���������";
	}
};
class safearray {
private:
	int arr[LIMIT];
public:
	void putEl(int n, int elValue) {
		try {
			if (n < 0 || n >= LIMIT) {
				throw IndexOutOfRangeException();
			}
			arr[n] = elValue;
		}
		catch (const exception& e) {
			cout << e.what() << endl;
		}
		
	}
	int getEL(int n) const {
		try {
			if (n < 0 || n >= LIMIT) {
				throw IndexOutOfRangeException();
			}
			return arr[n];
		}
		catch (const exception& e) {
			cout << e.what() << endl;
		}
		
	}
};
int main() {
	setlocale(LC_ALL, "ru");
	safearray sa1;
	for (int j = 0; j < LIMIT; j++)
		sa1.putEl(j, j * 10);
	cout << "��� �������� �������:";
	for (int j = 0; j < LIMIT; j++)
		cout << " " << sa1.getEL(j);
	cout << "\n������� �� ����� �������" << endl;
	sa1.putEl(101, 777);
	cout << "����� �� ����� �������" << endl;
	sa1.getEL(LIMIT + 5);
	return 0;
}