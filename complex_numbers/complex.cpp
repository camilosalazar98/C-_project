/*
 * imp_complex.cpp
 *
 *  Created on: Jun 11, 2017
 *      Author: camilosalazar
 */

#include <iostream>
using namespace std;

#include "complex.h"

complex::complex(double r,double i)
// Precondition: Accpects the assigned to the complex equation
// Postcondition:assigns real_num and imaginary_num by the cleint to the complex equation
{
	real_num = r;//Set the real number
	imaginary_num = i;//Sets the imagenary num
}

void complex::print( )
// Postcondition: prints out
{

 cout<<real_num<<" + "<<imaginary_num<<"i"<<endl;

}
const double complex::get_real() const
// Postcondition: return real_num number.

{
	return real_num;
}

const double complex::get_img() const
// Postcondition: return imaginary_num number.
{
	return imaginary_num;
}
