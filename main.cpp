#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double principal;
    int numYears;
    double rate;
    cout << "Please enter the principal: ";
    cin >> principal;
    cout << "Please enter the number of years: ";
    cin >> numYears;
    cout << "Please enter the interest rate: ";
    cin >> rate;

    double balance = principal*pow(1+rate/100, numYears);
    cout << "The final balance is " << balance << endl;
}
