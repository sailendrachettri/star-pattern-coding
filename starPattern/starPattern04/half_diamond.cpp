#include <iostream>
using namespace std;

int main()
{
    int num = 6;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < num; i++)
    {
        for (int j = num; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}