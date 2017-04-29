/*
Camilo Salazar
Playing with pointers
*/
#include<iostream>
using namespace std;

int main()
{
int * numbers;
int nums = 6;
numbers = &nums;
cout<<"Value of num: "<<nums<<endl;
cout<<"Value of *num: "<<*numbers<<endl;
cout<<"Address of num: "<<&nums<<endl;
cout<<"Address of num: "<<numbers<<endl;

*numbers = *numbers + 1;
cout <<"Updated nums: "<<nums<<endl;
cout<<"Address of num: "<<&nums<<endl;

}
