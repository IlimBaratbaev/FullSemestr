//#include <iostream>
//#include <vector>
//#include <iomanip>
//using namespace std;
//class Triangle {
//protected:
//	double cathetus1;
//	double cathetus2;
//public:
//	Triangle(double c1, double c2) : cathetus1(c1), cathetus2(c2){}
//	Triangle() : cathetus1(3), cathetus2(4){}
//	double rightTriangleArea() {
//		return cathetus1 * cathetus2 / 2;
//	}
//	void showTriangleInfo() {
//		cout << "����� 1 = " << cathetus1 << endl;
//		cout << "����� 2 = " << cathetus2 << endl;
//		cout << "������� = " << rightTriangleArea() << endl;
//	}
//};
//class Prism : public Triangle{
//	double height;
//public:
//	Prism(double c1, double c2, double h) : Triangle(c1, c2), height(h){}
//	double prismVolume() {
//		return rightTriangleArea() * height;
//	}
//	void showPrismInfo() {
//		cout << "����� 1 = " << cathetus1 << endl;
//		cout << "����� 2 = " << cathetus2 << endl;
//		cout << "������� ������������ = " << rightTriangleArea() << endl;
//		cout << "������ ������ = " << height << endl;
//		cout << "����� ������ = " << prismVolume() << endl;
//	}
//};
//int main() {
//	setlocale(LC_ALL, "ru");
//	Triangle t1(12, 14);
//	Triangle t2(8, 9);
//	Prism p1(6, 7, 10);
//	cout << "���������� � ������������ 1" << endl;
//	t1.showTriangleInfo();
//	cout << endl;
//	cout << "���������� � ������������ 2" << endl;
//	t2.showTriangleInfo();
//	cout << endl;
//	cout << "���������� � ������ 1" << endl;
//	p1.showPrismInfo();
//	return 0;
//}
