#include <iostream>
using namespace std;

int recurse(int a, int b){
	if (b==0 | a==0){
		return a | b;
	}else{
	    return recurse(b, a%b);
	}
}

int main(){
	int x, y, w;
    cout<<"Enter two numbers to find GCD: ";
    cin>>x>>y;
    w=recurse(x,y);
	cout<<"GCD of "<<x<<" and "<<y<<" : "<<w;
	return 0;
}