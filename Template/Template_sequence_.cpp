/*
 * sequence_.cpp
 *
 *  Created on: Jul 1, 2017
 *      Author: camilosalazar
 */
#include<iostream>
#include<cmath>
using namespace std;

#include"Template_sequence.h"
using namespace Sequence_Data_Structures;



int main()
{

	sequence<int> seq_0;
	sequence<int> seq_1;
	sequence<int> seq_2;
	sequence<int> seq_3;
	sequence<int> seq_4;

	seq_0.insert(3);
	seq_0.insert(3);
	seq_0.insert(8);

	seq_1.insert(6);
	seq_1.insert(1);
	seq_1.insert(6);


	seq_2.insert(90);
	seq_2.insert(45);
	seq_2.insert(32);

	cout<<seq_0<<endl;
	seq_0.erase_first(3);
	cout<<seq_0<<endl;


	cout<<seq_0<<endl;
	seq_0.erase_first(3);
	cout<<seq_0<<endl;


	cout<<seq_0<<endl;
	seq_0.erase_last(3);
	cout<<seq_0<<endl;

	seq_3 = seq_1 + seq_2;
	cout<<seq_3<<endl;

	cout<<"Enter numbers in the Sequence and type 000 to break out of the loop"<<endl;
	cin>>seq_4;
	cout<<seq_4<<endl;





	if(seq_0 == seq_1)
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;

	}







return 0;
}
