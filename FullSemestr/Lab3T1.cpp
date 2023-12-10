//#include <iostream>
//using namespace std;
//
//class Vector3D; 
//
//class Point3D {
//private:
//    double m_x, m_y, m_z;
//public:
//    Point3D(double x = 0.0, double y = 0.0, double z = 0.0) : m_x(x), m_y(y), m_z(z) {}
//    void print() {
//        cout << "(" << m_x << ", " << m_y << ", " << m_z << ")";
//    }
//
//    friend void moveByVector(Point3D& A, const Vector3D& B);
//};
//
//class Vector3D {
//private:
//    double m_x, m_y, m_z;
//public:
//    Vector3D(double x = 0.0, double y = 0.0, double z = 0.0) : m_x(x), m_y(y), m_z(z) {}
//    void print() {
//        cout << "(" << m_x << ", " << m_y << ", " << m_z << ")";
//    }
//
//    friend void moveByVector(Point3D& A, const Vector3D& B);
//};
//
//void moveByVector(Point3D& A, const Vector3D& B) {
//    cout << "Move(" << A.m_x << ", " << A.m_y << ", " << A.m_z << ")\n";
//	cout << "Move(" << B.m_x << ", " << B.m_y << ", " << B.m_z << ")\n";
//	A.m_x += B.m_x;
//	A.m_y += B.m_y;
//	A.m_z += B.m_z;
//    cout << "“очка после сдвига: ";
//    A.print();
//}
//
//int main() {
//    setlocale(LC_ALL, "");
//    char choice = 'y';
//    int m1x, m1y, m1z;
//    cout << "¬ведите первую точку(x y z): ";
//    cin >> m1x >> m1y >> m1z;
//    Point3D point(m1x, m1y, m1z);
//    Vector3D vector;
//    while (choice != 'n' && choice != 'N') {        
//        int m2x, m2y, m2z;
//        cout << "¬ведите вектор(x y z): ";
//        cin >> m2x >> m2y >> m2z;
//        vector = Vector3D(m2x, m2y, m2z);
//        cout << "—двиг по вектору\n";
//        moveByVector(point, vector);
//        cout << endl;
//        cout << "Ѕудете вводить новый вектор?(y, n): ";
//        cin >> choice;       
//    }
//    return 0;
//}
//
///*
//* 1.	“очка в геометрии Ч это позици€ в пространстве. ћы можем определить точку в 3D-пространстве как набор координат x, y и z. Ќапример, Point(0.0, 1.0, 2.0)
//будет точкой в координатном пространстве x = 0.0, y = 1.0 и z = 2.0. ¬ектор в физике Ч это величина, котора€ имеет длину и направление (но не положение).
//ћы можем определить вектор в 3D-пространстве через значени€ x, y и z, представл€ющие направление вектора вдоль осей x, y и z. Ќапример, Vector(1.0, 0.0, 0.0) будет вектором,
//представл€ющим направление только вдоль положительной оси x длиной 1.0. ¬ектор может примен€тс€ к точке дл€ перемещени€ точки на новую позицию. Ёто делаетс€ путем добавлени€ направлени€
//вектора к позиции точки. Ќапример, Point(0.0, 1.0, 2.0) + Vector(0.0, 2.0, 0.0) даст точку (0.0, 3.0, 2.0). “очки и векторы часто используютс€ в компьютерной графике (точка дл€ представлени€
//вершин фигуры, а векторы Ч дл€ перемещени€ фигуры). —оздать класс Vector3D и Point3D дл€ хранени€ и вывода координат x, y и z.
//ј)–еализовать дружественную функцию moveByVector, дл€ перемещени€ точки.
//¬) —делайте класс Point3D дружественным классу Vector3D и реализуйте метод moveByVector() в классе Point3D.
//—) ¬место того, чтобы класс Point3D был дружественным классу Vector3D, сделайте метод Point3D::moveByVector() дружественным классу Vector3D.
//*/