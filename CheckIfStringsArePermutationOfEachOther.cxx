#include "iostream"
#include "algorithm"
using namespace std;

bool checker(string word1, string word2){
	if(word1.length() != word2.length()){
		return false;
	}
   sort(word1.begin(), word1.end());
   sort(word2.begin(), word2.end());
   
   	if(word1 == word2){
   		return true;
   	}else{
   		return false;
   	}   
}

int main(int argc, char *argv[])
{
	string word1, word2;
	cout<<"Enter String #1: ";
	cin>>word1;
	cout<<"Enter String #2: ";
	cin>>word2;
	
	if(checker(word1, word2)){
		cout<<"Both strings are permutation of each other.";
	}else{
		cout<<"Strings are not permutation of each other.";
	}
}