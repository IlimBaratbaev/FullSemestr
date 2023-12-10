//#include <iostream>
//#include <stack>
//#include <string>
//
//// ������ ������ ����
//template <typename T>
//class Stack {
//private:
//    std::stack<T> storage;
//
//public:
//    // ��������� ������� � ����
//    void push(const T& value) {
//        storage.push(value);
//    }
//
//    // ������� ������� �� �����
//    T pop() {
//        if (!storage.empty()) {
//            T topElement = storage.top();
//            storage.pop();
//            return topElement;
//        }
//        else {
//            // � �������� ���������� ����� ����� ����� ������� ����������
//            std::cerr << "���� ����. ���������� ��������� ����������." << std::endl;
//            return T(); // ���������� �������� �� ��������� (��� ��������)
//        }
//    }
//
//    // ���������, ���� �� ����
//    bool isEmpty() const {
//        return storage.empty();
//    }
//};
//
//// ������ ������������� ���������� ������ ��� ������������� �-��������� �������������� ����
//int main() {
//    // ������� ��� ����� ��� ������� ����������� �� �������� ������
//    Stack<std::string> leftDirection;
//    Stack<std::string> rightDirection;
//
//    // ��������� ������ ������ ����� � ������ �����������
//    leftDirection.push("����� ���� A");
//    leftDirection.push("����� ���� A");
//    leftDirection.push("����� ���� B");
//
//    rightDirection.push("����� ���� B");
//    rightDirection.push("����� ���� A");
//    rightDirection.push("����� ���� B");
//
//    // ������������ ������ �������������� ����
//    std::cout << "������������� ����:" << std::endl;
//
//    while (!leftDirection.isEmpty() || !rightDirection.isEmpty()) {
//        if (!leftDirection.isEmpty()) {
//            std::cout << "����� �����������: " << leftDirection.pop() << std::endl;
//        }
//
//        if (!rightDirection.isEmpty()) {
//            std::cout << "������ �����������: " << rightDirection.pop() << std::endl;
//        }
//    }
//
//    return 0;
//}
//
///*������� ������ ������ ����ʻ. ����������� ���������, ������������ ���� ����� ��� �������������
//�-��������� �������������� ���� �� �������� ������. ��������� ������ ��������� �� ��� ����������� ������, ���������
//�� ������� ���� ����� (�� ������ ����������� ����������� ������ �� ������� ������ ����). ������������������ ������ �������� �� ������ ��������� �����.*/