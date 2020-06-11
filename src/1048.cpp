#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double sal;
    double reajuste;

    cout << fixed;
    cout << setprecision(2);

    cin >> sal;

    if (sal <= 400.0)
    {
        reajuste = 0.15;
    }
    else if (sal <= 800.0)
    {
        reajuste = 0.12;
    }
    else if (sal <= 1200.0)
    {
        reajuste = 0.10;
    }
    else if (sal <= 2000.0)
    {
        reajuste = 0.07;
    }
    else
    {
        reajuste = 0.04;
    }

    cout << "Novo salario: " << (sal * (1 + reajuste)) << endl
         << "Reajuste ganho: " << (sal * reajuste) << endl
         << setprecision(0)
         << "Em percentual: " << (reajuste * 100) << " %" << endl;
}