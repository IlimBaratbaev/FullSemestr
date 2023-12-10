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
//    cout << "����� ����� ������: ";
//    A.print();
//}
//
//int main() {
//    setlocale(LC_ALL, "");
//    char choice = 'y';
//    int m1x, m1y, m1z;
//    cout << "������� ������ �����(x y z): ";
//    cin >> m1x >> m1y >> m1z;
//    Point3D point(m1x, m1y, m1z);
//    Vector3D vector;
//    while (choice != 'n' && choice != 'N') {        
//        int m2x, m2y, m2z;
//        cout << "������� ������(x y z): ";
//        cin >> m2x >> m2y >> m2z;
//        vector = Vector3D(m2x, m2y, m2z);
//        cout << "����� �� �������\n";
//        moveByVector(point, vector);
//        cout << endl;
//        cout << "������ ������� ����� ������?(y, n): ";
//        cin >> choice;       
//    }
//    return 0;
//}
//
///*
//* 1.	����� � ��������� � ��� ������� � ������������. �� ����� ���������� ����� � 3D-������������ ��� ����� ��������� x, y � z. ��������, Point(0.0, 1.0, 2.0)
//����� ������ � ������������ ������������ x = 0.0, y = 1.0 � z = 2.0. ������ � ������ � ��� ��������, ������� ����� ����� � ����������� (�� �� ���������).
//�� ����� ���������� ������ � 3D-������������ ����� �������� x, y � z, �������������� ����������� ������� ����� ���� x, y � z. ��������, Vector(1.0, 0.0, 0.0) ����� ��������,
//�������������� ����������� ������ ����� ������������� ��� x ������ 1.0. ������ ����� ���������� � ����� ��� ����������� ����� �� ����� �������. ��� �������� ����� ���������� �����������
//������� � ������� �����. ��������, Point(0.0, 1.0, 2.0) + Vector(0.0, 2.0, 0.0) ���� ����� (0.0, 3.0, 2.0). ����� � ������� ����� ������������ � ������������ ������� (����� ��� �������������
//������ ������, � ������� � ��� ����������� ������). ������� ����� Vector3D � Point3D ��� �������� � ������ ��������� x, y � z.
//�)����������� ������������� ������� moveByVector, ��� ����������� �����.
//�) �������� ����� Point3D ������������� ������ Vector3D � ���������� ����� moveByVector() � ������ Point3D.
//�) ������ ����, ����� ����� Point3D ��� ������������� ������ Vector3D, �������� ����� Point3D::moveByVector() ������������� ������ Vector3D.
//*/