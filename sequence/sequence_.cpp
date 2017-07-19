/*
 * sequence_.cpp
 *
 *  Created on: Jul 1, 2017
 *      Author: camilosalazar
 */
#include<iostream>
using namespace std;

#include"sequence.h"
using namespace Sequence_Data_Structures;



int main(){
	sequence seq_0,seq_1,seq_2,seq_3,object;
	seq_0.insert(1);
	seq_0.insert(3);
	seq_0.insert(3);

	seq_1.insert(2);
	seq_1.insert(6);
	seq_1.insert(7);

	seq_2.insert(90);
	seq_2.insert(45);
	seq_2.insert(32);


	/*
	seq_2 +=seq_0;
	cout<<seq_2<<endl;
	seq_2 += seq_1;
	cout<<seq_2<<endl;
	*/


	if(seq_1==seq_2)
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}




return 0;
}
