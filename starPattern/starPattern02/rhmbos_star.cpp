#include <iostream>
using namespace std;

int main()
{
    int num = 5;

    for (int i = 0; i < num; i++)
    {
        for (int space = num; space > i; space--)
        {
            cout << " ";
        }

        for (int j = 0; j < num; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}