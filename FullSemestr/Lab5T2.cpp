//#include <iostream>
//#include <vector>
//#include <iomanip>
//using namespace std;
//class Display {
//protected:
//	string type;
//	long colors;
//	int x_resolution;
//	int y_resolution;
//public:
//	Display() : type("IPS"), colors(256000), x_resolution(1920), y_resolution(1080) {
//	}
//	Display(string type, long colors, int x_res, int y_res) : type(type), colors(colors), x_resolution(x_res), y_resolution(y_res) {
//	}
//	~Display(){}
//	void showDisplay() {
//		cout << "| " << setw(9) << type << " | " << setw(9) << colors << " | " << setw(14) << x_resolution << " |";
//		cout << setw(13) << y_resolution << " |\n";
//		cout << "---------------------------------------------------------\n";
//	}
//};
//class MotherBoard {
//protected:
//	int processor;
//	int speed;
//	int RAM;
//public:
//	MotherBoard() : processor(7), speed(4), RAM(16) {}
//	MotherBoard(int processor, int speed, int RAM) : processor(processor), speed(speed), RAM(RAM) {}
//	~MotherBoard(){}
//	void showMotherboard() {
//		cout << "| " << setw(10) << processor << " | " << setw(15) << speed << " | " << setw(7) << RAM << "GB |" << endl;
//		cout << "-------------------------------------------\n";
//	}
//};
//class Computer : public Display, public MotherBoard {
//	string name;
//	int hard_disk;
//public:
//	Computer(string name, int hard_disk, int processor, int speed, int RAM, string type, long colors, int x_res, int y_res) :
//	MotherBoard(processor, speed, RAM), Display(type, colors, x_res, y_res), name(name), hard_disk(hard_disk) {}
//	Computer() : Display(), MotherBoard(), hard_disk(500), name("Lenovo"){}
//	~Computer(){}
//	void showComputer() {
//		cout << "| " << setw(7) << name << " | " << setw(3) << hard_disk << "GB | " << setw(9) << type << " |" 
//			<< setw(10) << colors << " |" << setw(6) << x_resolution << " |" << setw(6) << y_resolution << " |"
//			<< setw(11) << processor << " |" << setw(12) << speed << " |" << setw(4) << RAM << "GB |\n";
//		cout << "---------------------------------------------------------------------------------------------\n";
//	}
//};
//void showMenu();
//vector<Display> displays;
//vector<MotherBoard> motherboards;
//vector<Computer> computers;
//void computerHead();
//void displayHead();
//void motherboardHead();
//void addDisplay();
//void addMotherboard();
//void addComputer();
//int main() {
//	setlocale(LC_ALL, "ru");
//	char choice = 'y';
//	showMenu();
//	while (choice != '7') {
//		cout << "Выберите номер команды: ";
//		cin >> choice;
//		switch (choice) {
//		case '1':
//			addDisplay();
//			break;
//		case '2':
//			addMotherboard();
//			break;
//		case '3':
//			addComputer();
//			break;
//		case '4':
//			displayHead();
//			for (int i = 0; i < displays.size(); i++) {
//				displays[i].showDisplay();
//			}
//			break;
//		case '5':
//			motherboardHead();
//			for (int i = 0; i < motherboards.size(); i++) {
//				motherboards[i].showMotherboard();
//			}
//			break;
//		case '6':
//			computerHead();
//			for (int i = 0; i < computers.size(); i++) {
//				computers[i].showComputer();
//			}
//			break;
//		default:
//			cout << "Нет выбранной команды" << endl;
//		}
//	}
//	return 0;
//}
//void showMenu() {
//	cout << "Меню" << endl;
//	cout << "1 - добавить дисплей        2 - добавить мат. плату         3 - добавить компьютер\n";
//	cout << "4 - вывод дисплеев		5 - вывод мат.плат		6 - вывод компьютеров		7 - выход" << endl;
//}
//void displayHead() {
//	cout << "---------------------------------------------------------\n";
//	cout << "|  Дисплей  |   Цвета   |  Разрешение x  | Разрешение y |\n";
//	cout << "---------------------------------------------------------\n";
//}
//void motherboardHead() {
//	cout << "-------------------------------------------\n";
//	cout << "|   Тип ЦП   |    Скорость ЦП    |   RAM   |\n";
//	cout << "-------------------------------------------\n";
//}
//void computerHead() {
//	cout << "---------------------------------------------------------------------------------------------\n";
//	cout << "|  Марка  |  HDD  |  Дисплей  |   Цвета   |   X   |   Y   |   Тип ЦП   | Скорость ЦП |  RAM  |\n";
//	cout << "---------------------------------------------------------------------------------------------\n";
//}
//void addDisplay() {
//	string type;
//	long colors;
//	int x_resolution,y_resolution;
//	cout << "тип монитора: ";
//	cin >> type;
//	cout << "количество цветов: ";
//	cin >> colors;
//	cout << "\nразрешение по оси x: ";
//	cin >> x_resolution;
//	cout << "разрешение по оси y: ";
//	cin >> y_resolution;
//	Display d1(type, colors, x_resolution, y_resolution);
//	displays.push_back(d1);
//	cout << "Дисплей успешно был добавлен.\n";
//}
//void addMotherboard() {
//	int processor, speed, RAM;
//	cout << "тип процессора: ";
//	cin >> processor;
//	cout << "скорость процессора: ";
//	cin >> speed;
//	cout << "объем оперативной памяти: ";
//	cin >> RAM;
//	MotherBoard m1(processor, speed, RAM);
//	motherboards.push_back(m1);
//	cout << "Материнская плата успешно была добавлена.\n";
//}
//void addComputer() {
//	string name, type;
//	int hard_disk, processor, speed, RAM, x_res, y_res;
//	long colors;
//	cout << "марка компьютера:";
//	cin >> name;
//	cout << "объем жесткого диска:";
//	cin >> hard_disk;
//	cout << "тип монитора: ";
//	cin >> type;
//	cout << "количество цветов: ";
//	cin >> colors;
//	cout << "разрешение по оси x: ";
//	cin >> x_res;
//	cout << "разрешение по оси y: ";
//	cin >> y_res;
//	cout << "тип процессора: ";
//	cin >> processor;
//
//	cout << "скорость процессора: ";
//	cin >> speed;
//	cout << "объем оперативной памяти: ";
//	cin >> RAM;
//	Computer c1(name, hard_disk, processor, speed, RAM, type, colors, x_res, y_res);
//	computers.push_back(c1);
//	cout << "Компьютер успешно был добавлен.\n";
//}
///*Используйте преимущества множественного наследования, а именно : разработайте,
//протестируйте и отладьте родительские классы Дисплей(Display) и Материнская плата(MotherBoard), 
//и на их основе создайте класс - потомок Компьютер(Сomputer) :
//	В описании класса - родителя Display есть
//	поля : тип монитора char type[32], количество цветов long colors, разрешение по оси х  int x_resolution, разрешение по оси у  int y_resolution.
//	методы : конструктор с аргументами; размещение информации о классе - родителе на консоли.
//	В описании класса - родителя MotherBoard имеет
//	поля : тип процессора int processor, скорость процессора int speed, объем оперативной памяти       int RAM;
//методы: конструктор с аргументами; размещение информации о классе - родителе на консоли.
//- Класс - потомок Сomputer создать на основе родительских классов с помощью механизма наследования public и отобразить его на экране, добавив:
//поля: марка компьютера(name[64]), объем жесткого диска(hard_disk).
//методы : конструктор с аргументами, метод Show().
//*/