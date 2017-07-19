/*
 * sequence.cpp

 *
 *  Created on: Jun 27, 2017
 *      Author: camilosalazar
 */
#include "sequence.h"
#include <cassert>
#include <algorithm>
#include<iostream>
using std::istream;
using std::ostream;
using std::cout;
using std::endl;
namespace Sequence_Data_Structures{

sequence::sequence()//Constructor
// Precondition: none
// Postcondition:constructs a object of type sequence
{
	capacity = 30;
	data = new value_type[capacity];
	used = 0;
}

sequence::~sequence()
// Precondition: none
// Postcondition:dealocate data
{
	delete [ ] data;
}

void sequence::size()
// Precondition: none
// Postcondition:Return the value of used.
{
	cout<<"Your size is: "<<used<<endl;
}
void sequence::erase_first(const value_type& value)
// Precondition: none
// Postcondition: erase_first which respectively remove the first
{

	int i;
	for(i = 0; i<used-1; i++)
	{
	 if(value == data[i])
	 {
		 erase_from(i);
	 }
	}

	--used;


}
void sequence::insert(const value_type& value)
// Precondition: Accepts a value of type double
// Postcondition:inserts the value to the array
{


	data[used] = value;
	used++;

}
void sequence::count(const value_type &value)
// Precondition: Accepts a value of type double
// Postcondition:counts hows many time that value appears and which value you used for the function.
{
	value_type counter = 0;
	for(int i = 0; i < used; i++)
	{
		if(data[i]==value)
		{
			counter++;
		}
	}
cout<<"Currently there is "<<counter<<" and of the value: "<<value<<endl;

}

/*void erase_last()
// Precondition: none
// Postcondition:removes the last value in the array and return true once finished.
{
	data[used - 1];
	--used;

}*/

void sequence::erase_last() {

	data[used - 1];
	--used;

}

void sequence::erase_occurrence(const int& value)
// Precondition: Accepts a value and a index
// Postcondition:removes occurrence of a number and return true once it finished
{
	value_type i;
	value_type counter = 0;
	for(i = 0; i < used-1; i++)
	{
		if(data[i] == value)
		{
			counter++;

		}
		else if(counter == 2)
				{
					erase_from(i);
				}
	}
}
void sequence::erase_from(const value_type &value)
// Precondition: Accepts a value
// Postcondition:erase_from a number you pick in the array
{
	for (int i = value; i < used - 1; i++)
	{
	data[i] = data[i + 1];
	}
	used--;

}
void sequence::insert_first(const value_type &value)
// Precondition: Accepts a value
// Postcondition:insert that value in the first index.
{
	value_type i;
	for(i = used; 0 < i; --i)
	{
		data[i] = data[i-1];
	}
	data[i]  = value;
	++used;

}
void sequence::insert_at(const value_type& value,const value_type& index)
// Precondition: Accepts a value and a index
// Postcondition:place that value in the index you picked.
{
	value_type i;
	for(i = used; index < i; i--)
	{
		data[i] = data[i-1];
	}
	data[index] = value;
	++used;

}


sequence& sequence::operator+=(const sequence &a)
{

	int i;

	for ( i = 0; i<a.used; i++)
		{
		data[i+used] = a.data[i];
		}
		used = used+a.used;

	return *this;

}




sequence& operator+(const sequence & a,const sequence & b)
// Precondition: Accepts two objects of type sequence.
// Postcondition:adds both object together.
{
	sequence d;
	d += a;
	d += b;

	return d;




}
sequence& sequence::operator=(const sequence &a)
//Precondition: Accepts a object sequence
// Postcondition:assigns object sequence to left hand side
{

	value_type *new_data;

	if(this->capacity != a.capacity)
	{
		new_data = new value_type[a.capacity];
		delete [] data;
		data = new_data;
		capacity = a.capacity;
	}

	used = a.used;
	value_type i;



	for(i = 0; i< used; i++)
	{
		data[i] = a.data[i + used];
	}
	return *this;

}

bool operator==(const sequence &a, const sequence &b)
//Precondition: Accepts two object sequence
// Postcondition:evaluates two objects and returns a object if their the same.
{

	int i;
	if(a.used != b.used)
	{
		return false;
	}
	for(i = 0; i< a.used; i++)
	{

			if(a.data[i] != b.data[i])
			{
			return false;
			}

	}


	return true;
}
ostream& operator<<(ostream& out, sequence& a)
//Precondition: Accepts a object sequence
// Postcondition:Displays the array of the object.
{
	int i;
	out<<"Our sequence is: [";
 	 for(i = 0;  i< a.used; i++)
 	 {
 		 out<<a.data[i]<<" ";

 	 }
 	 	 out<<"] ";
 	 	 return out;
}
istream& operator>>(istream& in, sequence& a)
//Precondition: Accepts a object sequence
// Postcondition: accpect a object of sequence.

{
	int data;
	while(in >> data)
	{


		if( a.capacity != a.used)
		{

			if(data == 000)
			{
				break;
			}
			a.insert(data);
		}

	}
	return in;


}














}// namspace brack
