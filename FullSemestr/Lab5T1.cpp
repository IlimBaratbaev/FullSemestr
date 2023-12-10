//#include <iostream>
//#include <vector>
//#include <iomanip>
//using namespace std;
//class Employee
//{
//public:
//	Employee() : name("Антон"), position("Безработный"), salary(0) {}
//	Employee(string name, string position, int salary)
//		: name(name), position(position), salary(salary) {
//	}
//	~Employee(){}
//	double countYearSalary() {
//		return 12 * salary;
//	}
//	void showEmployeeInfo() {		
//		cout << "| " << setw(9) << name << " | " << setw(13) << position << " | " << setw(10) << salary << " |";
//		            cout << setw(12) << countYearSalary() << " |\n";
//					cout << "-------------------------------------------------------\n";
//	}
//protected:
//	string name;
//	string position;
//
//	int salary;
//};
//class Manager : public Employee {
//private:
//	int annual_bonus;
//	string company_car;
//	int stock_options;
//public:
//	Manager(int bonus, string car, int options, string n, int s) : Employee(n, "Менеджер", s), annual_bonus(bonus), company_car(car), stock_options(options) {
//
//	}
//	Manager() : Employee(), annual_bonus(0), company_car("Kia k5"), stock_options(10) {
//
//	}
//	~Manager() {
//	}
//	void ShowManagerInfo() {
//		cout << "| " << setw(9) << name << " | " << setw(13) << position << " | " << setw(10) << salary << " |";
//		cout << setw(7) << annual_bonus << " | " << setw(12) << company_car << " | " << setw(11) << stock_options << " | ";
//		cout << setw(11) << countYearSalary() + annual_bonus << " |\n";
//		cout << "---------------------------------------------------------------------------------------------\n";
//	}
//
//};
//void showMenu();
//void employeeHead();
//void managerHead();
//void addEmployee();
//void addManager();
//vector<Employee> employees;
//vector<Manager> managers;
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	//employeeHead();
//	/*Employee e1("Максим", "Прогрфммист", 10000.0);
//	e1.showEmployeeInfo();*/
//	/*managerHead();
//	Manager m1(12, "jjj", 23, "Максим", 10000.0);
//	m1.ShowManagerInfo();*/
//	char choice = 'y';
//	showMenu();
//	while (choice != '5') {
//		cout << "Выберите номер команды: ";
//		cin >> choice;
//		switch (choice) {
//		case '1':
//			addEmployee();
//			break;
//		case '2':
//			addManager();
//			break;
//		case '3':
//			employeeHead();
//			for (int i = 0; i < employees.size(); i++) {
//				employees[i].showEmployeeInfo();
//			}
//			break;
//		case '4':
//			managerHead();
//			for (int i = 0; i < managers.size(); i++) {
//				managers[i].ShowManagerInfo();
//			}
//			break;
//		default:
//			cout << "Нет выбранной команды" << endl;
//		}
//	}
//	return 0;
//}
//
//void showMenu() {
//	cout << "Меню" << endl;
//	cout << "1 - добавить сотрудника        2 - добавить менеджера         3 - вывод сотрудников         4 - вывод менеджеров		5 - выход" << endl;
//}
//void employeeHead() {
//	cout << "-------------------------------------------------------\n";
//	cout << "|    Имя    |   Должность   |  Зарплата  |  Годовая ЗП |\n";
//	cout << "-------------------------------------------------------\n";
//}
//void managerHead() {
//	cout << "---------------------------------------------------------------------------------------------\n";
//	cout << "|    Имя    |   Должность   |  Зарплата  |  Бонус |    Машина    |    Опционы  |  Полная ЗП  |\n";
//	cout << "---------------------------------------------------------------------------------------------\n";
//}
//void addEmployee() {
//	string name, position;
//	int salary;
//	cout << "Имя: ";
//	cin >> name;
//	cout << "Должность: ";
//	cin >> position;
//	cout << "Зарплата: ";
//	cin >> salary;
//	Employee forAddEmployee(name, position, salary);
//	employees.push_back(forAddEmployee);
//	cout << "Работник успешно был добавлен.\n";
//}
//void addManager() {
//	string name, position, car;
//	int salary, bonus;
//	int options;
//	cout << "Имя: ";
//	cin >> name;
//	cout << "Зарплата: ";
//	cin >> salary;
//	cout << "Машина компании: ";
//	cin >> car;
//	cout << "Ежегодный бонус: ";
//	cin >> bonus;
//	cout << "Опционы на акции: ";
//	cin >> options;
//	Manager forAddManager(bonus, car, options, name, salary);
//	managers.push_back(forAddManager);
//	cout << "Менеджер успешно был добавлен.\n";
//}
///*
//Для этого создайте родительский класс работник(Employee), протестируйте и отладьте его.
//В описании этого класса есть поля : имя работника - занимаемая должность - position[64], заработная плата за месяц - salary;
//методы: конструктор по умолчанию, конструктор с аргументами, деструктор, расчет заработной платы за год, размещение информации о классе - родителе на консоли.
//На основе отлаженного класса - родителя Employee создайте с помощью механизма наследования public класс - потомок менеджер(Manager).
//Класс - потомок Manager состоит из :
//полей: ежегодный бонус(annual_bonus), машина компании(company_car[64]), опционы на акции(stock_options) типа(int);
//методов: конструктор по умолчанию, конструктор с аргументами, деструктор, размещение информации о классе - потомке на консоли.
//Определитесь с идентификаторами доступа к членам класса, не нарушая основного принципа ООП – инкапсуляции в наследовании.
//*/
//
