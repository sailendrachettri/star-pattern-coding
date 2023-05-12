#include <iostream>
using namespace std;

int main()
{
    int num = 7;
    for (int i = 1; i <= num; i++)
    {
        for (int j = i; j <= num; j++)
        {
            cout << "* ";
        }
        for (int j = i; j <= (2 * i - 2); j++)
        {
            cout << " " << i << " ";
        }
        for (int j = i; j <= num; j++)
        {
            cout << " *";
        }
        cout << endl;
    }

    // for (int i = num; i >= 1; i--)
    // {
    //     for (int j = i; j <= num; j++)
    //     {
    //         cout << "* ";
    //     }
    //     for (int j = i; j <= (2 * i - 2); j++)
    //     {
    //         cout << " " << i << " ";
    //     }
    //     for (int j = i; j <= num; j++)
    //     {
    //         cout << " *";
    //     }
    //     cout << endl;
    // }

    return 0;
}