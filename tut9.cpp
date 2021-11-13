/*
 
CREATOR: PATANI BHAI YOUTUBE CHANNEL
CREATION AT:  13th November, 2021.
TOPICS COVERED: 
  1.) If else and
  2.) Control Structures.
 
*/

/*

  Basic Control Structures:
    1.) Sequence Structure
    2.) Selection Structure
    3.) Loop Structure

  ## Sequence Structure
  Enter => Action 1 => Action 2 => Exit

  ## Selection Structure
                        True  => Action 1
  Enter => Condition =>                   => Exit
                        False => Action 2
  
  ## Loop Structure
           Restart Loop << Action 2 << False
               ||                       ||
  Enter => Start Point => Condition => True => Action 1 => Exit

  If-else loop:
  Enter => IF Condition => True  => Action => Exit
                        ||                 ||
                        False => Else => Default Action
  
  The if else loop checks it the condition is true and performs the action inside the curly brackets of the
  if loop. If the condition is not matched then the default action inside the curly brackets of the 
  else loop.

  If-else ladder:
  Enter => IF Condition => True  => Action => Exit
                        ||                 ||
                        False => 1st_Else_IF_Condition => True  => Action => Exit
                        :                   :
                        :                   :
                        False => nth_Else_IF_Condition => True  => Action => Exit
                                              ||                 ||
                                              False => Else => Default Action
  If-else ladder is a looping system where there can be N number of condition for the program to check. If
  a person wants the program to check if Condition A is not satisfied then it should check if the Condition 
  B is satisfied and then either perform action in it or if not satisfied then perform the defalut action.

  E.g.: If the user enter a number that should be multiplied by 5 is less than 3 or divide by 2 if greater 
  than 3 and if none conditions are matched then give the number as it is.
  int y;

  if(x<3){
    y = x*5
  } else if(x>3){
    y = x/2;
  } else {
    y = x;
  }

  ## Switch Case:
  Switch case is most probably used when there are more than one options to be selected or to compare.
  E.g.: A program takes in two numbers and there are many functions that perform operations on them 
  and give a sutable output to the user. But we want the user you choose which operation he/she want 
  the program to perform for example in a calculator program should the program add, subtract, multiple 
  or divide those to numbers, are options from which the user has to select.

  switch (expression){
    case 1:
      {add()}
    case 2:
      {subtract()}
      :
      :
      :
    case nth:
      {func()}
    default:
      {default action}
  }

*/

// *************** CODE START ***************
 
#include <iostream>
#include <iomanip>
using namespace std;

int a,b,c,x,y;

sum(int x, int y){
  return x+y;
}
  
sub(int x, int y){
  return x-y;
}
mul(int x, int y){
  return x*y;
}
Div(int x, int y){
  return x/y;
}
 
int main() {
  // int age;
  // cout << "Tell me your age: ";
  // cin >> age;
  // if(age < 18) {
  //   cout << "You cannot apply for driving license." << endl;
  // } else if(age == 18) {
  //   cout << "You can apply for driving license after a year." << endl;
  // } else {
  //   cout << "You can apply for driving license." << endl;
  // }

  cout << "Enter a: ";
  cin >> a;

  cout << "Enter b: ";
  cin >> b;

  cout << "Which operation do you want to perform?" << endl; 
  cout << "1.) Addition (+)" << endl; 
  cout << "2.) Subtraction (-)" << endl; 
  cout << "3.) Multiplication (*)" << endl; 
  cout << "4.) Division (/)" << endl;
  cout << "5.) Exit." << endl;
  cout << "Enter the symbol of operation: "; 
  cin >> c;

  switch (c)
  {
  case 1:
    cout << "Sum of " << a << " and " << b << " is " << sum(a,b) << endl;
    cout << "Thank you! Visit again later." << endl;
    break;

  case 2:
    cout << "Difference of " << a << " and " << b << " is " << sub(a,b) << endl;
    cout << "Thank you! Visit again later." << endl;
    break;

  case 3:
    cout << "Product of " << a << " and " << b << " is " << mul(a,b) << endl;
    cout << "Thank you! Visit again later." << endl;
    break;

  case 4:
    cout << "Division of " << a << " and " << b << " is " << Div(a,b) << endl;
    cout << "Thank you! Visit again later." << endl;
    break;

  default:
    cout << "Thank you! Visit again later." << endl;
    break;
  }

  return 0;
}
 
// *************** THE END ***************