//#include <iostream>
//#include <vector>
//#include <iomanip>
//using namespace std;
//void showMenu();
//void head();
//class Airlines {
//	
//private:
//	int flightNumber;
//	string pointOfDeparture;
//	string flightDestination;
//	string arrivalTime;
//	string departureTime;
//	int receptionNumber;
//public:
//    int getFlightNumber() {
//        return flightNumber;
//    }
//    string getPointOfDeparture() {
//        return pointOfDeparture;
//    }
//    string getFlightDestination() {
//        return flightDestination;
//    }
//    string getArrivalTime() {
//        return arrivalTime;
//    }
//    string getDepartureTime() {
//        return departureTime;
//    }
//    int getReceptionNumber() {
//        return receptionNumber;
//    }
//    void setFlightNumber(int fNumber) {
//        flightNumber = fNumber;
//    }
//    void setPointOfDeparture(string pOfDeparture) {
//        pointOfDeparture = pOfDeparture;
//    }
//    void setFlightDestination(string fDestination) {
//        flightDestination = fDestination;
//    }
//    void setArrivalTime(string aTime) {
//        arrivalTime = aTime;
//    }
//    void setDepartureTime(string dTime) {
//        departureTime = dTime;
//    }
//    void setReceptionNumber(int rNumber) {
//        receptionNumber = rNumber;
//    }
//    Airlines inputAirlineInfo() {
//        Airlines airline;
//        int flightNumber;
//        string pointOfDeparture;
//        string flightDestination;
//        string arrivalTime;
//        string departureTime;
//        int receptionNumber;
//        cout << "Номер рейса: ";
//        cin >> flightNumber;
//        cout << "Пункт отправления:";
//        cin >> pointOfDeparture;
//        cout << "Пункт назначения:";
//        cin >> flightDestination;
//        cout << "Время прибытия:";
//        cin >> arrivalTime;
//        cout << "Время отправления:";
//        cin >> departureTime;
//        cout << "Номер стойки:";
//        cin >> receptionNumber;
//        airline.setFlightNumber(flightNumber);
//        airline.setPointOfDeparture(pointOfDeparture);
//        airline.setFlightDestination(flightDestination);
//        airline.setArrivalTime(arrivalTime);
//        airline.setDepartureTime(departureTime);
//        airline.setReceptionNumber(receptionNumber);
//        return airline;
//    }
//    void Display() {
//        cout << "| " << setw(11) << flightNumber << " | " << setw(17) << pointOfDeparture
//            << " | " << setw(16) << flightDestination << " | " << setw(14) << arrivalTime
//            << " | " << setw(17) << departureTime << " | " << setw(12) << receptionNumber << " |\n";
//        cout << "----------------------------------------------------------------------------------------------------------\n";
//    }
//};
//vector<Airlines> airlinesList;
//void sortAirlines(vector<Airlines>&);
//void searchByPointOfDeparture(vector<Airlines>, string);
//void searchByDestination(vector<Airlines>, string);
//int main() {
//	setlocale(LC_ALL, "");
//    char choice = '0';
//    Airlines airline;
//    string forSwitch1;
//    string forSwitch2;
//    showMenu();
//    while (choice != 'e') {
//        cout << "Выберите номер команды: ";
//        cin >> choice;
//        switch (choice) {
//        case '0':
//            showMenu();
//            break;
//        case '1':
//            airlinesList.push_back(airline.inputAirlineInfo());
//            break;
//        case '2':
//            sortAirlines(airlinesList);
//            break;
//        case '3':
//            head();
//            for (Airlines airline : airlinesList) {
//                airline.Display();
//            }
//            break;
//        case '4':
//            cout << "Пункт назначения: ";
//            cin >> forSwitch1;
//            searchByDestination(airlinesList, forSwitch1);
//            break;
//
//        case '5':
//            cout << "Пункт отправления: ";
//            cin >> forSwitch2;
//            searchByPointOfDeparture(airlinesList, forSwitch2);
//            break;
//        }
//    }
//	system("pause");
//	return 0;
//}
//
//void head() {
//    cout << "----------------------------------------------------------------------------------------------------------\n";
//    cout << "| Номер рейса | Пункт отправления | Пункт назначения | Время прибытия | Время отправления | Номер стойки |\n";
//    cout << "----------------------------------------------------------------------------------------------------------\n";
//}
//
//void sortAirlines(vector<Airlines>& airlinesList) {
//    int N = airlinesList.size();
//    cout << "Сортировка в алфавитном порядке по пункту назначения" << endl;
//    for (int i = 0; i < N - 1; i++) {
//        for (int j = i; j < N; j++) {
//            if (airlinesList[i].getFlightDestination() > airlinesList[j].getFlightDestination()) {
//                swap(airlinesList[i], airlinesList[j]);
//            }
//        }
//    }
//}
//void showMenu() {
//    cout << "Меню" << endl;
//    cout << "0 - меню\n1 - Добавление рейса\n2 - сортировка по пунктам назначения\n3 - вывод рейсов\n4 - поиск рейса по пункту отправления\n5 - поиск рейса по пункту назначения" << endl;
//}
//void searchByPointOfDeparture(vector<Airlines> airlinesList, string pointOfDeparture) {
//    int flag = false;
//    for (Airlines airline : airlinesList) {
//        if (airline.getPointOfDeparture() == pointOfDeparture) {
//            head();
//            airline.Display();
//            flag = true;
//        }
//    }
//    if (!flag) {
//        cout << "Нету рейсов с пункта отправления " << pointOfDeparture << "!\n";
//    }
//}
//
//void searchByDestination(vector<Airlines> airlinesList, string destination) {
//    int flag = false;
//    for (Airlines airline : airlinesList) {
//        if (airline.getFlightDestination() == destination) {
//            head();
//            airline.Display();
//            flag = true;
//        }
//    }
//    if (!flag) {
//        cout << "Нету рейсов с пункта назначения " << destination << "!\n";
//    }
//}