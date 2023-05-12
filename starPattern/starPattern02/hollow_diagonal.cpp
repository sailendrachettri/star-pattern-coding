#include <iostream>
using namespace std;

int main()
{
    int n = 6;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 or i == n or j == 0 or j == n or (j == i or j == n - i))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}