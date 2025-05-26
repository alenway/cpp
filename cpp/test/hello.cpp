// pre processor directives ( # )
// custom defined shoud have anomanclature
#include<iostream>
// header file <iostream>
// token parsing customization
using namespace std;

// use can also call only essential methods from namespace 
using std::cout;
using std::endl;
//custom namespace 
// namespace myspace{
//   void display(){
//     // comment
//   }
// }
int main(){
  // myspace::display();
  cout << "hello world" << endl;
  // nit picking to only use essential tools in the namespace
  std::cout << "hello from namespace" << std::endl;
  //exit code 
  return 0;
}
