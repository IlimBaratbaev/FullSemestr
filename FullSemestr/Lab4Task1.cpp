//#include <iostream>
//using namespace std;
//class Int {
//private: 
//	int element;
//public:
//	Int(int num) :element(num){}
//	Int() : element(0){}
//	int getElement() const {
//		return element;
//	}
//	Int& operator+(const Int& R) {
//        checkOverflow(static_cast<long double>(element) + R.element);
//		element += R.element;
//		return *this;
//    }
//	Int& operator -(const Int& R) {
//		checkOverflow(static_cast<long double> (element) - R.element);
//		element -= R.element;
//		return *this;
//	}
//	Int& operator *(const Int& R) {
//		checkOverflow(static_cast<long double> (element) - R.element);
//		element *= R.element;
//		return *this;
//	}
//	Int& operator/(const Int& R) {
//		if (R.element == 0) {
//			throw std::runtime_error("������� �� ���� ����������");
//		}
//		checkOverflow(static_cast<long double>(element) / R.element);
//		element /= R.element;
//		return *this;
//	}
//	Int operator ++() {
//		checkOverflow(static_cast<long double>(element) + 1);
//		++element;
//		return *this;
//	}
//	Int operator++(int) {
//		checkOverflow(static_cast<long double>(element) + 1);
//		element++;
//		return *this;
//	}
//private:
//	void checkOverflow(long double result) const {
//		if (result >= 2147483648.0L || result < -2147483648.0L) {
//			throw overflow_error("�������������� ������������");
//		}
//	}
//};
//void menu();
//int main() {
//	setlocale(LC_ALL, "ru");
//	char choice = 'a';
//	Int a;
//	Int b;
//	int num;
//	try {
//		menu();
//		while (choice != 'e') {
//			cout << "�������� ��������: ";
//			cin >> choice;
//			switch (choice)
//			{
//			case '1':
//				cout << "������� ����� ��� ��������: ";
//				cin >> num;
//				a = Int(num);
//				break;
//			case '2':
//				cout << "������� ����� ��� �����: ";
//				cin >> num;
//				b = Int(num);
//				a + b;
//				cout << "������� �������: " << a.getElement() << endl;
//				break;
//			case '3':
//				cout << "������� ����� ��� ���������: ";
//				cin >> num;
//				b = Int(num);
//				a - b;
//				cout << "������� �������: " << a.getElement() << endl;
//				break;
//			case '4':
//				cout << "������� ����� ��� ������������: ";
//				cin >> num;
//				b = Int(num);
//				a * b;
//				cout << "������� �������: " << a.getElement() << endl;
//				break;
//			case '5':
//				cout << "������� ����� ��� �������: ";
//				cin >> num;
//				b = Int(num);
//				a / b;
//				cout << "������� �������: " << a.getElement() << endl;
//				break;
//			case '6':
//				++a;
//				cout << "������� �������: " << a.getElement() << endl;
//				break;
//			case '7':
//				a++;
//				cout << "������� �������: " << a.getElement() << endl;
//				break;
//			case '8':
//				cout << "������� �������: " << a.getElement() << endl;
//				break;
//			case '9':
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
//	cout << "1 - ������/�������� �����\n2 - ��������\t3 - ���������\t4 - ���������\t5 - �������\n6 - ������������\t7 - �����������\n8-������� �����\t9-����\n";
//} 
///*�������� � �������������� ����� Int.����������� ������ �������� ������������� �������������� ��������(+, -, *, / )
//� ������� �������� ����������� � ����������  ���� ���������� � ������� ���������� ����������� ������� ���, ����� �� 
//����� ���� ������������ ��� �������� � ��������� ������ Int.
//���� ��������� ����� - ���� �� ��� ������� �� ������� ���� int(� 32 - ������ �������), ������� �������� 
//�� 2 147 483 648 �� - 2 147 483 648, �� �������� ������ ������� ��������� �� ������ � ��������� ���������.
//��� ��������� ������ ��������������� ������������ ����������� ��������� ����������.
//��� ���������� �������� ������������ ���������� ���������� � �������������� ����  long double.��� �������� ������� �������� ����������� ��������� this.
//*/