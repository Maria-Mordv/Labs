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
            cout << "������ �����!\n";
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
	V = CorrectNumber("������� ��������: ");
	S = CorrectNumber("������� ����������: ");
	t = CorrectNumber("������� �����: ");
	V1 = S / t;
	V2 = S / ( (2 * S) / (V - t) );
	cout << "\n������� �������� �� � � �: " << V1 ;
	cout << "\n������� �������� �� � � �: " << V2 ;
	return 0;
}
