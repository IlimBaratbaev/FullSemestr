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
//			throw std::runtime_error("Деление на ноль невозможно");
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
//			throw overflow_error("Арифметическое переполнение");
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
//			cout << "Выберите действие: ";
//			cin >> choice;
//			switch (choice)
//			{
//			case '1':
//				cout << "Введите число для операций: ";
//				cin >> num;
//				a = Int(num);
//				break;
//			case '2':
//				cout << "Введите число для суммы: ";
//				cin >> num;
//				b = Int(num);
//				a + b;
//				cout << "Текущий элемент: " << a.getElement() << endl;
//				break;
//			case '3':
//				cout << "Введите число для вычитания: ";
//				cin >> num;
//				b = Int(num);
//				a - b;
//				cout << "Текущий элемент: " << a.getElement() << endl;
//				break;
//			case '4':
//				cout << "Введите число для произведения: ";
//				cin >> num;
//				b = Int(num);
//				a * b;
//				cout << "Текущий элемент: " << a.getElement() << endl;
//				break;
//			case '5':
//				cout << "Введите число для деления: ";
//				cin >> num;
//				b = Int(num);
//				a / b;
//				cout << "Текущий элемент: " << a.getElement() << endl;
//				break;
//			case '6':
//				++a;
//				cout << "Текущий элемент: " << a.getElement() << endl;
//				break;
//			case '7':
//				a++;
//				cout << "Текущий элемент: " << a.getElement() << endl;
//				break;
//			case '8':
//				cout << "Текущий элемент: " << a.getElement() << endl;
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
//		cerr << "Исключение: " << e.what() << endl;
//	}
//	return 0;
//}
//void menu() {
//	cout << "1 - ввести/обновить число\n2 - сложение\t3 - вычитание\t4 - умножение\t5 - деление\n6 - преинкремент\t7 - посткримент\n8-вывести число\t9-меню\n";
//} 
///*Создайте и откомпилируйте класс Int.Перегрузите четыре бинарных целочисленных арифметических операции(+, -, *, / )
//и унарные операции постфиксной и префиксной  форм инкремента с помощью внутренней операторной функции так, чтобы их 
//можно было использовать для операций с объектами класса Int.
//Если результат какой - либо из них выходит за границы типа int(в 32 - битной системе), имеющее значения 
//от 2 147 483 648 до - 2 147 483 648, то операция должна послать сообщение об ошибке и завершить программу.
//Для выявления ошибки арифметического переполнения используйте концепцию исключения.
//Для облегчения проверки переполнения выполняйте вычисления с использованием типа  long double.При описании унарных операций используйте указатель this.
//*/