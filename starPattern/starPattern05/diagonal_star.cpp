
#include <iostream>
using namespace std;

int main()
{
    int num = 7;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if (i == j or j == (num - i + 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}