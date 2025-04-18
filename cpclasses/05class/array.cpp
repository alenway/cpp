#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cout << "enter value: ";
        cin >> arr[i];
    }
    cout << "values are:" << endl;
    for (int j = 1; j <= n; j++)
    {
        cout << arr[j] << endl;
    }
}
