#include <iostream>
using namespace std;

int main()
{
    int num = 15;

    for (int i = 0; i < num; i++)
    {
        for (int space = num; space > i; space--)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            if (j == 0 or i == num - 1 or j == i - 1)
                cout << " *";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}