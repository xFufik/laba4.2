#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

/*
*Лабораторная работа 4. Задание 2. Индивидуальный вариант 24.
*Вычислить примерное значение функции cos в точке X с точностью N с помощью ряда Тейлора.
*/

int main() {
    setlocale(LC_ALL, "ru");
    double x;
    int n;
    double res = 1;
    double sum = 1;

    cout << "Введите значение X: ";
    cin >> x;

    cout << "Введите значение N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum *= -x * x / (2 * i * (2 * i - 1));
        res += sum;
    }

    cout << "Приближенное значение cos(" << x << ") с точностью N = " << n << ": " << res;
}
