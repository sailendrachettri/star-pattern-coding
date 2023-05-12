#include <iostream>
using namespace std;

int main()
{
    int num = 6;
    for (int i = 1; i <= num; i++)
    {
        for (int space = 1; space <= i; space++)
        {
            cout << " ";
        }
        for (int j = num; j >= i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 2; i <= num; i++)
    {
        for (int space = num; space >= i; space--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}