/*
Camilo Salazar
Question 3: chapter 4
Write a program that asks the user to enter his or her first name
and then last name, and that then constructs, stores, and displays a third string,
consisting of the user’s last name followed by a comma, a space, and first name.
Use char arrays and functions from the cstring header file. A sample run could look like this:
Enter your first name: Flip
Enter your last name: Fleming
Here’s the information in a single string: Fleming, Flip


*/


#include<iostream>
#include<cstring>
using namespace std;
int main()
{
const int Arsize = 20;
char first_name[Arsize];
char Last_name[Arsize];
cout<<"Enter your first name: \n";
cin.getline(first_name, Arsize); //Get the name and add it to the array a
cout<<"Enter your Last name: \n";
cin.getline(Last_name, Arsize);
cout<<"Here’s the information in a single string: "<<Last_name<<", "<<first_name<<endl;


  return 0;
}
