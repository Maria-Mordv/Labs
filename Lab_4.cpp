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

long double fact(int N) {
    if(N < 0)
        return 0;
    if(N == 0)
        return 1;
    else
        return N * fact(N - 1);
}

int main()
{
    setlocale(LC_ALL, "Russian");
    double x = CorrectNumber("Введите x: ");
    const int n = 3;
    double res = 0, i = 0, sum = 0;
    long double factorial = 0;
    do {
        if (i == 0) {
            factorial = fact(2 * i + 1);
            res = pow(1, i) * pow(x, 2 * i) / factorial;
            sum += res;
            i++;
        }
        else {
            factorial = fact(2 * i + 1);
            res = pow(-1, i) * pow(x, 2 * i) / factorial;
            sum += res;
            i++;
        }
    } while (i < n);
    cout << "\n" << "sin(x)/x с границей ряда 3 = " << sum;
    return 0;
}