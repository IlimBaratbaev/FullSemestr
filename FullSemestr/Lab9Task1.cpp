///*1.	Добавьте класс исключений к программе ARROVER1, чтобы индексы, выходящие за пределы массива, вызывали
//генерацию исключения. Блок-ловушка может выводить пользователю сообщение об ошибке. Данные помещаются в массив с 
//помощью метода putel () и выводятся на экран с помощью метода getel (). Безопасность массива реализована с помощью вывода сообщений 
//об ошибке при попытке использования индекса, не входящего в границы массива.*/
//#include <iostream>
//#include <process.h>
//using namespace std;
//const int LIMIT = 100;
//class safearray {
//private:
//	int arr[LIMIT];
//public:
//	void putEl(int n, int elValue) {
//		if (n < 0 || n >= LIMIT) {
//			cout << "ОШИБКА";
//			exit(1);
//		}
//		arr[n] = elValue;
//	}
//	int getEL(int n) const {
//		if (n < 0 || n >= LIMIT) {
//			cout << "Ошибка индекс";
//			exit(1);
//		}
//		return arr[n];
//	}
//};
//int main() {
//	safearray sa1;
//	for (int j = 0; j < LIMIT; j++)
//		sa1.putEl(j, j * 10);
//	for (int j = 0; j < LIMIT; j++) {
//		int temp = sa1.getEL(j);
//		cout << "Элемент " << j << " равен " << temp << endl;
//	}
//	return 0;
//}