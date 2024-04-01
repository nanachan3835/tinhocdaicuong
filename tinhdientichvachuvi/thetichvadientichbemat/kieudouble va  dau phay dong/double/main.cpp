#include<iostream>

using namespace std;

int main()
{

    double celcius,fahrenheit;

    cout<<"Enter the temperature in celcius: ";
    cin>> celcius;

    fahrenheit=celcius*9.0/5.0+32.0;
    cout<<celcius<<" degree C is "<<fahrenheit<<" degree F."<<endl<<endl;

    cout<<"Enter the temperaturein fahrenheit: ";
    cin>> fahrenheit;

    celcius=(fahrenheit-32.0)*5.0/9.0;
    cout<<fahrenheit<<" degree F is
