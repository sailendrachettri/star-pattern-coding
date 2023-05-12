#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            if ((i == 1 and j == 1) or (i == num and j == num) or (i == 1 and j == i))
                cout << "";
            else if (i == 1 or i == num or j == 1 or j == num - 1)
                cout << " *";
            else
                cout << "   ";
        }
        cout << endl;
    }

    return 0;
}