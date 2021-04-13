#include <iostream>
#include <cmath>

using namespace std;

class Class {
public:
    int x;
    int anwser;

    void factorial() {
        for (int i = 1; i < x + 1; i++) {
            anwser *= i;
        }
    }

    void result() {
        cout << "\n" << anwser;
    }

};

int CorrectNumber(string x) {

    setlocale(LC_ALL, "Russian");

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
    Class n;
    n.x = CorrectNumber("Введите целое неотрицательное число: ");
    n.anwser = 1;
    n.factorial();
    n.result();

    return 0;
}
