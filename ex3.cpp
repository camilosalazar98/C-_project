/*
Camilo Salazar
3. Write a C++ program that uses three user-defined functions(countingmain()asone) and produces the following output:
Three blind mice
Three blind mice
See how they run
See how they run
One function, called two times, should produce the first two lines, and the remaining function,
also called twice, should produce the remaining output.

*/
#include<iostream>
using namespace std;
void func_1();
void func_2();
int main()
{
func_1();
func_2();
return 0;
}
void func_1()
{
  cout<<"Three blind mice\n"<<"Three blind mice\n";
}
void func_2()
{
  cout<<"see how they run\n"<<"see how they run\n";
}
