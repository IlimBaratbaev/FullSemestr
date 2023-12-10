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
//		cout << "�������� ����� �������: ";
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
//			cout << "��� ��������� �������" << endl;
//		}
//	}
//	return 0;
//}
//void showMenu() {
//	cout << "����" << endl;
//	cout << "1 - �������� �������        2 - �������� ���. �����         3 - �������� ���������\n";
//	cout << "4 - ����� ��������		5 - ����� ���.����		6 - ����� �����������		7 - �����" << endl;
//}
//void displayHead() {
//	cout << "---------------------------------------------------------\n";
//	cout << "|  �������  |   �����   |  ���������� x  | ���������� y |\n";
//	cout << "---------------------------------------------------------\n";
//}
//void motherboardHead() {
//	cout << "-------------------------------------------\n";
//	cout << "|   ��� ��   |    �������� ��    |   RAM   |\n";
//	cout << "-------------------------------------------\n";
//}
//void computerHead() {
//	cout << "---------------------------------------------------------------------------------------------\n";
//	cout << "|  �����  |  HDD  |  �������  |   �����   |   X   |   Y   |   ��� ��   | �������� �� |  RAM  |\n";
//	cout << "---------------------------------------------------------------------------------------------\n";
//}
//void addDisplay() {
//	string type;
//	long colors;
//	int x_resolution,y_resolution;
//	cout << "��� ��������: ";
//	cin >> type;
//	cout << "���������� ������: ";
//	cin >> colors;
//	cout << "\n���������� �� ��� x: ";
//	cin >> x_resolution;
//	cout << "���������� �� ��� y: ";
//	cin >> y_resolution;
//	Display d1(type, colors, x_resolution, y_resolution);
//	displays.push_back(d1);
//	cout << "������� ������� ��� ��������.\n";
//}
//void addMotherboard() {
//	int processor, speed, RAM;
//	cout << "��� ����������: ";
//	cin >> processor;
//	cout << "�������� ����������: ";
//	cin >> speed;
//	cout << "����� ����������� ������: ";
//	cin >> RAM;
//	MotherBoard m1(processor, speed, RAM);
//	motherboards.push_back(m1);
//	cout << "����������� ����� ������� ���� ���������.\n";
//}
//void addComputer() {
//	string name, type;
//	int hard_disk, processor, speed, RAM, x_res, y_res;
//	long colors;
//	cout << "����� ����������:";
//	cin >> name;
//	cout << "����� �������� �����:";
//	cin >> hard_disk;
//	cout << "��� ��������: ";
//	cin >> type;
//	cout << "���������� ������: ";
//	cin >> colors;
//	cout << "���������� �� ��� x: ";
//	cin >> x_res;
//	cout << "���������� �� ��� y: ";
//	cin >> y_res;
//	cout << "��� ����������: ";
//	cin >> processor;
//
//	cout << "�������� ����������: ";
//	cin >> speed;
//	cout << "����� ����������� ������: ";
//	cin >> RAM;
//	Computer c1(name, hard_disk, processor, speed, RAM, type, colors, x_res, y_res);
//	computers.push_back(c1);
//	cout << "��������� ������� ��� ��������.\n";
//}
///*����������� ������������ �������������� ������������, � ������ : ������������,
//������������� � �������� ������������ ������ �������(Display) � ����������� �����(MotherBoard), 
//� �� �� ������ �������� ����� - ������� ���������(�omputer) :
//	� �������� ������ - �������� Display ����
//	���� : ��� �������� char type[32], ���������� ������ long colors, ���������� �� ��� �  int x_resolution, ���������� �� ��� �  int y_resolution.
//	������ : ����������� � �����������; ���������� ���������� � ������ - �������� �� �������.
//	� �������� ������ - �������� MotherBoard �����
//	���� : ��� ���������� int processor, �������� ���������� int speed, ����� ����������� ������       int RAM;
//������: ����������� � �����������; ���������� ���������� � ������ - �������� �� �������.
//- ����� - ������� �omputer ������� �� ������ ������������ ������� � ������� ��������� ������������ public � ���������� ��� �� ������, �������:
//����: ����� ����������(name[64]), ����� �������� �����(hard_disk).
//������ : ����������� � �����������, ����� Show().
//*/