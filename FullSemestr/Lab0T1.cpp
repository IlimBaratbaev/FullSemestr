//#include <iostream>
//using namespace std;
//int IsSquare(int);
//int Task1();
//int main() {
//    setlocale(LC_ALL, "");
//    Task1();
//    return 0;
//}
//int Task1() {
//    const int N = 10;
//    int numbers[N]{ 23, 9, 12, 24, 55, 81, 4, 9, 35345, 44 };
//    int result;
//    for (int i = 0; i < N; i++) {
//        result = IsSquare(numbers[i]);
//        if (result == 0) {
//            cout << numbers[i] << " не имеет квадратов!" << endl;
//        }
//        else {
//            cout << numbers[i] << " квадрат числа " << result << endl;
//        }
//    }
//    return 0;
//}
//
//int IsSquare(int k) {
//    for (int i = 1; i * i <= k; i++) {
//        if (i * i == k) {
//            return i;
//        }
//    }
//    return 0;
//}