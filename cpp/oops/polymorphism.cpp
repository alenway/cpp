#include<iostream>
using namespace std;

class print{
  public:
    void show(int a){
      cout << "Integer" << a << endl;
    }

    void show(string a){
      cout << "String" << a << endl;
    }
};
int main(){
int a = 10;
string s = "nitin";

print p1;
p1.show(a);
p1.show(s);

return 0;
}
