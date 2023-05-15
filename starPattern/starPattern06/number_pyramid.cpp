#include <iostream>
using namespace std;

int main()
{
    int rows = 5;
    int num = 65;

    for (int i = 1; i <= rows; i++)
    {
        for (int space = rows; space > i; space--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << char(num) << " ";
        }
        num = num + 1;
        cout << endl;
    }

    return 0;
}