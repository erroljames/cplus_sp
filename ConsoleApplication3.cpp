/* INSTRUCTION: Find the largest and smallest number of user-input in array
and middle number before/after sorting.

// 90 56 78 4 32 ==> 4 32 56 78 90
Steps: 
1. Print out "How many number/s do you want to store?"
2. Store numbers in array
3. Print out "Before sorting: " inserting all numbers of user-input
4. Print out the middle number if possible else...
5. Sort 
6. Print out "The lowest number is : " 
7. Print out "The higher number is: " 
8. Print out "Before sorting: " inserting all numbers of user-input
9. Print out the middle number if possible else ...
*/
#include "stdafx.h"
#include <iostream>
using namespace std;
int main(){
	int number;
	int k;
	cout<<"How many number/s do you want to store?"<<endl;
	cin>>number;
	//create container
	int *array = new int[number];
	//store
	cout<<"Store "<<number<<" number/s: "<<endl;
	for(int x=0; x<number; x++){
		cin>>array[x];
	}
	//condition
	int divide1 = number / 2;
	int middle1 = number%2;

	//before sorting
	if(middle1!=0){
	cout<<"Before sorting: "<<endl;
	for(int beforesort=0; beforesort<number; beforesort++){
		cout<<" "<<array[beforesort];
	}
	cout<<" "<<endl;
	cout<<"The middle number before sorting is: "<<array[divide1]<<endl;
	}

	//sort area
	for(int i=0; i<number; i++){
		for(int j=1; j<number; j++){
			if(array[j-1]>array[j]){
				k = array[j-1];
				array[j-1] = array[j];
				array[j] = k;
			}//if
		}//for2
	}//for1
	
	//Now let us find the highest and lowest number
	//highest, (-1) since we started the index number at zero(0)
	cout<<" "<<endl;
	cout<<"The highest number is: "<<array[number-1]<<endl;
	//lowest
	cout<<"The lowest number is: "<<array[0]<<endl;

	cout<<" "<<endl;
	//to target the middle number, we divide it by 2
	int divide2 = number/2;
	//for odd/even purpose,, if no remainder == no middle number
	int middle2 = number%2;

	if(middle2==0){
		cout<<"Sorry babe, I found that we dont have a middle number..."<<endl;
	}

	if(middle2!=0){
	cout<<"After sorting: "<<endl;
	for(int aftersort=0; aftersort<number; aftersort++){
		cout<<" "<<array[aftersort];
	}
	cout<<" "<<endl;
	cout<<"The middle number after sorting is: "<<array[divide2]<<endl;
	cout<<" "<<endl;
	}
	


	return 0;
}

