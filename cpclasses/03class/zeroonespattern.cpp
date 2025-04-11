#include <iostream>
using namespace std;

int main()
{
    int binary = 2;
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (binary % 2 == 0)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
            binary++;
        }
        cout << endl;
    }
}
