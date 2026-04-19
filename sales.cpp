#include <iostream>

using namespace std;

int main()
{
  double sales = 95000;
  const double stateTax = 0.04;
  const double countyTax = 0.02;

  // Calc final sale
  double stateTaxTotal = sales * stateTax;
  double countyTaxTotal = sales * countyTax;
  double finalSale = sales - stateTaxTotal - countyTaxTotal;

  // Print
  cout << "Sales: $" << sales << endl
       << "State Tax: " << stateTax * 100 << "%" << endl
       << "County Tax: " << countyTax * 100 << "%" << endl
       << endl
       << "Final Sale: $" << finalSale << endl
       << "State Tax Total: $" << stateTaxTotal << endl
       << "County Tax Total: $" << countyTaxTotal;

  return 0;
}