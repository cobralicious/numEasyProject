#include <iostream>

// Функция для ввода числа
int readNumber() {
    int x;
    std::cout << "Input number: ";
    std::cin >> x;
    return x;
}

// Функция для вывода результата
void writeAnswer(int result) {
    std::cout << "The result is: " << result << std::endl;
}

// Главная функция, которая соединяет всё вместе
int main() {
    int num1 = readNumber();  // Запрашиваем первое число
    int num2 = readNumber();  // Запрашиваем второе число
    int sum = num1 + num2;    // Складываем числа
    writeAnswer(sum);         // Выводим результат
    return 0;
}
