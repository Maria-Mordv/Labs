﻿#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    const char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f',
        'g', 'h', 'i','j', 'k', 'l', 'm', 'n', 'o', 'p', 'q',
        'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

    const int code[26] = { 0, 1, 2, 3, 4, 5, 6,
        7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
        18, 19, 20, 21, 22, 23, 24, 25 };

    int consnt_number = 3;
    char string[20];
    string[19] = '\0';
    int encoded_string[20];
    encoded_string[19] = '\0';
    cout << "Введите строку:";
    gets_s(string);

    const int string_length = strlen(string);
    const int alphabet_length = 26;

    for (int i = 0; i < string_length; i++)
    {
        for (int j = 0; j < alphabet_length; j++)
        {
            if (string[i] == alphabet[j])
            {
                encoded_string[i] = code[j] + consnt_number;
            }
        }
    }

    for (int i = 0; i < string_length; i++) {
        while (encoded_string[i] > 25) {
            encoded_string[i] -= 26;
        }
        cout << encoded_string[i] << " ";
    }

        for (int i = 0; i < string_length; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                if (encoded_string[i] == j)
                {
                    string[i] = alphabet[j];
                }
            }
        }
    cout << "\n";
    cout << string;
    return 0;

}