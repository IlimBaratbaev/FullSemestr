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
//		cout << "Катет 1 = " << cathetus1 << endl;
//		cout << "Катет 2 = " << cathetus2 << endl;
//		cout << "Площадь = " << rightTriangleArea() << endl;
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
//		cout << "Катет 1 = " << cathetus1 << endl;
//		cout << "Катет 2 = " << cathetus2 << endl;
//		cout << "Площадь треугольника = " << rightTriangleArea() << endl;
//		cout << "Высота призмы = " << height << endl;
//		cout << "Объем призмы = " << prismVolume() << endl;
//	}
//};
//int main() {
//	setlocale(LC_ALL, "ru");
//	Triangle t1(12, 14);
//	Triangle t2(8, 9);
//	Prism p1(6, 7, 10);
//	cout << "Информация о треугольнике 1" << endl;
//	t1.showTriangleInfo();
//	cout << endl;
//	cout << "Информация о треугольнике 2" << endl;
//	t2.showTriangleInfo();
//	cout << endl;
//	cout << "Информация о призме 1" << endl;
//	p1.showPrismInfo();
//	return 0;
//}
