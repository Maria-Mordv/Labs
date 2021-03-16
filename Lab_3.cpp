#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int CorrectNumber(string x) {
    int n = 0;
    while (true)
    {
        cout << x;
        cin >> n;
        if (!cin || n <= 0)
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
    int size = CorrectNumber("Введите целое положительно число ");
    int* array = new int[size];
    int min = 9999;

    srand(time(0));
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 1000 - 500;
    }

    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";

    for (int i = 0; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    cout << "минимальное значение: " << min;
    return 0;
}