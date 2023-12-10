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
//        cout << "Товар: ";
//        cin >> name;
//        cout << "Оптовая цена: ";
//        cin >> wholesalePrice;
//        cout << "Розничгая цена: ";
//        cin >> retailMarkup;
//        cout << "Количество: ";
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
//    cout << "Товаров на складе: ";
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
//    cout << "\nЧистый доход со всех товаров: " << fullProfit;
//    //cout << "Чистый доход: " << nomenclature.profit();
//    //delete &nomenclature;
//}
//
//void head() {
//    cout << "-------------------------------------------------------------------\n";
//    cout << "|   Товар   |   Опт.Цена   | Наценка |  Количество  | Чистый доход |\n";
//    cout << "-------------------------------------------------------------------\n";
//}
///*
//* 1. Создайте класс Nomenclature, описывающий товары на складе магазина. Закрытыми элементами класса будут: название товара, оптовая цена,розничная наценка и количество товаров на складе.
//Включите в класс открытые функции подсчета возможного чистого дохода при продаже этого товара 
//и вывода всех данных о товаре на экран. Для инициализации и удаления объектов класса используйте конструкторы и деструкторы.
//*/