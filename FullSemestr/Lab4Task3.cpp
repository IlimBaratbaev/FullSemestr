#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double rect_area(double l, double w) const {
        return l * w;
    }
    double rect_area(double side) const {
        return side * side;
    }

    void print_rect_area(double l, double w) const {
        cout << "Площадь прямоугольника: " << rect_area(l, w) << endl;
    }

    void print_rect_area(double side) const {
        cout << "Площадь квадрата: " << rect_area(side) << endl;
    }
};

int main() {
    // Пример использования класса и методов
    Rectangle rectangle(4.0, 6.0);
    rectangle.print_rect_area(4.0, 6.0);

    Rectangle square(5.0, 5.0);
    square.print_rect_area(5.0);

    return 0;
}

/*3.	Создать класс, в котором перегружается метод rect_area().  
Этот метод возвращает площадь прямоугольника.  В этой программе метод rect_area() перегружается двумя способами. 
В первом — методу передаются оба размера фигуры. Эта версия используется для прямоугольника. Однако,
в случае квадрата необходимо задавать только один аргумент, поэтому вызывается вторая версия метода rect_area().
*/
