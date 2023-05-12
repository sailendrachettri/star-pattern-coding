
#include <iostream>
using namespace std;

int main()
{
    int num = 9;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if (i == (num / 2) or j == (num / 2 + 1))
                cout << "+ ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}