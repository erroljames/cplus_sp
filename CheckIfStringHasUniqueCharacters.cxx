#include <iostream>
using namespace std;

bool checker(string word){
	for(int x=0; x<word.length(); x++){
		for(int y=x+1; y<word.length(); y++){
		if(word[x]==word[y]){
			return false;
		    }
		}
	}
	return true; 
}

int main(int argc, char *argv[])
{
	string word;
	cout<<"Enter string: ";
	cin>>word;
	
	if(checker(word)){
		cout<<"Result: The string has unique characters";
	}else{
		cout<<"Result: The string doesn't have the unique characters";
	}
	return 0;
}