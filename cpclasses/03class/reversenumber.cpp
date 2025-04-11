#include <iostream>
using namespace std;

int main()
{
    int value = 3456766;
    int reverse = 0;
    int temp = value;
    while (temp > 0)
    {
        int holder;
        holder = temp % 10;
        reverse = reverse * 10 + holder;
        temp = temp / 10;
    }
    cout << reverse << endl;
    cout << value << endl;
    return 0;
}
