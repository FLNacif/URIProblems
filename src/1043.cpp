#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double A, B, C;

    cin >> A >> B >> C;

    double val;
    double max;
    double l1;
    double l2;

    if (A > B){
        if (A > C){
            max = A;
            l1 = B;
            l2 = C;
        }
        else{
            max = C;
            l1 = A;
            l2 = B;
        }
    }
    else{
        if (B > C){
            max = B;
            l1 = A;
            l2 = C;
        }
        else{
            max = C;
            l1 = A;
            l2 = B;
        }
    }

    if (max<(l1+l2))
    {
        val = (A + B + C);
        printf("Perimetro = %.1f\n",val);
    }
    else
    {
        val = (((A + B) * C) / 2.0);
        printf("Area = %.1f\n",val);
    }
    return 0;
}