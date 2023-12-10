//#include <iostream>
//#include <vector>
//#include <string>
//#include <iomanip>
//
//using namespace std;
//
//class Student {
//private:
//    string lastName;
//    string group;
//    string dateOfBirth;
//    string phoneNumber;
//    double contractAmount;
//
//public:
//    string getLastName()  {
//        return lastName;
//    }
//    string getGroup()  {
//        return group;
//    }
//    string getDateOfBirth()  {
//        return dateOfBirth;
//    }
//    string getPhoneNumber()  {
//        return phoneNumber;
//    }
//    double getContractAmount()  {
//        return contractAmount;
//    }
//    void setLastName(string& lName) {
//        lastName = lName;
//    }
//    void setGroup(string& groupN) {
//        group = groupN;
//    }
//    void setDateOfBirth(string& dateOfB) {
//        dateOfBirth = dateOfB;
//    }
//    void setPhoneNumber(string& phoneN) {
//        phoneNumber = phoneN;
//    }
//    void setContractAmount(double cAmount) {
//        contractAmount = cAmount;
//    }
//    void addStudent(vector<Student>& students) {
//        string lName, groupp, dateOfB, phoneN;
//        double contractA;
//
//        cout << "Введите фамилию студента: ";
//        cin >> lName;
//        cout << "Введите группу: ";
//        cin >> groupp;
//        cout << "Введите дату рождения (дд/мм/гггг): ";
//        cin >> dateOfB;
//        cout << "Введите номер телефона: ";
//        cin >> phoneN;
//        cout << "Введите сумму контракта: ";
//        cin >> contractA;
//
//        //Student student(lastName, group, dateOfBirth, phoneNumber, contractAmount);
//        Student student;
//        student.setLastName(lName);
//        student.setGroup(groupp);
//        student.setDateOfBirth(dateOfB);
//        student.setPhoneNumber(phoneN);
//        student.setContractAmount(contractA);
//        students.push_back(student);
//        cout << "Студент добавлен." << endl;
//    }
//    void displayStudent() {
//        cout << "| " << setw(11) << lastName << " | " << setw(10) << group
//            << " | " << setw(17) << dateOfBirth << " | " << setw(11) << phoneNumber
//            << " | " << setw(19) << contractAmount << " |\n";
//        cout << "-----------------------------------------------------------------------------------\n";
//    }
//
//};
//
//void showMenu();
//void searchByLastName(vector<Student>&, string&);
//void removeStudent(vector<Student>&, string&);
//void sortStudentsByLastName(vector<Student>&);
//void headerForTable();
//int main() {
//    setlocale(LC_ALL, "");
//    vector<Student> students;
//    char choice = '0';
//    Student sss;
//    string lastNameToRemove;
//    string lastName;
//    showMenu();
//
//   
//    while (choice != '6') {
//        cout << "Выберите номер команды: ";
//        cin >> choice;
//
//        switch (choice) {
//        case '0':
//            showMenu();
//            break;
//        case '1':
//            sss.addStudent(students);
//            break;
//        case '2':
//            headerForTable();
//            for (Student& student : students) {
//                student.displayStudent();
//            }
//            break;
//        case '3':
//            cout << "Введите фамилию студента для поиска: ";
//            cin >> lastName;
//            searchByLastName(students, lastName);
//            break;
//        case '4':
//            cout << "Введите фамилию студента для удаления: ";
//            cin >> lastNameToRemove;
//            removeStudent(students, lastNameToRemove);
//            break;
//        case '5':
//            sortStudentsByLastName(students);
//            break;
//        default:
//            cout << "Неверный выбор. Попробуйте снова." << endl;
//            break;
//        }
//    }
//
//    return 0;
//}
//void showMenu() {
//    cout << "Меню" << endl;
//    cout << "0 - Показать меню\n";
//    cout << "1 - Добавить студента\n";
//    cout << "2 - Просмотреть список студентов\n";
//    cout << "3 - Найти студента\n";
//    cout << "4 - Удалить студента\n";
//    cout << "5 - Сортировка по фамилии\n";
//    cout << "6 - Выход\n";
//}
//
//void headerForTable() {
//    cout << "-----------------------------------------------------------------------------------\n";
//    cout << "|   Фамилия   |   Группа   |   Дата рождения   |   Телефон   |   Сумма контракта   |\n";
//    cout << "-----------------------------------------------------------------------------------\n";
//}
//
//
//
//void searchByLastName(vector<Student>& students, string& lastName) {
//    cout << "Результаты поиска по фамилии " << lastName << ":" << endl;
//    for (Student& student : students) {
//        if (student.getLastName() == lastName) {
//            headerForTable();
//            student.displayStudent();
//            break;
//        }
//    }
//}
//
//void removeStudent(vector<Student>& students, string& lastName) {
//    for (int i = 0; i < students.size(); i++) {
//        if (students[i].getLastName() == lastName) {
//            students.erase(students.begin() + i);
//            cout << "Студент удален." << endl;
//            return;
//        }
//    }
//    cout << "Студент с фамилией " << lastName << " не найден." << endl;
//}
//
//void sortStudentsByLastName(vector<Student>& students) {
//    for (int i = 0; i < students.size() - 1; i++) {
//        for (int j = 0; j < students.size() - i - 1; j++) {
//            if (students[j].getLastName() > students[j + 1].getLastName()) {
//                swap(students[j], students[j + 1]);
//            }
//        }
//    }
//    cout << "Студенты отсортированы по фамилии." << endl;
//}
//
//
///*3.	Создать класс Student с полями : Фамилия студента, группа, дата рождения(дд / мм / гггг), номер телефона, сумма контракта.Предусмотрите возможность : 
//работы с переменным числом студентов; поиска студента по какому - 
//либо признаку(например, по фамилии, дате рождения или номеру телефона); 
//добавления или удаления записей; сортировки по разным полям.Разработайте программу, 
//демонстрирующую работу с этим классом.Программа должна содержать меню, позволяющее осуществить проверку всех методов класса.*/