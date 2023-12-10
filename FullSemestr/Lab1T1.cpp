//#include <iostream>
//#include <vector>
//using namespace std;
//class Money {
//private:
//    int second;
//    int first;
//public:
//    Money(){}
//  
//    void Init(int nominal, int quantity) {
//        if (IsValidNominal(nominal) && quantity >= 0) {
//            this->first = nominal;
//            this->second = quantity;
//        }
//        else {
//            cout << "Введено неверное значение для номинала или кол-ву купюр!" << endl;
//        }
//    }
//    bool IsValidNominal(int nominal) {
//        int validNominals[] = { 1, 3, 5, 10, 20, 50, 100, 500, 1000, 5000 };
//        for (int i = 0; i < 10; i++) {
//            if (nominal == validNominals[i]) {
//                return true;
//            }
//        }
//        return false;
//    }
//    void Read() {
//        int nominal, quantity;
//        cout << "Введите номинал купюры: ";
//        cin >> nominal;
//        cout << "Введите количество купюр: ";
//        cin >> quantity;
//        Init(nominal, quantity);
//    }
//    void Display() {
//        cout << "Номинал: " << this->first << ", Количество: " << this->second << "\tОбщее количество: " <<  summa() << endl;
//    }
//    int summa() {
//        return first * second;
//    }
//
//};
//int main()
//{
//    setlocale(LC_ALL, "");
//    int N;
//    int totalSum = 0;    
//    cout << "Сколько денег будете вводить?";
//    cin >> N;
//    Money* money = new Money[N];
//    for (int i = 0; i < N; i++) {
//        cout << "\nВвод стопки купюр " << i + 1 << '\n';
//        money[i].Read();
//    }
//    cout << '\n';
//    for (int i = 0; i < N; i++) {
//        totalSum += money[i].summa();
//        money[i].Display();        
//    }
//    cout << "\nОбщая сумма: " << totalSum;
//    return 0;
//}
