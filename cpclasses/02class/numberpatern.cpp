#include <iostream>
using namespace std;

int main()
{
    int count = 10;
    for (int i = 1; i <= count;)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
