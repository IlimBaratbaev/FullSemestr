//#include <iostream>
//#include <iomanip>
//using namespace std;
//class Nomenclature {
//private:
//    string name;
//    double wholesalePrice;
//    double retailMarkup;
//    int amount;
//public:
//    Nomenclature(string productName, double wPrice, double rMarkup, int productAmount): name(productName), wholesalePrice(wPrice), retailMarkup(rMarkup), amount(productAmount){}
//    Nomenclature(){}
//    ~Nomenclature(){}
//    string getName() {
//        return name;
//    }
//    double getWholesalePrice() {
//        return wholesalePrice;
//    }
//    double getRetailMarkup() {
//        return retailMarkup;
//    }
//    int getAmount() {
//        return amount;
//    }
//    double profit() {
//        return (retailMarkup - wholesalePrice) * amount;
//    }
//    int printNomenclature() {
//        cout << "| " << setw(9) << name << " | " << setw(12) << wholesalePrice
//            << " | " << setw(7) << retailMarkup << " | " << setw(12) << amount
//            << " | " << setw(13) << profit() << "|\n";
//        cout << "-------------------------------------------------------------------\n";
//        return 0;
//    }
//    Nomenclature inputNomenclature() {
//        string name;
//        double wholesalePrice;
//        double retailMarkup;
//        int amount;
//        cout << "�����: ";
//        cin >> name;
//        cout << "������� ����: ";
//        cin >> wholesalePrice;
//        cout << "��������� ����: ";
//        cin >> retailMarkup;
//        cout << "����������: ";
//        cin >> amount;
//        return Nomenclature(name, wholesalePrice, retailMarkup, amount);
//    }
//};
//void head();
//int main()
//{
//    setlocale(LC_ALL, "");
//    int N;
//    double fullProfit = 0;
//    cout << "������� �� ������: ";
//    cin >> N;
//    Nomenclature* nomenclatures = new Nomenclature[N];
//    for (int i = 0; i < N; i++) {
//        nomenclatures[i] = nomenclatures[i].inputNomenclature();
//    }
//    head();
//    for (int i = 0; i < N; i++) {
//        nomenclatures[i].printNomenclature();
//        fullProfit += nomenclatures[i].profit();
//    }
//    cout << "\n������ ����� �� ���� �������: " << fullProfit;
//    //cout << "������ �����: " << nomenclature.profit();
//    //delete &nomenclature;
//}
//
//void head() {
//    cout << "-------------------------------------------------------------------\n";
//    cout << "|   �����   |   ���.����   | ������� |  ����������  | ������ ����� |\n";
//    cout << "-------------------------------------------------------------------\n";
//}
///*
//* 1. �������� ����� Nomenclature, ����������� ������ �� ������ ��������. ��������� ���������� ������ �����: �������� ������, ������� ����,��������� ������� � ���������� ������� �� ������.
//�������� � ����� �������� ������� �������� ���������� ������� ������ ��� ������� ����� ������ 
//� ������ ���� ������ � ������ �� �����. ��� ������������� � �������� �������� ������ ����������� ������������ � �����������.
//*/