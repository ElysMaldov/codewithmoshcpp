#include <iostream>

using namespace std;

int main()
{
  double fahrenheit;

  cout << "Enter faherenheit: ";
  cin >> fahrenheit;

  double celcius = (fahrenheit - 32) * 5 / 9;
  cout << fahrenheit << " F is equals to " << celcius << " C";

  return 0;
}