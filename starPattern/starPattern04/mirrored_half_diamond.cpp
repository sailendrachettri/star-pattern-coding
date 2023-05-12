#include <iostream>
using namespace std;

int main()
{
    int num = 7;
    for (int i = 0; i < num; i++)
    {
        for (int space = num; space > i; space--)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < num; i++)
    {
        for (int space = 0; space < i; space++)
        {
            cout << " ";
        }
        for (int j = num; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}