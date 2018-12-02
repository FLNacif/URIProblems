#include <iostream>

using namespace std;

int main()
{

    int h1, m1, h2, m2;

    cin >> h1 >> m1 >> h2 >> m2;

    int i1 = h1 * 60 + m1;
    int i2 = h2 * 60 + m2;
    if (i1 >= i2)
    {
        i2 += 24 * 60;
    }

    int hf = (i2 - i1) / 60;
    int mf = ((i2 - i1) % 60);

    cout << "O JOGO DUROU " << hf << " HORA(S) E " << mf << " MINUTO(S)" << endl;
}