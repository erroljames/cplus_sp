#include<iostream>
using namespace std;
int main()
{
int number,A, x=0, y;//depende sa value ng number

cout<<"enter number hehehe\n";
cin>>number;
y=number;

     while (number!=0)
     { 
     A=number%10;
     x=x*10+A;
     cout<<A<<"";
     number=number/10;
     }
     
     
     if(x==y) cout<<"\nwow! baliktaran\n"; else cout<<"\nsorry hindi baliktaran\n";
    

}
