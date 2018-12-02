#include <iostream>
#include <array>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    std::array<double, 3> s;

    cin >> s[0] >> s[1] >> s[2];

    sort(s.begin(), s.end(), greater<int>());

    // se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
    if (s[0] >= s[1] + s[2])
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else
    {
        // se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
        if (s[0] * s[0] == s[1] * s[1] + s[2] * s[2])
        {
            cout << "TRIANGULO RETANGULO" << endl;
        }
        // se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
        if (s[0] * s[0] > s[1] * s[1] + s[2] * s[2])
        {
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        // se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
        if (s[0] * s[0] < s[1] * s[1] + s[2] * s[2])
        {
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        // se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
        if (s[0] == s[1] && s[1] == s[2])
        {
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        // se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES
        else if (s[0] == s[1] || s[1] == s[2] || s[0] == s[2])
        {
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }
}