/*
 
CREATOR: PATANI BHAI YOUTUBE CHANNEL
CREATION AT:  12th November, 2021.
TOPICS COVERED: 
  1.) Constants,
  2.) Manipulators and
  3.) Operators Precedence.
 
*/
 
// *************** CODE START ***************
 
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
  // int a = 34;
  // cout << "The value of a was " << a << endl;
  // a = 45;
  // cout << "The value of a is " << a << endl;

  // Constants in C++

  // const int b = 3; // const ==> is for a variable which cannot be update anywhere within the program neither by you nor by the program.
  // cout << "The value of b was " << b << endl;
  // b = 45;
  // cout << "The value of b is " << b << endl;

  // Manipulators in C++
  // Previously we have already use a manipulator called 'endl'.
  // Manipulator are commands that help us to display the output in better way.
  // int a=6, b=75, c=13200;
  // cout << "The value of a without setw is " << a << endl;
  // cout << "The value of b without setw is " << b << endl;
  // cout << "The value of c without setw is " << c << endl;
  
  // setw ==> Comes from iomanip and sets the width of the output that is after declaring the function setw().
  // cout << "The value of a is " << setw(4) << a << endl;
  // cout << "The value of b is " << setw(4) << b << endl;
  // cout << "The value of c is " << setw(4) << c << endl;

  // Operator Precedence
  // It is the order in which the program will give preference to the operators while exicuting the code.
  // Refer this website to now order 'https://en.cppreference.com/w/cpp/language/operator_precedence' to read more.
  
  // int a=3, b=4;
  /* 
    here * is the first prefered operator, so first a*5 will be exicuted and will get 15. Now, the preference for + and - are the same
    so we need check the associativity(it can only be left->right or right->left). Since, the associativity of + and - is from 
    left->right so it will first add 15+4 => 19-87 => -68+45 => finally c = -23.
  */
  // int c = ((((a*5)+b)-87)+45);
  // cout << c;

  return 0;
}
 
// *************** THE END ***************