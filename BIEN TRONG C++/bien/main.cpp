#include<iostream>
using namespace std;

int main()
{
    int number1,number2;
    int sum,difference,product,quotient,reminder;

    cout<<"enter two interger(separated by space)"<<endl;
    cin>>number1>>number2;

    sum=number1+number2;
    difference= number1-number2;
    product=number1*number2;
    quotient=number1/number2;
    reminder=number1%number2;

    cout<<"the sum,difference,product,quotient and remainder of "<<number1<<" and "<<number2<<" are "<<sum<<","<<difference<<","<<product<<","<<quotient<<","<<reminder<<endl;


    ++number1;
    --number2;
    cout<<"number1 after increment 1s "<<number1<<endl;
    cout<<"number2 after decrement is "<<number2<<endl;

    quotient=number1/number2;
    cout<<"the new quotient of "<<number1<<" and "<<number2<<" is "<<quotient<<endl;
        return 0;

}
