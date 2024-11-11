#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
int main()
{
    double r;
    int a;
    short b;
    float c;
    SetConsoleOutputCP(1251);
    cout << "Введіть a-->";
    cin >> a;
    cout << "a = " << a << "\n";
    cout << "Введіть b-->";
    cin >> b;
    cout << "b = " << b << "\n";
    cout << "Введіть c-->";
    cin >> c;
    cout << "c = " << c << "\n";
    if (c == 0) {
        cout << "Помилка: c не може бути нулем." << endl;
    }
    else if (a * a == b) {
        cout << "Помилка: a * a не може дорівнювати b." << endl;
    }
    else {
        r = (atan(12 / c) + 73) / (a * a - b);
        cout << "Результат:" << r << endl;
    }
    return 0;
}