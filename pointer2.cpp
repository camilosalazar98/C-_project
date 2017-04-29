/*
Camilo Salazar
Playing with pointers

using new opterator
*/
#include<iostream>
using namespace std;

int main()
{
int * p = new int; // allocate space for a new int manually
*p = 1990; // places that int there
cout<<"int ";
cout<<"Value = "<<*p<< ":location = "<<p<<endl;
delete p;
return 0;
}
