//#include <iostream>
//using namespace std;
//class Rectangle {
//private:
//    double length;
//    double width;
//public:
//    Rectangle(double l, double w) : length(l), width(w) {}
//    Rectangle(double s) : length(s), width(s) {}
//    Rectangle() {}
//
//    double rect_area() const {
//        return length * width;
//    }
//    double rect_area(double side) const {
//        return side * side;
//    }
//
//    void print_rect_area() const {
//        if (length == width) {
//            cout << "������� = " << length << "\n�������: " << rect_area(length) << endl;
//            return;
//        }
//        cout << "�����: " << length << "\t������ 2: " << width << "\n�������: " << rect_area() << endl;;
//    }  
//};
//void menu();
//int main() {
//    setlocale(LC_ALL, "");
//    char choice = 'e';
//    Rectangle rec;
//    double s1, s2;
//    menu();
//    while (choice != '4') {
//        cout << "������� ��������: ";
//        cin >> choice;
//        switch (choice)
//        {
//        case '1':
//            cout << "������� ������� ��������: ";
//            cin >> s1;
//            rec = Rectangle(s1);
//            rec.print_rect_area();
//            break;
//        case '2':
//            cout << "������� ����� ��������������: ";
//            cin >> s1;
//            cout << "������� ������ ��������������: ";
//            cin >> s2;
//            rec = Rectangle(s1, s2);
//            rec.print_rect_area();
//            break;
//        case '3':
//            menu();
//            break;
//        case '4':
//            break;
//        default:
//            cout << "���� ��������� ��������!\n";
//            break;
//        }
//    }
//    return 0;
//}
//void menu() {
//    cout << "1 - �������\t2 - �������������\t3 - ����\t4 - �����";
//    cout << "\n�������� ��������: ";
//}
//
///*3.	������� �����, � ������� ������������� ����� rect_area().  
//���� ����� ���������� ������� ��������������.  � ���� ��������� ����� rect_area() ������������� ����� ���������. 
//� ������ � ������ ���������� ��� ������� ������. ��� ������ ������������ ��� ��������������. ������,
//� ������ �������� ���������� �������� ������ ���� ��������, ������� ���������� ������ ������ ������ rect_area().
//*/
