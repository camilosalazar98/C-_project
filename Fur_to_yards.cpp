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
void func_1(string n);
int main()
{

return 0;
}
string func_1(string n)
{
  cout<<"Three blind mice " * 2;
}
