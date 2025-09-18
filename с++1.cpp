#include <iostream>
#include <vector>
#include <stack>
#include <string>

int main() {
    // Вектор строк
    std::vector<std::string> items = {"item1", "item2", "item3"};

    // Стек целых чисел
    std::stack<int> dataStack;

    // Добавление элементов в стек
    dataStack.push(10);
    dataStack.push(20);
    dataStack.push(30);

    // Получение верхнего элемента
    int topElement = dataStack.top();
    dataStack.pop(); // Удаление верхнего элемента

    // Вывод результатов
    std::cout << "Top element: " << topElement << std::endl;
    std::cout << "Stack size after pop: " << dataStack.size() << std::endl;

    return 0;
}
