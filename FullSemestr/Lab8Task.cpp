//#include <iostream>
//#include <cmath>
//
//class AntiAircraftGun {
//private:
//    static double probabilityOfHit; // ����������� ��������� ������ ��������
//
//public:
//    // ���������� ����������� ���������
//    static void setProbabilityOfHit(double p) {
//        probabilityOfHit = p;
//    }
//
//    // ����� ��� ���������� ���������� ��������
//    static int shootDownTarget(int n) {
//        for (int i = 0; i < n; ++i) {
//            // ���������� ��������� ����� �� 0 �� 1
//            double randomValue = static_cast<double>(rand()) / RAND_MAX;
//
//            // ���� ��������� ����� ������ ����������� ���������, ���� �����
//            if (randomValue < probabilityOfHit) {
//                return 1; // ���� ����������
//            }
//        }
//        return 0; // ������� �� ���� ����� n ���������
//    }
//
//    // ����� ��� ���������� ���������� �������� ����������� ��������� ����
//    static double estimateHitProbability(int n) {
//        return 1 - std::pow(1 - probabilityOfHit, n);
//    }
//};
//
//// ������������� ����������� ����������
//double AntiAircraftGun::probabilityOfHit = 0.0;
//
//int main() {
//    // ��������� ����������� ���������
//    AntiAircraftGun::setProbabilityOfHit(0.2); // ������: ����������� ��������� 20%
//
//    // �������� �������� � ������� ���������
//    int shots = 10;
//    int result = AntiAircraftGun::shootDownTarget(shots);
//
//    std::cout << "��������� ��������: " << (result == 1 ? "���� ����������" : "������� �� ����") << std::endl;
//
//    // ������� ��������� �������� ����������� ��������� ����
//    std::cout << "��������� ����������� ��������� ����: " << AntiAircraftGun::estimateHitProbability(shots) << std::endl;
//
//    return 0;
//}
//
///*�������� ��������� ��� ������� ������������ �������� ��������� ������. �� ��������� ������ ������������ �������� �� ��������. 
//����������� ��������� ������ �������� ����� p. �������� ������������ n ��� ��� �� ������� ���������. � ��������� ���������� ������� �����
//� ����� p � ������� (n � �������� ������) ��� ���������� ���������� �������� (0 ���� ������� �� ����, 1 ���� ���� ����������). ������������� 
//����� ��� ���������� ���������� �������� ����������� ��������� ���� (� ������� ��� �������� ���������� � �������� 1-(1-p)n)).*/