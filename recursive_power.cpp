#include <iostream>
using namespace std;

double power(double x, int n) {
    // Базовый случай
    if (n == 0) return 1.0;
    // Рекурсивный случай
    return x * power(x, n - 1);
}

int main() {
    double x = 2.0;
    int n = 5;
    cout << x << "^" << n << " = " << power(x, n) << endl;

    // Отладочная проверка (gdb)
    // Компиляция: g++ -g power.cpp -o power
    // gdb ./power
    // break power.cpp:6
    // run
    return 0;
}
