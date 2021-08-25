#include "stdafx.h"
#include <iostream>
#include <queue>
using namespace std;

void show(queue<int> my_number){

	while(!my_number.empty()){
		cout << '\t' << my_number.front(); 
		my_number.pop();
	}
	cout << '\n';
}

int _tmain(int argc, _TCHAR* argv[])
{
	queue<int> my_number;
	my_number.push(100);
	my_number.push(200);
	my_number.push(300);
	my_number.push(400);
	my_number.pop();
	my_number.pop();

	cout<< "Print all number: ";
	show(my_number);

	cout<< "size: " << my_number.size()<<endl;
	cout<< "front: " << my_number.front()<<endl;
	cout<< "back: " << my_number.back() << endl;

	return 0;
}

