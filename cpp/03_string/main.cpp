#include<iostream>
using namespace std;

int main(){
    string s;

    cout << "Enter a String: ";

    getline(cin, s);
    cout << "You have entered: " << s << endl;


    s.push_back('Y');
    cout << "After using push back fundtion " << s << endl;

    s.pop_back();
    cout << "After using pop back fundtion " << s << endl;
    return 0;
}
