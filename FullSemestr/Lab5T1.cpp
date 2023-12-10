//#include <iostream>
//#include <vector>
//#include <iomanip>
//using namespace std;
//class Employee
//{
//public:
//	Employee() : name("�����"), position("�����������"), salary(0) {}
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
//	Manager(int bonus, string car, int options, string n, int s) : Employee(n, "��������", s), annual_bonus(bonus), company_car(car), stock_options(options) {
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
//	/*Employee e1("������", "�����������", 10000.0);
//	e1.showEmployeeInfo();*/
//	/*managerHead();
//	Manager m1(12, "jjj", 23, "������", 10000.0);
//	m1.ShowManagerInfo();*/
//	char choice = 'y';
//	showMenu();
//	while (choice != '5') {
//		cout << "�������� ����� �������: ";
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
//			cout << "��� ��������� �������" << endl;
//		}
//	}
//	return 0;
//}
//
//void showMenu() {
//	cout << "����" << endl;
//	cout << "1 - �������� ����������        2 - �������� ���������         3 - ����� �����������         4 - ����� ����������		5 - �����" << endl;
//}
//void employeeHead() {
//	cout << "-------------------------------------------------------\n";
//	cout << "|    ���    |   ���������   |  ��������  |  ������� �� |\n";
//	cout << "-------------------------------------------------------\n";
//}
//void managerHead() {
//	cout << "---------------------------------------------------------------------------------------------\n";
//	cout << "|    ���    |   ���������   |  ��������  |  ����� |    ������    |    �������  |  ������ ��  |\n";
//	cout << "---------------------------------------------------------------------------------------------\n";
//}
//void addEmployee() {
//	string name, position;
//	int salary;
//	cout << "���: ";
//	cin >> name;
//	cout << "���������: ";
//	cin >> position;
//	cout << "��������: ";
//	cin >> salary;
//	Employee forAddEmployee(name, position, salary);
//	employees.push_back(forAddEmployee);
//	cout << "�������� ������� ��� ��������.\n";
//}
//void addManager() {
//	string name, position, car;
//	int salary, bonus;
//	int options;
//	cout << "���: ";
//	cin >> name;
//	cout << "��������: ";
//	cin >> salary;
//	cout << "������ ��������: ";
//	cin >> car;
//	cout << "��������� �����: ";
//	cin >> bonus;
//	cout << "������� �� �����: ";
//	cin >> options;
//	Manager forAddManager(bonus, car, options, name, salary);
//	managers.push_back(forAddManager);
//	cout << "�������� ������� ��� ��������.\n";
//}
///*
//��� ����� �������� ������������ ����� ��������(Employee), ������������� � �������� ���.
//� �������� ����� ������ ���� ���� : ��� ��������� - ���������� ��������� - position[64], ���������� ����� �� ����� - salary;
//������: ����������� �� ���������, ����������� � �����������, ����������, ������ ���������� ����� �� ���, ���������� ���������� � ������ - �������� �� �������.
//�� ������ ����������� ������ - �������� Employee �������� � ������� ��������� ������������ public ����� - ������� ��������(Manager).
//����� - ������� Manager ������� �� :
//�����: ��������� �����(annual_bonus), ������ ��������(company_car[64]), ������� �� �����(stock_options) ����(int);
//�������: ����������� �� ���������, ����������� � �����������, ����������, ���������� ���������� � ������ - ������� �� �������.
//������������ � ���������������� ������� � ������ ������, �� ������� ��������� �������� ��� � ������������ � ������������.
//*/
//
