/*
Camilo Salazar
4. Write a program that has main() callauser-defined functionthat takes a Celsius temperature
value as an argument and then returns the equivalent Fahrenheit value.
The pro- gram should request the Celsius value as input from the user and display the result, as shown in the following code:
Please enter a Celsius value: 20
20 degrees Celsius is 68 degrees Fahrenheit.
*/
#include<iostream>
using namespace std;

int main()
{
  double value,Fahrenheit;
cout<<"Enter a Celsius value that you would like to convert to Fahrenheit?\n";
cin>>value;
Fahrenheit = (value * (1.8)) + 32;
cout<<"It is "<<Fahrenheit<<" degrees.\n";
return 0;
}
