//               PROBLEM1
#include <iostream>
using namespace std;


int fahrenheit_celcius(double fahrenheit){
    double celcius = (fahrenheit - 32) * 5 / 9;
    cout << "Result : " << celcius;
    return 0;
}
int main()
{
    fahrenheit_celcius(67);
    return 0;
}
