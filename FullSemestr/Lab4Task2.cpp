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
//			throw runtime_error("Деление на ноль невозможно");
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
//			throw runtime_error("Деление на ноль невозможно");
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
//			cout << "Выберите действие: ";
//			cin >> choice;
//			switch (choice)
//			{
//			case '1':
//				cout << "Введите число A: ";
//				cin >> num;
//				a = Fraction(num);
//				break;
//			case '2':
//				cout << "Введите число B: ";
//				cin >> num;
//				b = Fraction(num);
//				break;
//			case '3':
//				cout << "Какую операцию произвести между двумя числами(+,-,*,/): ";
//				cin >> arithmetic;
//				switch (arithmetic)
//				{
//				case '+':
//					a + b;
//					cout << "Текущий элемент: " << a.getElement() << endl;
//					break;
//				case '-':
//					a - b;
//					cout << "Текущий элемент: " << a.getElement() << endl;
//					break;
//				case '*':
//					a * b;
//					cout << "Текущий элемент: " << a.getElement() << endl;
//					break;
//				case '/':
//					a / b;
//					cout << "Текущий элемент: " << a.getElement() << endl;
//					break;
//				default:
//					cout << "Выбранной операции нет";
//					break;
//				}
//				break;
//			case '4':
//				cout << "Введите число для суммы: ";
//				cin >> num;
//				a + num;
//				cout << "Текущий элемент: " << a.getElement() << endl;
//				break;
//			case '5':
//				cout << "Введите число для вычитания: ";
//				cin >> num;
//				a - num;
//				cout << "Текущий элемент: " << a.getElement() << endl;
//				break;
//			case '6':
//				cout << "Введите число для произведения: ";
//				cin >> num;
//				a * num;
//				cout << "Текущий элемент: " << a.getElement() << endl;
//				break;
//			case '7':
//				cout << "Введите число для деления: ";
//				cin >> num;
//				a / num;
//				cout << "Текущий элемент: " << a.getElement() << endl;
//				break;
//			case '8':
//				++a;
//				cout << "Текущий элемент: " << a.getElement() << endl;
//				break;
//			case '9':
//				a++;
//				cout << "Текущий элемент: " << a.getElement() << endl;
//				break;
//			case 'a':
//				cout << "Текущий элемент: " << a.getElement() << endl;
//				break;
//			case 'b':
//				cout << "Текущий элемент: " << a.getElement() << endl;
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
//		cerr << "Исключение: " << e.what() << endl;
//	}
//	return 0;
//}
//void menu() {
//	cout << "1 - ввести/обновить число A\t2 - ввести/обновить число B\n3-операция между A и B\n4 - сложение\t5 - вычитание\t6 - умножение\t7 - деление\n8 - преинкремент\t9 - посткримент\na-вывести число A\tb-вывести число B\tc-меню\n";
//}
///*2.	 Опишите класс fraction, у которого есть одно закрытое целочисленное поле chislo типа double.  Перегрузите для этого класса 
//арифметические операции сложения, вычитания, умножения и деления так, чтобы они могли оперировать как с объектами класса, так и с
//числами (то есть выполнять, например, не только действие 3/4 +2/5, но и 1/2 + 4 или 2* 5/6). Также перегрузите унарную операцию 
//инкремента в префиксной и постфиксной форме увеличения дроби. Продемонстрируйте работу класса. Используйте конструктор по умолчанию
//и конструктор с одни аргументом для инициализации поля класса.*/
