/*
Camilo Salazar
Question 1: chapter 4

Write a C++ program that requests and displays information as shown in the
following example of output:
What is your first name? Betty Sue
What is your last name? Yew
What letter grade do you deserve?
B
What is your age? 22
Name: Yew, Betty Sue Grade: C
Age: 22
*/
#include<iostream>
using namespace std;
int main()
{
const int Arsize = 20;
char first_name[Arsize];
char last_name[Arsize];
char grade[Arsize];
char age[Arsize];
cout<<"What is your first name?\n";
cin.getline(first_name,Arsize);
cout<<"What is your last name? \n";
cin.getline(last_name,Arsize);
cout<<"What letter grade do you deserve?\n";
cin.getline(grade,Arsize);
cout<<"What is your age??\n";
cin.getline(age,Arsize);
cout<<"My name is "<<first_name<<" "<<last_name<<"I deserve a grade"<<grade<<"age "<<age<<"\n";
return 0;
}
