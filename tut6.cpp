/*
 
CREATOR: PATANI BHAI YOUTUBE CHANNEL
CREATION AT:  , .
TOPICS COVERED: 
  1.) Header files and
  2.) Operators.
 
*/

// *************** CODE START ***************

// There are 2 types of header files:
//   1.) System header file: It comes with the compiler.
#include <iostream>

//   2.) User header file: Written by programmer.
// #include"this.h" // --> this will give an error if this.h is not present in current directory.
/* 

Refer this link for list of various header files.
  https://en.cppreference.com/w/cpp/header

*/

using namespace std;

int main() {
  int a=4, b=5;
  
  // Arithematic operator
  cout << "These are Arithematic operators: " << endl;
  cout << "The value of a + b is " << a+b << endl; // Add
  cout << "The value of a - b is " << a-b << endl; // subtract
  cout << "The value of a * b is " << a*b << endl; // multiply
  cout << "The value of a / b is " << a/b << endl; // a divide by b
  cout << "The value of a % b is " << a%b << endl; // remainder when a is divide by b

  cout << "The value of a is " << a << endl;
  cout << "The value of a++ is " << a++ << endl; // increment by 1 print=4 mem=5
  cout << "The value of a-- is " << a-- << endl; // decriment by 1 print=5 mem=4
  cout << "The value of ++a is " << ++a << endl; // decriment by 1 print=5 mem=5
  cout << "The value of --a is " << --a << endl; // decriment by 2 print=4 mem=4
  // cout << "The value of --(--a) is " << --(--a) << endl; // decriment by 2 print=3 mem=3
  
  //Assignment operator
  cout << "These are Assignment operators: " << endl;
  int a=3, b=9;
  char d = 'd';
  cout << "int a = " << a << endl;
  cout << "int b = " << b << endl;
  cout << "char d = 'd'" << endl;

  // Comparison operators
  cout << "These are Comparison operators: " << endl;
  cout << "The value of a == b is " << (a == b) << endl; // check if a is equal b.
  cout << "The value of a > b is " << (a > b) << endl; // check if a is great than b.
  cout << "The value of a < b is " << (a < b) << endl; // check if a is less than b.
  cout << "The value of a >= b is " << (a >= b) << endl; // check if a is great than equal to b.
  cout << "The value of a <= b is " << (a <= b) << endl; // check if a is less than equal to b.
  cout << "The value of a != b is " << (a != b) << endl; // check if a is not equal b.
  
  // true ==> 1
  // false ==> 0

  // Logical operators
  cout << "These are Logical operators: " << endl;
  cout << "The value of (a == b) && (a < b) is " << ((a == b) && (a < b)) << endl; // AND operator
  cout << "The value of (a == b) || (a < b) is " << ((a == b) || (a < b)) << endl; // OR operator
  cout << "The value of (!(a == b)) is " << (!(a == b)) << endl; // NOT operator

  return 0;
}
 
// *************** THE END ***************