#include <iostream>
using namespace std;

int main()
{
    int rows = 5;

    for (int i = 0; i < rows; i++)
    {
        int n = 1;

        for (int j = 0; j <= i; j++)
        {
            cout << n;
            n = n * (i - j) / (i + 1);
        }
        cout << endl;
    }
    return 0;
}