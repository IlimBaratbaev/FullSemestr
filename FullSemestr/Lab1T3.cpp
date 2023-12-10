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
//        cout << "������� ������� ��������: ";
//        cin >> lName;
//        cout << "������� ������: ";
//        cin >> groupp;
//        cout << "������� ���� �������� (��/��/����): ";
//        cin >> dateOfB;
//        cout << "������� ����� ��������: ";
//        cin >> phoneN;
//        cout << "������� ����� ���������: ";
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
//        cout << "������� ��������." << endl;
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
//        cout << "�������� ����� �������: ";
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
//            cout << "������� ������� �������� ��� ������: ";
//            cin >> lastName;
//            searchByLastName(students, lastName);
//            break;
//        case '4':
//            cout << "������� ������� �������� ��� ��������: ";
//            cin >> lastNameToRemove;
//            removeStudent(students, lastNameToRemove);
//            break;
//        case '5':
//            sortStudentsByLastName(students);
//            break;
//        default:
//            cout << "�������� �����. ���������� �����." << endl;
//            break;
//        }
//    }
//
//    return 0;
//}
//void showMenu() {
//    cout << "����" << endl;
//    cout << "0 - �������� ����\n";
//    cout << "1 - �������� ��������\n";
//    cout << "2 - ����������� ������ ���������\n";
//    cout << "3 - ����� ��������\n";
//    cout << "4 - ������� ��������\n";
//    cout << "5 - ���������� �� �������\n";
//    cout << "6 - �����\n";
//}
//
//void headerForTable() {
//    cout << "-----------------------------------------------------------------------------------\n";
//    cout << "|   �������   |   ������   |   ���� ��������   |   �������   |   ����� ���������   |\n";
//    cout << "-----------------------------------------------------------------------------------\n";
//}
//
//
//
//void searchByLastName(vector<Student>& students, string& lastName) {
//    cout << "���������� ������ �� ������� " << lastName << ":" << endl;
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
//            cout << "������� ������." << endl;
//            return;
//        }
//    }
//    cout << "������� � �������� " << lastName << " �� ������." << endl;
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
//    cout << "�������� ������������� �� �������." << endl;
//}
//
//
///*3.	������� ����� Student � ������ : ������� ��������, ������, ���� ��������(�� / �� / ����), ����� ��������, ����� ���������.������������� ����������� : 
//������ � ���������� ������ ���������; ������ �������� �� ������ - 
//���� ��������(��������, �� �������, ���� �������� ��� ������ ��������); 
//���������� ��� �������� �������; ���������� �� ������ �����.������������ ���������, 
//��������������� ������ � ���� �������.��������� ������ ��������� ����, ����������� ����������� �������� ���� ������� ������.*/