
#include <iostream>
using namespace std;

int main()
{
    int num = 7;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if (i == 1 or i == num or j == 1 or j == num)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}