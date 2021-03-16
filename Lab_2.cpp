#include <iostream>
#include <cmath>
using namespace std;

int CorrectNumber(string x) {
    int n = 0;
    while (true)
    {
        cout << x;
        cin >> n;
        if (!cin || n < 0)
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
    int n = CorrectNumber("Введите целое положительное число ");
    int x = 1;
    
    for (int i = 1; i <= n; i++) {
        x = i * x;
    }
    cout << x;
    return 0;
}