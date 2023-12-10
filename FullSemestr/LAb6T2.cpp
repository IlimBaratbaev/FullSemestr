//#include <iostream>
//using namespace std;
//class Figure {
//protected: 
//	double side;
//public:
//	Figure(double s1) : side(s1){}
//	virtual double calculateArea() = 0;
//	virtual double calculatePerimeter() = 0;
//	virtual void show() = 0;
//};
//class Rectangle : public Figure {
//	double side2;
//public:
//	Rectangle(double s1, double s2) : Figure(s1), side2(s2){}
//	double calculateArea() {
//		return side * side2;
//	}
//	double calculatePerimeter() {
//		return 2 * (side + side2);
//	}
//	void show() {
//		cout << "Вывод информации о прямоугольнике\n";
//		cout << "Сторона 1 = " << side << endl;
//		cout << "Сторона 2 = " << side2 << endl;
//		cout << "Периметр = " << calculatePerimeter() << endl;
//		cout << "Площадь = " << calculateArea() << endl;
//	}
//};
//class Circle : public Figure {
//	const double PI = 3.14159265359;
//public:
//	Circle(double radius) : Figure(radius) {}
//	double calculateArea() {
//		return side * side * PI;
//	}
//	double calculatePerimeter() {
//		return 2 * PI * side;
//	}
//	void show() {
//		cout << "Вывод информации о круге\n";
//		cout << "Радиус = " << side << endl;
//		cout << "Периметр = " << calculatePerimeter() << endl;
//		cout << "Площадь = " << calculateArea() << endl;
//	}
//};
//class Trapezium : public Figure {
//	double side2, height;
//public:
//	Trapezium(double s1, double s2, double h) : Figure(s1), side2(s2), height(h) {}
//	double calculateArea() {
//		return (side + side2) * height / 2;
//	}
//	double calculatePerimeter() {
//		double localBiggest;
//		double localSmallest;
//		double hipotenuse;
//		if (side > side2) {
//			localBiggest = side;
//			localSmallest = side2;
//		} 
//		else {
//			localBiggest = side2;
//			localSmallest = side;
//		}
//		hipotenuse = sqrt(pow((localBiggest - localSmallest / 2), 2) + pow(height, 2));
//		return side + side2 + hipotenuse * 2;
//	}
//	void show() {
//		cout << "Вывод информации о трапеции\n";
//		cout << "Сторона 1 = " << side << endl;
//		cout << "Сторона 2 = " << side2 << endl;
//		cout << "Высота = " << height << endl;
//		cout << "Периметр = " << calculatePerimeter() << endl;
//		cout << "Площадь = " << calculateArea() << endl;
//	}
//};
//int main() {
//	setlocale(LC_ALL, "ru");
//	Rectangle rectangle(8, 10);
//	Circle circle(10);
//	Trapezium trapezium(6, 8, 12);
//	cout << endl;
//	rectangle.show();
//	cout << endl;
//	circle.show();
//	cout << endl;
//	trapezium.show();
//	return 0;
//}
///*Создать абстрактный базовый класс Figure с виртуальными методами вычисления площади и периметра.Создать производные класса : Rectangle(прямоугольник),
//Circle(круг), Trapezium(трапеция) со своими функциями площади и периметра.Самостоятельно определить, какие поля необходимы, какие из них можно задать в базовом классе,
//а какие в производных.Площадь трапеции : S = (a + b) x h / 2.
//*/