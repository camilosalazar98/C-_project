/*
Camilo Salazar
2.Write a C++ program that asks for a distance in furlongs and converts it to
yards.(One furlong is 220 yards.)
*/
#include<iostream>
using namespace std;

int main()
{
 double yards,furlongs;
cout<<"How many furlongs do you want to convert in to yards?\n";
cin>>furlongs;
yards = furlongs * 220;
cout<<"The are "<<yards<<" yards in "<<furlongs<<"furlongs.\n";
return 0;
}
