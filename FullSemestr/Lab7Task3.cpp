//#include <iostream>
//#include <stack>
//#include <string>
//#include <cstdlib> 
//#include <ctime>
//using namespace std;
//template <typename T>
//class Stack {
//private:
//    stack<T> storage;
//
//public:
//    void push(const T& value) {
//        storage.push(value);
//    }
//
//    T pop() {
//        if (!storage.empty()) {
//            T topElement = storage.top();
//            storage.pop();
//            return topElement;
//        }
//        else {
//            cerr << "���� ����. ���������� ��������� ����������." << endl;
//            return T();
//        }
//    }
//
//    bool isEmpty() const {
//        return storage.empty();
//    }
//    void print() const {
//        stack<T> tempStorage = storage; 
//        while (!tempStorage.empty()) {
//            cout << tempStorage.top() << " ";
//            tempStorage.pop();
//        }
//        cout << endl;
//    }
//};
//
//int main() {
//    setlocale(LC_ALL, "ru");
//    Stack<int> leftDirection;
//    Stack<int> rightDirection;
//    Stack<int> unsortedDirections;
//    srand(static_cast<unsigned>(time(0)));
//    for (int i = 0; i < 10; ++i) {
//        unsortedDirections.push(rand() % 2); 
//    }
//    unsortedDirections.print();
//    cout << "������������� ����:" << endl;
//    int i;
//    while (!unsortedDirections.isEmpty()) {
//        i = unsortedDirections.pop();
//        if (i == 0) {
//            leftDirection.push(i);
//        } 
//        if (i == 1) {
//            rightDirection.push(i);
//        }
//    }
//    leftDirection.print();
//    rightDirection.print();
//    return 0;
//}
//
///*������� ������ ������ ����ʻ. ����������� ���������, ������������ ���� ����� ��� �������������
//�-��������� �������������� ���� �� �������� ������. ��������� ������ ��������� �� ��� ����������� ������, ���������
//�� ������� ���� ����� (�� ������ ����������� ����������� ������ �� ������� ������ ����). ������������������ ������ �������� �� ������ ��������� �����.*/