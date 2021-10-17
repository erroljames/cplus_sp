#include "iostream"
#include "algorithm"
using namespace std;

bool checker(string word)
{
    string hey = word;
    reverse(hey.begin(), hey.end());

    if (word != hey) {
        return false;
    } else {
        return true;
    }
}
 

int main()
{
    string word;
    cout<<"Enter a string: ";
    cin>>word;
    
    if(checker(word)){
    	cout<<"It's a palindrome.";
    }else{
    	cout<<"Not a palindrome.";
    }

    return 0;
}