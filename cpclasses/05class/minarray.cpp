#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int min, sum;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter values: ";
        cin >> arr[i];
    }
    cout << "your values:";
    for (int i = 0; i < n; i++)
    {
        if (sum < arr[i])
        {
            min = sum;
        }
        cout << arr[i] << endl;
    }
    cout << "minimal value is : " << min << endl;
}
