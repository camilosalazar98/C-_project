/*
 * sequence.h

 *
 *  Created on: Jun 25, 2017
 *      Author: camilosalazar
 * The purpose of the is class is to create a Sequence data structure. It will revice a list of numbers and has to
 * keep them in order.
 * The erase_first() will erase the first index of the array.
 * Insert function the purpose of the function is to add data to the array.
 * size function tell us the size of our array.
 * The count function will count the number of occurrence with in the array.
 * erase_last function erase the last element within the array.
 * erase_occurrence will delete all occurrence with in the array.
 * erase_from function deletes a from a certin poin in the index.
 *insert_first function inserts a value in the first index.
 * The operator+ function overloads the operator and allow two sequence objects to be added.
 * operator= function will allow one object of sequence to be assigned to the left side
 * operator << function will allow us to out put a object.
 * operator >> function will allow us to acppect a fuction
 *
 * Note:
 *
 * This program won't compile because in one part for example used isn't being resolved. Which I
 * haven't figure out why since used was initialized.Another problem that I kept running in too was the ide kept
 * telling me I didn't define the member definitions when I did.Either I did some syntax error that I wasn't able to
 * get. Something that kept happening alot was a error saying capacity varible can not be resolved.
 * Which I think thats telling me the IDE can't tell what it is. I tried to define it using value_type since its
 * a double. I don't know if using it in the implementation file it doesn't work.
 *Another big problem I kept running in too was to it would say my overload operator can't be resloved either this
 *Another means that I'm not using them correctly. These were the issues I faced when completing this program.
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
	class sequence
	{

	public:
		typedef int value_type;

		sequence();//Constructor
		~sequence();//destructor


		void insert(const value_type& value);//insert a num
		void size();// tell you the size
		void count(const value_type &value);// counts the length

		void erase_first(const value_type& value);//erase the index of the array
		void erase_occurrence(const int& value);// delete repeated values
		void erase_from(const value_type &value);// function which accepts INDEX of an element and erases the element from that index (index starts from zero).
		void erase_last();// erase the last index of the array

		void insert_first(const value_type &value);//insert the first
		void insert_at(const value_type& value,const value_type& index);// insert in a spefic index

		friend sequence& operator+(const sequence &a,const sequence &b); //overload +
		sequence& operator=(const sequence &a);//overloads =
		sequence& operator+=(const sequence &a);//overloads +=

		friend bool operator==(const sequence &a, const sequence &b);//overloads ==*/
		friend ostream& operator << (ostream& out, sequence& a);
		friend istream& operator >> (istream& in, sequence& a);




	private:
		int *data;
		int used;
		int capacity;








	};







}//namespace bracket



#endif /* SEQUENCE_H_ */
