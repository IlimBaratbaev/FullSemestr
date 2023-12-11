//#include <iostream>
//#include <cmath>
//using namespace std;
//class AntiAircraftGun {
//private:
//    static double probabilityOfHit; 
//public:
//    static void setProbabilityOfHit(double p) {
//        probabilityOfHit = p;
//    }
//
//    static int shootDownTarget(int n) {
//        for (int i = 0; i < n; ++i) {
//            double randomValue = static_cast<double>(rand()) / RAND_MAX;
//
//            if (randomValue < probabilityOfHit) {
//                return 1;
//            }
//        }
//        return 0;
//    }
//
//    static double estimateHitProbability(int n) {
//        return 1 - pow(1 - probabilityOfHit, n);
//    }
//};
//
//double AntiAircraftGun::probabilityOfHit = 0.0;
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    AntiAircraftGun::setProbabilityOfHit(0.2);
//
//    int shots = 10;
//    int result = AntiAircraftGun::shootDownTarget(shots);
//
//    cout << "��������� ��������: " << (result == 1 ? "���� ����������" : "������� �� ����") << endl;
//
//    cout << "��������� ����������� ��������� ����: " << AntiAircraftGun::estimateHitProbability(shots) << endl;
//
//    return 0;
//}
//
///*�������� ��������� ��� ������� ������������ �������� ��������� ������. �� ��������� ������ ������������ �������� �� ��������. 
//����������� ��������� ������ �������� ����� p. �������� ������������ n ��� ��� �� ������� ���������. � ��������� ���������� ������� �����
//� ����� p � ������� (n � �������� ������) ��� ���������� ���������� �������� (0 ���� ������� �� ����, 1 ���� ���� ����������). ������������� 
//����� ��� ���������� ���������� �������� ����������� ��������� ���� (� ������� ��� �������� ���������� � �������� 1-(1-p)n)).*/