/*
 
CREATOR: PATANI BHAI YOUTUBE CHANNEL
CREATION AT:  11th November, 2021.
TOPICS COVERED: 
  1.) Variable Scope and
  2.) Data Types.
 
*/
 
// *************** CODE START ***************
 
#include <iostream>
using namespace std;

int x; // only integers or whole numbers(+ve/-ve)
float a = 2.45; // numbers with decimal places but consumes less space memory(+ve/-ve)
double b = 2.87340185010597197501975071545; // numbers with decimal places but can consume large space memory(+ve/-ve)
char c = 'a'; // only single alphabet.
//only true or false condition.
// bool d = true;
bool d = false;

sqr(int y){
  return y*y;
}

int main() {
  cout << "Enter value of x: ";
  cin >> x;
  // cout << "Square of " << x << " = " << sqr(y) << "\n";
  cout << "Square of " << x << " = " << sqr(x) << "\n";
  cout << a << "\n";
  cout << b << "\n";
  cout << c << "\n";
  cout << d << "\n";

  return 0;
}
 
// *************** THE END ***************