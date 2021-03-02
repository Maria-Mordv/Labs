#include <iostream>
#include <cmath>

using namespace std;

double CorrectNumber(string x) {
    int n;
    while (true)
    {
        cout << x;
        cin >> n;
        if (!cin||n<0)
        {
            cout << "Ошибка ввода!\n";
            cin.clear();
            while (cin.get() != '\n');
        }
        else {
            break;
        }
    }
    return n;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double V, S, t, V1, V2;
	V = CorrectNumber("Введите скорость: ");
	S = CorrectNumber("Введите расстояние: ");
	t = CorrectNumber("Введите время: ");
	V1 = S / t;
	V2 = S / ( (2 * S) / (V - t) );
	cout << "\nСредняя скорость из А в Б: " << V1 ;
	cout << "\nСредняя скорость из Б в А: " << V2 ;
	return 0;
}
