#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter num: ";
    cin >> n;
    int cnt = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << cnt << " ";
            cnt = cnt + 1;
        }
        cout << endl;
    }
    return 0;
}
