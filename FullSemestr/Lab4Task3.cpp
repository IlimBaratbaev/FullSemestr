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
//            cout << "Сторона = " << length << "\nПлощадь: " << rect_area(length) << endl;
//            return;
//        }
//        cout << "Длина: " << length << "\tШирина 2: " << width << "\nПлощадь: " << rect_area() << endl;;
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
//        cout << "Введите операцию: ";
//        cin >> choice;
//        switch (choice)
//        {
//        case '1':
//            cout << "Введите сторону квадрата: ";
//            cin >> s1;
//            rec = Rectangle(s1);
//            rec.print_rect_area();
//            break;
//        case '2':
//            cout << "Введите длину прямоугольника: ";
//            cin >> s1;
//            cout << "Введите ширину прямоугольника: ";
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
//            cout << "Нету выбранной операции!\n";
//            break;
//        }
//    }
//    return 0;
//}
//void menu() {
//    cout << "1 - квадрат\t2 - прямоугольник\t3 - меню\t4 - выход";
//    cout << "\nВыберите операцию: ";
//}
//
///*3.	Создать класс, в котором перегружается метод rect_area().  
//Этот метод возвращает площадь прямоугольника.  В этой программе метод rect_area() перегружается двумя способами. 
//В первом — методу передаются оба размера фигуры. Эта версия используется для прямоугольника. Однако,
//в случае квадрата необходимо задавать только один аргумент, поэтому вызывается вторая версия метода rect_area().
//*/
