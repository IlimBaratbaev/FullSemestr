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
//		cout << "������� " << moneyAmount << " $ � ���� = " << transferToSom() << endl;
//	}
//	void printToEuros() {
//		cout << "������� " << moneyAmount << " $ � ���� = " << transferToEuros() << endl;
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
//		cout << "������� " << moneyAmount << " ���� � ���� = " << transferToSom() << endl;
//	}
//	void printToDollars() {
//		cout << "������� " << moneyAmount << " ���� � $ = " << transferToDollars() << endl;
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
//		cout << "������� " << moneyAmount << " ��� � ����� = " << moneyAmount << endl;
//	}
//	void printToDollars() {
//		cout << "������� " << moneyAmount << " ��� � $ = " << transferToDollars() << endl;
//	}
//	void printToEuros() {
//		cout << "������� " << moneyAmount << " ��� � ���� = " << transferToEuros() << endl;
//	}
//};
//void showValuteMenu();
//void showTransferMenuSom();
//void showTransferMenuDollars();
//void showTransferMenuEuros();
//int main() {
//	setlocale(LC_ALL, "");
//	double dollarToSom, euroToSom;
//	cout << "������� ���� ������� � ����: ";
//	cin >> dollarToSom;
//	cout << "\n������� ���� ���� � ����: ";
//	cin >> euroToSom;
//	cout << endl;
//	char choiceValute = '9';
//	char choiceTransfer = '9';
//	Soms somOb(0, 0, 0);    
//	Dollar dollarOb(0, 0, 0); 
//	Euro euroOb(0, 0, 0);
//	while (choiceValute != 'e'){
//		showValuteMenu();
//		cout << "����� ������ � ��� ����: ";
//		cin >> choiceValute;
//		switch (choiceValute) {
//		case '1':
//			double soms;
//			cout << "������� ����� � ��� ����: ";
//			cin >> soms;
//			somOb = Soms(soms, dollarToSom, euroToSom);
//			showTransferMenuSom();
//			tryAgain:
//			cout << "�������� ��������: ";
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
//				cout << "��������, �� ������� ������������ �������!" << endl;
//				goto tryAgain;
//			}
//			break;
//		case '2':
//			double dollars;
//			cout << "������� �������� � ��� ����: ";
//			cin >> dollars;
//
//			dollarOb = Dollar(dollars, dollarToSom, euroToSom);
//			showTransferMenuDollars();
//		tryAgain1:
//			cout << "�������� ��������: ";
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
//				cout << "��������, �� ������� ������������ �������!" << endl;
//				goto tryAgain1;
//			}
//			break;
//		case '3':
//			double euros;
//			cout << "������� ���� � ��� ����: ";
//			cin >> euros;
//
//			euroOb = Euro(euros, euroToSom, dollarToSom);
//			showTransferMenuEuros();
//		tryAgain2:
//			cout << "�������� ��������: ";
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
//				cout << "��������, �� ������� ������������ �������!" << endl;
//				goto tryAgain2;
//			}
//			break;
//		default:
//			cout << "������� ������������ �������!\n";
//		}
//	}
//	return 0;
//}
//void showValuteMenu() {
//	cout << "�������� ������";
//	cout << "\n1 - ����\t2 - �������\t3 - ����\n";
//}
//void showTransferMenuSom() {
//	cout << "1 - ������� � �������\t2 - ������� � ����\n";
//}
//void showTransferMenuDollars() {
//	cout << "1 - ������� � ����\t2 - ������� � ����\n";
//}
//void showTransferMenuEuros() {
//	cout << "1 - ������� � ����\t2 - ������� � �������\n";
//}
//
