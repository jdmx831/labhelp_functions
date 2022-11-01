#include <iostream>
#include <cmath>
using namespace std;

// Develop function prototypes here.
double avg (double num1, double num2);
int min (int num1, int num2);
int pyth (int num1, int num2);
double div (double num1, double num2);

int main ()
{
  //Declarations
  int num1, num2;


  //Input and output
  cout << "Enter two integers: ";
  cin >> num1 >> num2;
  cout << "You entered " << num1 << " and " << num2 << ".\n";

  //Function calls and results
  cout << "The average of " << num1 << " and " << num2
       << " is " << avg (num1, num2) << ".\n";
  cout << "The smallest value between " << num1 << " and " 
       << num2 << " is " << min (num1, num2) << ".\n";
  cout << "Right Triangle! A: " << num1 << ", B: " << num2
       << ", C: " << pyth (num1, num2) << ".\n";
  cout << num1 << " \\ " << num2 << " = ";
  cout << div (num1, num2) ;
       << ".\n";

  return 0;
}

// Develop the functions themselves here.
double avg (double num1, double num2)
{
  double avg;
  double avg = ( num1 +  num2) / 2;
  return avg;
}

int min (int num1, int num2)
{
  int min;
  if (int num1 > int num2)
    {
    int min = int num2;
    }
  else
    {
      int min = int num1;
    }
    }

int pyth (int num1, int num2)
{
  int pyth;
  int pyth = sqrt (int num1, 2) + sqrt(int num2, 2);
  return pyth;
}

double div (int num1, int num2)
{
  double div;
  if (int num2 <= 0)
  {
    double div = -1;
  }
  else 
  {
    double div = double num1 / double num2;
  }
}
}
