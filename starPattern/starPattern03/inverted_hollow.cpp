#include <iostream>
using namespace std;

int main()
{
    int num = 15;

    for (int i = 1; i <= num; i++)
    {
        for (int space = 0; space < i; space++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (num * 2 - (2 * i - 1)); j++)
        {
            if (i == 1 or j == 1 or j == (num * 2 - (2 * i - 1)))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}