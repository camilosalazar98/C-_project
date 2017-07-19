/*
 * complex_numbers.cpp
 *The purupose of program: this is the main file of the complex numbers program.
 *  Created on: Jun 11, 2017
 *      Author: Camilo Salazar
 */
#include <iostream>
#include "complex.h"
using namespace std;
complex subtract_complex(complex a,complex b);//subtracts two complex
complex add_complex(complex a,complex b);// add the complex
int main()
{



    complex c1(4,6);
    complex c2(-3,1);

    complex c3 = subtract_complex(c1, c2);
    complex c4 = add_complex(c1, c2);

    c3.print();
    cout << endl;
    c4.print();


return 0;
}


complex subtract_complex(complex a,complex b)
// Precondition: Accepts x.real and y.real,b.imaginary_num,d.imaginary_num
// Postcondition: subtracts complex number x,y,b,d
{

	double x = a.get_real() - b.get_real(); // a represents the first parameter(real number)
	//b represents the second parameter (second real number)
	double y = a.get_img() - b.get_img(); // a the imaginary number
	return complex(x,y); //Return the complex object


}
complex add_complex(complex a,complex b)
// Precondition: Accepts x.real and y.real,b.imaginary_num,d.imaginary_num
// Postcondition: Adds complex numbers x.real and y.real,b.imaginary_num,d.imaginary_num
{

	double x = a.get_real() + b.get_real();// gives the summation of x
	double y = a.get_img() + b.get_img();// the summation of y
	return complex(x,y);//return a complex object.

}
