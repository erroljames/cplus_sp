#include "stdafx.h"
#include <stack>
#include <iostream>
using namespace std;

void viewStack(stack<int> stack){
	if(stack.empty()){
		system("cls");
	}else{
		int content = stack.top();
		stack.pop();
		viewStack(stack);
		cout<<content<<" "<<endl;
		stack.push(content);
	}
}

int _tmain(int argc, _TCHAR* argv[]){
	
	int command, element;
	stack<int>stack;
	do{
	cout<<"1. Push element"<<endl;
	cout<<"2. Pop element"<<endl;
	cout<<"3. View my Stack"<<endl;
	cout<<"4. Exit"<<endl;
	cin>>command;
	switch(command){
	case 1: 
		cout<<"Enter element: "<<endl;
		cin>>element;
		stack.push(element);
		system("cls");
		break;
	case 2:
		stack.pop();
		system("cls");
		break;
	case 3:
		viewStack(stack);
		break;
	case 4:
		break;
	default:
		cout<<"Input error!"<<endl;
	}//switch
	}while(command!=4);
	return 0;
}

