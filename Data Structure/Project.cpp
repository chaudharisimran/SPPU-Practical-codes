#include <iostream>
using namespace std;
class Calc
{
public:
  double n, i, sum, diff, product, Quotient;
  double array[100];
  void add();
  void sub();
  void multiply();
  void div();
  void accept();
};
void Calc::accept()
{
  cout << "Enter  number count";
  cin >> n;
  cout << "Enter the numbers:";
  for (int i = 0; i < n; i++)
  {
    cin >> array[i];
  }
}
void Calc::add()
{

  sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum = sum + array[i];
  }
  cout << "\n Addition is :" << sum;
}
void Calc::sub()
{
  diff = array[0];
  for (int i = 1; i < n; i++)
  {
    diff = diff - array[i];
  }
  cout << "\n Subtractio is:" << diff;
}
void Calc::multiply()
{
  product = 1;
  for (int i = 0; i < n; i++)
  {
    product = product * array[i];
  }
  cout << "\n Product is:" << product;
}
void Calc::div()
{
  Quotient = array[0];
  for (int i = 1; i < n; i++)
  {
    Quotient = Quotient / array[i];
  }
  cout << "\n Quotient is:" << Quotient;
}
int main()
{
  Calc obj;
  int choice;
  char ch;
  cout << "\n Welcome to Smart Calc \n";

  do
  {
    obj.accept();
    cout << "1. Addition   \n 2.Subtraction \n 3. Multiplication \n 4.Division";
    cout << "\n Please enter your choice \n";
    cin >> choice;
    switch (choice)
    {
    case 1:
      obj.add();
      break;
    case 2:
      obj.sub();
      break;
    case 3:
      obj.multiply();
      break;
    case 4:
      obj.div();
      break;
    default:
      cout << "\n Please enter valid choice";
    }
    cout << " \n Do you want to continue?(Y/N)";
    cin >> ch;
  } while (ch == 'y' || ch == 'Y');
  cout << "Thank You ! \n";

  return 0;
}
