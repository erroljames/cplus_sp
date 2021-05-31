#include<iostream>
#include<string>
using namespace std;

int main(){
	string tempStorage;
	int size;
	cout<<"Enter how many strings do you wanna sort?"<<endl;
	cin>>size;
	string *array = new string [size];
	
	cout<<"Enter strings to sort alphabetically: "<<endl;
	for(int i=0; i<size; i++){
		cin>>array[i];
	}
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			if(array[i]>array[j]){
				tempStorage=array[i];
				array[i]=array[j];
				array[j]=tempStorage;
			}
		}
	}
	cout<<" "<<endl;
	cout<<"Sorted Output:"<<endl;
	for(int i=0; i<size; i++){
		cout<<array[i]<<" ";
	}	
	return 0;
}