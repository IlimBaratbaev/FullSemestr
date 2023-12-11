/*1.	Добавьте класс исключений к программе ARROVER1, чтобы индексы, выходящие за пределы массива, вызывали
генерацию исключения. Блок-ловушка может выводить пользователю сообщение об ошибке. Данные помещаются в массив с 
помощью метода putel () и выводятся на экран с помощью метода getel (). Безопасность массива реализована с помощью вывода сообщений 
об ошибке при попытке использования индекса, не входящего в границы массива.*/
#include <iostream>
#include <process.h>
using namespace std;
const int LIMIT = 10;
class IndexOutOfRangeException : public exception {
public:
	const char* what() const throw() {
		return "Индекс вне допустимого диапазона";
	}
};
class safearray {
private:
	int arr[LIMIT];
public:
	void putEl(int n, int elValue) {
		try {
			if (n < 0 || n >= LIMIT) {
				throw IndexOutOfRangeException();
			}
			arr[n] = elValue;
		}
		catch (const exception& e) {
			cout << e.what() << endl;
		}
		
	}
	int getEL(int n) const {
		try {
			if (n < 0 || n >= LIMIT) {
				throw IndexOutOfRangeException();
			}
			return arr[n];
		}
		catch (const exception& e) {
			cout << e.what() << endl;
		}
		
	}
};
int main() {
	setlocale(LC_ALL, "ru");
	safearray sa1;
	for (int j = 0; j < LIMIT; j++)
		sa1.putEl(j, j * 10);
	cout << "Все элементы массива:";
	for (int j = 0; j < LIMIT; j++)
		cout << " " << sa1.getEL(j);
	cout << "\nВставка за рамки массива" << endl;
	sa1.putEl(101, 777);
	cout << "Выбор за рамки массива" << endl;
	sa1.getEL(LIMIT + 5);
	return 0;
}