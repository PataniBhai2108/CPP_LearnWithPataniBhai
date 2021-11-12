/*
 
CREATOR: PATANI BHAI YOUTUBE CHANNEL
CREATION AT:  12th November, 2021.
TOPICS COVERED: 
  1.) Preference Variables and
  2.) Typecasting.
 
*/
 
// *************** CODE START ***************
 
#include <iostream>
using namespace std;

// int c = 100;

int main() {

  //*************** Build in Data Types. ***************
  // int a, b, c;
  // cout << "Enter the value of a: ";
  // cin >> a;
  // cout << "Enter the value of b: ";
  // cin >> b;
  // c = a + b;
  // cout << "The sum c is " << c << endl;
  // :: ==> scope resolution operator which tell the system that we need the global value of the variable
  // cout << "The global value of c is " << ::c; 

  //*************** float, double and long double Literals. ***************
  // f ==> floating point value eg: 34.4f
  // float d = 34.4f; // considers value as a float or else as double as a default
  // l ==> literal point value eg: 34.4l
  // long double e = 34.4l; // considers value as a double or else as a double as default

  // cout << "The value of d is " << d << endl << "The value of e is " << e;
  // cout << "The size of 34.4 is " << sizeof(34.4) << endl;
  // cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
  // cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
  // cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
  // cout << "The size of 34.4L is " << sizeof(34.4L) << endl;

  //*************** Reference Variables. ***************
  // float x = 455;
  // float & y = x;
  // cout << x << endl;
  // cout << y;

  //*************** Typecasting. ***************
  int a = 45;
  float b = 45.46;
  // cout << "The value of a is " << (float)a << endl;
  // cout << "The value of a is " << float(a) << endl; // second syntax to typecast.
  // cout << "The value of b is " << (int)b << endl;
  // cout << "The value of b is " << int(b) << endl; // second syntax to typecast.
  int c = int(b);

  cout << "The expression is " << a + b << endl;
  cout << "The expression is " << a + int(b) << endl;
  cout << "The expression is " << a + (int)b << endl;

  return 0;
}
 
// *************** THE END ***************