#include <iostream>
#include <cmath>
using namespace std;

double CorrectNumber(string x) {
    double n = 0;
    while (true)
    {
        cout << x;
        cin >> n;
        if (!cin)
        {
            cout << "Ошибка ввода!\n";
            cin.clear();
            while (cin.get() != '\n');
        }
        else break;
    }
    return n;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    double x = CorrectNumber("Введите x: ");
    const int border = 3;
    int degree = 4;
    int divisor = 5;
    double y = 1 - (pow(x, 2) / 6); // left side of equation
    for (int i = 1; i < border; i++) { // right side of equation
        double div_fac = 1;
        for (int i = 1; i <= divisor; i++) {
            div_fac = div_fac * i;
        }
        y = y + (pow(x, degree) / div_fac);
        divisor = divisor + 2;
        degree = degree + 2;
    }
    double chx = y;
    cout << "\n" << "sin(x)/x с границей ряда 3 = " << chx;
    return 0;
}