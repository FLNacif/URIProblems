#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n, m;
    vector<int> numeroDeTrocas(100000, 0);

    cin >> n >> m;
    while (n != 0 && m != 0)
    {
        for (int i = 0; i < m;i++)
        {
            cin >> numeroDeTrocas[i];
        }
        cin >> n >> m;
    }

    return 0;
}