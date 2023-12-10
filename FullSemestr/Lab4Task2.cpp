//#include <iostream>
//using namespace std;
//class Fraction {
//private:
//	double chislo;
//public:
//	Fraction(double num) :chislo(num) {}
//	Fraction() : chislo(0) {}
//	int getElement() const {
//		return chislo;
//	}
//	Fraction& operator+(const Fraction& R) {
//		chislo += R.chislo;
//		return *this;
//	}
//	Fraction& operator -(const Fraction& R) {
//		chislo -= R.chislo;
//		return *this;
//	}
//	Fraction& operator *(const Fraction& R) {
//		chislo *= R.chislo;
//		return *this;
//	}
//	Fraction& operator/(const Fraction& R) {
//		if (R.chislo == 0) {
//			throw runtime_error("������� �� ���� ����������");
//		}
//		chislo /= R.chislo;
//		return *this;
//	}
//	Fraction& operator+(const double R) {
//		chislo += R;
//		return *this;
//	}
//	Fraction& operator -(const double R) {
//		chislo -= R;
//		return *this;
//	}
//	Fraction& operator *(const double R) {
//		chislo *= R;
//		return *this;
//	}
//	Fraction& operator/(const double R) {
//		if (R == 0) {
//			throw runtime_error("������� �� ���� ����������");
//		}
//		chislo /= R;
//		return *this;
//	}
//	Fraction operator ++() {
//		++chislo;
//		return *this;
//	}
//	Fraction operator++(int) {
//		chislo++;
//		return *this;
//	}
//};
//void menu();
//int main() {
//	setlocale(LC_ALL, "ru");
//	char choice = 'a';
//	char arithmetic;
//	Fraction a;
//	Fraction b;
//	int num;
//	try {
//		menu();
//		while (choice != 'e') {
//			cout << "�������� ��������: ";
//			cin >> choice;
//			switch (choice)
//			{
//			case '1':
//				cout << "������� ����� A: ";
//				cin >> num;
//				a = Fraction(num);
//				break;
//			case '2':
//				cout << "������� ����� B: ";
//				cin >> num;
//				b = Fraction(num);
//				break;
//			case '3':
//				cout << "����� �������� ���������� ����� ����� �������(+,-,*,/): ";
//				cin >> arithmetic;
//				switch (arithmetic)
//				{
//				case '+':
//					a + b;
//					cout << "������� �������: " << a.getElement() << endl;
//					break;
//				case '-':
//					a - b;
//					cout << "������� �������: " << a.getElement() << endl;
//					break;
//				case '*':
//					a * b;
//					cout << "������� �������: " << a.getElement() << endl;
//					break;
//				case '/':
//					a / b;
//					cout << "������� �������: " << a.getElement() << endl;
//					break;
//				default:
//					cout << "��������� �������� ���";
//					break;
//				}
//				break;
//			case '4':
//				cout << "������� ����� ��� �����: ";
//				cin >> num;
//				a + num;
//				cout << "������� �������: " << a.getElement() << endl;
//				break;
//			case '5':
//				cout << "������� ����� ��� ���������: ";
//				cin >> num;
//				a - num;
//				cout << "������� �������: " << a.getElement() << endl;
//				break;
//			case '6':
//				cout << "������� ����� ��� ������������: ";
//				cin >> num;
//				a * num;
//				cout << "������� �������: " << a.getElement() << endl;
//				break;
//			case '7':
//				cout << "������� ����� ��� �������: ";
//				cin >> num;
//				a / num;
//				cout << "������� �������: " << a.getElement() << endl;
//				break;
//			case '8':
//				++a;
//				cout << "������� �������: " << a.getElement() << endl;
//				break;
//			case '9':
//				a++;
//				cout << "������� �������: " << a.getElement() << endl;
//				break;
//			case 'a':
//				cout << "������� �������: " << a.getElement() << endl;
//				break;
//			case 'b':
//				cout << "������� �������: " << a.getElement() << endl;
//				break;
//			case 'c':
//				menu();
//				break;
//			default:
//				break;
//			}
//		}
//	}
//	catch (const exception& e) {
//		cerr << "����������: " << e.what() << endl;
//	}
//	return 0;
//}
//void menu() {
//	cout << "1 - ������/�������� ����� A\t2 - ������/�������� ����� B\n3-�������� ����� A � B\n4 - ��������\t5 - ���������\t6 - ���������\t7 - �������\n8 - ������������\t9 - �����������\na-������� ����� A\tb-������� ����� B\tc-����\n";
//}
///*2.	 ������� ����� fraction, � �������� ���� ���� �������� ������������� ���� chislo ���� double.  ����������� ��� ����� ������ 
//�������������� �������� ��������, ���������, ��������� � ������� ���, ����� ��� ����� ����������� ��� � ��������� ������, ��� � �
//������� (�� ���� ���������, ��������, �� ������ �������� 3/4 +2/5, �� � 1/2 + 4 ��� 2* 5/6). ����� ����������� ������� �������� 
//���������� � ���������� � ����������� ����� ���������� �����. ����������������� ������ ������. ����������� ����������� �� ���������
//� ����������� � ���� ���������� ��� ������������� ���� ������.*/
