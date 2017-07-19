/*
 * complex_class.h
 *
 *  Created on: Jun 11, 2017
 * Author: camilosalazar
 * The purpose of the program is too add and subtract complex varbiles. Within this program there are two
 * non-member functions. They are add_complex and Subtract_complex. They care located in the main cpp.The member
 * fuction in this class are located in the public varibles.
 * Subtract_complex is a function that subtract complex varbiles.(located in the main cpp file)
 * The print function prints out the Subtract_complex ans sum complex functions
 * add_complex adds complex varbiles.(located in the main cpp file)
 * The constructor complex assigns double to r and i to what the cleint assigns.
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_
class complex
	{
	public:
	complex(double r,double i);// constructor
	void print();//print function
	const double get_real() const;// the get function that get the real number
	const double get_img() const;//the get function that get the img num

	private:
	double real_num; // Real part of a number.
	double imaginary_num; // imagenary part of a number.



	};




#endif /* COMPLEX_H_ */
