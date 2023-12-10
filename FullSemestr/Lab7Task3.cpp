//#include <iostream>
//#include <stack>
//#include <string>
//
//// Шаблон класса Стек
//template <typename T>
//class Stack {
//private:
//    std::stack<T> storage;
//
//public:
//    // Поместить элемент в стек
//    void push(const T& value) {
//        storage.push(value);
//    }
//
//    // Извлечь элемент из стека
//    T pop() {
//        if (!storage.empty()) {
//            T topElement = storage.top();
//            storage.pop();
//            return topElement;
//        }
//        else {
//            // В реальном приложении может иметь смысл бросить исключение
//            std::cerr << "Стек пуст. Невозможно выполнить извлечение." << std::endl;
//            return T(); // Возвращаем значение по умолчанию (для простоты)
//        }
//    }
//
//    // Проверить, пуст ли стек
//    bool isEmpty() const {
//        return storage.empty();
//    }
//};
//
//// Пример использования шаблонного класса для моделирования Т-образного сортировочного узла
//int main() {
//    // Создаем два стека для каждого направления на железной дороге
//    Stack<std::string> leftDirection;
//    Stack<std::string> rightDirection;
//
//    // Добавляем вагоны разных типов в каждое направление
//    leftDirection.push("Вагон типа A");
//    leftDirection.push("Вагон типа A");
//    leftDirection.push("Вагон типа B");
//
//    rightDirection.push("Вагон типа B");
//    rightDirection.push("Вагон типа A");
//    rightDirection.push("Вагон типа B");
//
//    // Демонстрация работы сортировочного узла
//    std::cout << "Сортировочный узел:" << std::endl;
//
//    while (!leftDirection.isEmpty() || !rightDirection.isEmpty()) {
//        if (!leftDirection.isEmpty()) {
//            std::cout << "Левое направление: " << leftDirection.pop() << std::endl;
//        }
//
//        if (!rightDirection.isEmpty()) {
//            std::cout << "Правое направление: " << rightDirection.pop() << std::endl;
//        }
//    }
//
//    return 0;
//}
//
///*Создать шаблон класса «СТЕК». Разработать программу, использующую этот класс для моделирования
//Т-образного сортировочного узла на железной дороге. Программа должна разделять на два направления состав, состоящий
//из вагонов двух типов (на каждое направление формируется состав из вагонов одного типа). Продемонстрировать работу шаблонов на данных различных типов.*/