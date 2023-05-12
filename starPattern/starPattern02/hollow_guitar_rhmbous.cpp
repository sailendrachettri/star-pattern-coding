#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    for (int i = 0; i <= num; i++)
    {
        for (int space = 0; space < i; space++)
        {
            cout << " ";
        }
        for (int j = 0; j <= num; j++)
        {
            if (i == 0 or i == num or j == 0 or j == num)
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}