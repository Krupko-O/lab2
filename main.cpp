#include <iostream>
#include <cmath> // підключення бібліотеки математичних функцій

using namespace std;

int main()
{
    // Завдання 1. Integer32
    cout << "Завдання 1. Integer32" << endl;
    
    int sec;
    cout << "Введіть кількість секунд (1-59): ";
    cin >> sec;

    // Оскільки 1-59 секунд знаходяться в першій хвилині (і відповідно в першій чверті години):
    int quarter = (sec / 900) + 1; // Номер чверті години (15 хв = 900 сек)
    int sec_in_quarter = sec % 900; // Секунди з початку чверті

    cout << "Номер чверті години: " << quarter << endl;
    cout << "Пройшло з початку цієї чверті (сек): " << sec_in_quarter << endl << endl;

    // Завдання 2. Boolean28
    cout << "Завдання 2. Boolean28" << endl;
    
    double x_bool, y_bool;
    cout << "Введіть координату x: ";
    cin >> x_bool;
    cout << "Введіть координату y: ";
    cin >> y_bool;

    // Точка в 1-й чверті: x > 0 і y > 0
    // Точка в 3-й чверті: x < 0 і y < 0
    bool is_in_1_or_3 = (x_bool > 0 && y_bool > 0) || (x_bool < 0 && y_bool < 0);

    cout << "Точка в 1-й або 3-й чверті: " << boolalpha << is_in_1_or_3 << endl << endl;

    // Завдання 3. Math.1
    cout << "Завдання 3. Math.1" << endl;

    const double pi = 3.141592; // Визначення дійсної константи
    double x, num, denom, sin2, y; // Декларація дійсних змінних

    cout << "Введіть дійсний аргумент x = ";
    cin >> x;

    // Підрахунок
    num = pow(log(x * x + cos(37 * pi / 180)), 2); // Чисельник
    sin2 = pow(sin(x * x), 2);                     // Проміжна змінна (sin^2(x^2))
    denom = sin2 + sqrt(fabs(1 - 2 * cos(x) - sin2)); // Знаменник
    y = num / denom;

    // Виведення результату
    cout << "Значення функції y = " << y << endl;

    return 0;
}
