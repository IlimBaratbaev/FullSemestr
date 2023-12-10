//#include <iostream>
//using namespace std;
//class Currency {
//protected:
//	double moneyAmount;
//	double currencyExchangeRate;
//public:
//	Currency(double money, double exchangeRate): moneyAmount(money), currencyExchangeRate(exchangeRate){}
//	virtual double transferToSom() = 0;
//	virtual void print() = 0;
//};
//class Dollar : public Currency {
//	double exchangeRateToEuros;
//public:
//	Dollar(double money, double exchangeRate, double exchangeToEuros) : Currency(money, exchangeRate), exchangeRateToEuros(exchangeToEuros / exchangeRate) {}
//	double transferToSom() {
//		return moneyAmount * currencyExchangeRate;
//	}
//	double transferToEuros() {
//		return moneyAmount * exchangeRateToEuros;
//	}
//	void print() {
//		cout << "Перевод " << moneyAmount << " $ к сому = " << transferToSom() << endl;
//	}
//	void printToEuros() {
//		cout << "Перевод " << moneyAmount << " $ к евро = " << transferToEuros() << endl;
//	}
//};
//class Euro : public Currency {
//	double exchangeRateToDollars;
//public:
//	Euro(double money, double exchangeRate, double exchangeToDollars) : Currency(money, exchangeRate), exchangeRateToDollars(exchangeToDollars / exchangeRate){}
//	double transferToSom() {
//		return moneyAmount * currencyExchangeRate;
//	}
//	double transferToDollars() {
//		return moneyAmount * exchangeRateToDollars;
//	}
//	void print() {
//		cout << "Перевод " << moneyAmount << " евро к сому = " << transferToSom() << endl;
//	}
//	void printToDollars() {
//		cout << "Перевод " << moneyAmount << " евро к $ = " << transferToDollars() << endl;
//	}
//};
//class Soms : public Currency {
//	double exchangeRateToEuros;
//public:
//	Soms(double money, double exchangeToDollars, double exchangeToEuros) : Currency(money, exchangeToDollars), exchangeRateToEuros(exchangeToEuros){}
//	double transferToSom() {
//		return moneyAmount;
//	}
//	double transferToDollars() {
//		return moneyAmount / currencyExchangeRate;
//	}
//	double transferToEuros() {
//		return moneyAmount / exchangeRateToEuros;
//	}
//	void print() {
//		cout << "Перевод " << moneyAmount << " сом к сомам = " << moneyAmount << endl;
//	}
//	void printToDollars() {
//		cout << "Перевод " << moneyAmount << " сом к $ = " << transferToDollars() << endl;
//	}
//	void printToEuros() {
//		cout << "Перевод " << moneyAmount << " сом к евро = " << transferToEuros() << endl;
//	}
//};
//void showValuteMenu();
//void showTransferMenuSom();
//void showTransferMenuDollars();
//void showTransferMenuEuros();
//int main() {
//	setlocale(LC_ALL, "");
//	double dollarToSom, euroToSom;
//	cout << "Введите курс доллара к сому: ";
//	cin >> dollarToSom;
//	cout << "\nВведите курс евро к сому: ";
//	cin >> euroToSom;
//	cout << endl;
//	char choiceValute = '9';
//	char choiceTransfer = '9';
//	Soms somOb(0, 0, 0);    
//	Dollar dollarOb(0, 0, 0); 
//	Euro euroOb(0, 0, 0);
//	while (choiceValute != 'e'){
//		showValuteMenu();
//		cout << "Какая валюта у вас есть: ";
//		cin >> choiceValute;
//		switch (choiceValute) {
//		case '1':
//			double soms;
//			cout << "Сколько сомов у вас есть: ";
//			cin >> soms;
//			somOb = Soms(soms, dollarToSom, euroToSom);
//			showTransferMenuSom();
//			tryAgain:
//			cout << "Выберите действие: ";
//			cin >> choiceTransfer;
//			if (choiceTransfer == '1') {
//				somOb.printToDollars();
//				cout << endl;
//			} 
//			else if (choiceTransfer == '2') {
//				somOb.printToEuros();
//				cout << endl;
//			} 
//			else {
//				cout << "Извините, вы выбрали неправильную команду!" << endl;
//				goto tryAgain;
//			}
//			break;
//		case '2':
//			double dollars;
//			cout << "Сколько долларов у вас есть: ";
//			cin >> dollars;
//
//			dollarOb = Dollar(dollars, dollarToSom, euroToSom);
//			showTransferMenuDollars();
//		tryAgain1:
//			cout << "Выберите действие: ";
//			cin >> choiceTransfer;
//			if (choiceTransfer == '1') {
//				dollarOb.print();
//				cout << endl;
//			}
//			else if (choiceTransfer == '2') {
//				dollarOb.printToEuros();
//				cout << endl;
//			}
//			else {
//				cout << "Извините, вы выбрали неправильную команду!" << endl;
//				goto tryAgain1;
//			}
//			break;
//		case '3':
//			double euros;
//			cout << "Сколько евро у вас есть: ";
//			cin >> euros;
//
//			euroOb = Euro(euros, euroToSom, dollarToSom);
//			showTransferMenuEuros();
//		tryAgain2:
//			cout << "Выберите действие: ";
//			cin >> choiceTransfer;
//			if (choiceTransfer == '1') {
//				euroOb.print();
//				cout << endl;
//			}
//			else if (choiceTransfer == '2') {
//				euroOb.printToDollars();
//				cout << endl;
//			}
//			else {
//				cout << "Извините, вы выбрали неправильную команду!" << endl;
//				goto tryAgain2;
//			}
//			break;
//		default:
//			cout << "Выбрана неправильная команда!\n";
//		}
//	}
//	return 0;
//}
//void showValuteMenu() {
//	cout << "Выберите валюту";
//	cout << "\n1 - сомы\t2 - доллары\t3 - евро\n";
//}
//void showTransferMenuSom() {
//	cout << "1 - перевод в доллары\t2 - перевод в евро\n";
//}
//void showTransferMenuDollars() {
//	cout << "1 - перевод в сомы\t2 - перевод в евро\n";
//}
//void showTransferMenuEuros() {
//	cout << "1 - перевод в сомы\t2 - перевод в доллары\n";
//}
//
