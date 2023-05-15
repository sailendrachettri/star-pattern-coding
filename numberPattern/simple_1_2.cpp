#include <iostream>
using namespace std;

int main()
{
    int num = 5;
    int p = 1;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << p++ << " ";
        }
        cout << endl;
    }

    return 0;
}