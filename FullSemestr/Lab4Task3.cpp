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
        cout << "������� ��������������: " << rect_area(l, w) << endl;
    }

    void print_rect_area(double side) const {
        cout << "������� ��������: " << rect_area(side) << endl;
    }
};

int main() {
    // ������ ������������� ������ � �������
    Rectangle rectangle(4.0, 6.0);
    rectangle.print_rect_area(4.0, 6.0);

    Rectangle square(5.0, 5.0);
    square.print_rect_area(5.0);

    return 0;
}

/*3.	������� �����, � ������� ������������� ����� rect_area().  
���� ����� ���������� ������� ��������������.  � ���� ��������� ����� rect_area() ������������� ����� ���������. 
� ������ � ������ ���������� ��� ������� ������. ��� ������ ������������ ��� ��������������. ������,
� ������ �������� ���������� �������� ������ ���� ��������, ������� ���������� ������ ������ ������ rect_area().
*/
