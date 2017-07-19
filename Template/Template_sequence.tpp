/*
 * sequence.cpp

 *
 *  Created on: Jun 27, 2017
 *      Author: camilosalazar
 */
#include <cassert>
#include<iostream>

#include "Template_sequence.h"
using std::istream;
using std::ostream;
using std::cout;
using std::endl;
namespace Sequence_Data_Structures{


template<class T>
sequence<T>::sequence()//Constructor
// Precondition: none
// Postcondition:constructs a object of type sequence
{
	capacity = 30;
	data = new value_type[capacity];
	used = 0;
}
template<class T>
sequence<T>::~sequence()
// Precondition: none
// Postcondition:dealocate data
{
	delete [ ] data;
}

template<class T>
void sequence<T>::size()
// Precondition: none
// Postcondition:Return the value of used.
{
	cout<<"Your size is: "<<used<<endl;
}

template<class T>
void sequence<T>::erase_first(const value_type& value)
// Precondition: none
// Postcondition: erase_first which respectively remove the first
{
		value_type counter = 0;
		for(int i = 0; i < used; i++)
		{
			if(data[i] == value)
			{
				counter++;
				if(counter == 1)
				{
					erase_from(i);
				
					
				}
			}
		}
}

template<class T>
void sequence<T>::insert(const value_type& value)
// Precondition: Accepts a value of type double
// Postcondition:inserts the value to the array
{


	data[used] = value;
	used++;

}

template<class T>
void sequence<T>::count(const value_type &value)
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



template<class T>
void sequence<T>::erase_last(const T& value)
// Precondition: 
// Postcondition:counts hows many time that value appears and which value you used for the function.
{

	for(int i = used ; i > 0 ; i-- )
	{
		if(data[i]==value)
		{
			erase_from(i);
			break;
		}
	}
}
template<class T>
void sequence<T>::erase_occurrence(const T& value,const T& occurrence)
// Precondition: Accepts a index
// Postcondition:removes occurrence of a number and return true once it finished
{
	value_type i;
	value_type counter = 0;
	for(i = 0; i <= used; i++)
	{
		if(data[i] == value)
		{
			counter++;
			if(counter == occurrence)
			{
				erase_from(i);
				used--;
				
			}
		}
	}
	
}


template<class T>
void sequence<T>::erase_from(const value_type &value)
// Precondition: Accepts a value
// Postcondition:erase_from remove the number with in the index you've picked
{
	for (int i = value; i < used - 1; i++)
	{
	data[i] = data[i + 1];
	}
	used--;

}
template<class T>
void sequence<T>::insert_first(const value_type &value)
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


template<class T>
void sequence<T>::insert_at(const value_type& value,const value_type& index)
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

template<class T>
sequence<T>& sequence<T>::operator+=(const sequence<T> &a)
// Precondition: Accepts a sequence.
// Postcondition:Adds the left to the right with another sequence.

{

	int i;

	for ( i = 0; i<a.used; i++)
		{
		data[i+used] = a.data[i];
		}
		used = used+a.used;

	return *this;

}



template<class B>
sequence<B> operator+(const sequence<B> &a,const sequence<B> &b)
// Precondition: Accepts two objects of type sequence.
// Postcondition:adds both object together.
{
	sequence<B> s;
	s += a;
	s += b;

	return s;




}
template<class T>
sequence<T>& sequence<T>::operator=(const sequence<T> &a)
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
		data[i] = a.data[i];
	}
	return *this;

}
template<class B>
bool operator==(const sequence<B> &a, const sequence<B> &b)
//Precondition: Accepts two object sequence
// Postcondition:evaluates two objects and returns a object if their the same.
{

	
	if(a.used != b.used)
	{
		return false;
	}
	for(int i = 0; i< a.used; i++)
	{

			if(a.data[i] != b.data[i])
			{
			return false;
			}

	}


	return true;
}
template<class B>
ostream& operator<<(ostream& out, sequence<B> &a)
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
template<class B>
istream& operator>>(istream& in, sequence<B>&a)
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
