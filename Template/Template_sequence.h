/*
 * sequence.h

 *
 *  Created on: Jun 25, 2017
 *      Author: camilo salazar
 * The purpose of the is class is to use Sequence data structure and use templates implementation on functions
 * The erase_first() will erase the first index of the array.
 * Insert function the purpose of the function is to add data to the array.
 * size function tell us the size of our array.
 * The count function will count the number of occurrence with in the array.
 * erase_last function erase the last element within the array.
 * erase_occurrence will delete all occurrence with in the array.
 * erase_from function deletes a number for a index you've picked.
 *insert_first function inserts a value in the first index.
 * The operator+ function overloads the operator and allow two sequence objects to be added.
 * operator= function will allow one object of sequence to be assigned to the left side
 * operator << function will allow us to out put a object.
 * operator >> function will allow us to accepts a function
 *
 *
 *
 *
 */
#include<cstdlib>
#include<iostream>
using std::istream;
using std::ostream;


#ifndef SEQUENCE_H_
#define SEQUENCE_H_

namespace Sequence_Data_Structures
{
	template<class T>
	class sequence
	{

	public:
		typedef T value_type;

		sequence();//Constructor
		~sequence();//destructor


		void insert(const value_type& value);//insert a num
		void size();// tell you the size
		void count(const value_type &value);// counts the length

		void erase_first(const value_type& value);//erase the index of the array
		void erase_occurrence(const value_type& value,const value_type& occurrence);// delete repeated values
		void erase_from(const value_type &value);// function which accepts INDEX of an element and erases the element from that index (index starts from zero).
		void erase_last(const T& value);// erase the last index of the array

		void insert_first(const value_type &value);//insert the first
		void insert_at(const value_type& value,const value_type& index);// insert in a spefic index

		sequence& operator=(const sequence &a);//overloads =
		sequence& operator+=(const sequence &a);//overloads +=
		template<class B>
		friend sequence<B> operator+(const sequence<B> &a,const sequence<B> &b); //overload +
		template<class B>
		friend bool operator==(const sequence<B> &a, const sequence<B> &b);//overloads ==*/
		template<class B>
		friend ostream& operator << (ostream& out, sequence<B> &a);
		template<class B>
		friend istream& operator >> (istream& in, sequence<B> &a);




	private:
		T *data;
		T used;
		T capacity;








	};







}//namespace bracket


#include "Template_sequence.tpp"
#endif /* SEQUENCE_H_ */
