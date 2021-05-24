#include<iostream>
#include <stack>
using namespace std;

bool myOperator(char y)
{
	if(y=='+' || y=='-' || y=='*' || y=='/' || y=='^')
	{
		return true;
	}else{
		return false;
	}
}

int precedence(char y)
{
	if(y=='^')
	return 3;
	else if(y=='*' || y=='/')
	return 2;
	else if(y=='+' || y=='-')
	return 1;
	else
	return -1;
}



string InfixToPostfix(stack <char> s, string infix)
{
	string postfix;
	for(int x=0; x<infix.length(); x++)
	{
		if((infix[x] >= 'a' && infix[x] <= 'z')||(infix[x] >= 'A' && infix[x] <= 'Z') || (infix[x]>='0' && infix[x]<='9'))
		{
			postfix+=infix[x];
		}
		else if(infix[x] == '(')
		{
			s.push(infix[x]);
		}
		else if(infix[x] == ')')
		{
			while((s.top()!='(') && (!s.empty()))
			{
				char temp = s.top();
				postfix += temp;
				s.pop();
			}
		}
		else if (myOperator(infix[x]))
		{
			if(s.empty()){
			s.push(infix[x]);
			}
			else
			{
				if(precedence(infix[x])>precedence(s.top()))
				{
					s.push(infix[x]);
				}
				else if((precedence(infix[x])==precedence(s.top())) && (infix[x]=='^'))
				{
					s.push(infix[x]);
				}
				else
				{
					while((!s.empty()) && (precedence(infix[x])<=precedence(s.top())))
					{
						//char temp =s.top();
						postfix+=s.top();
						s.pop();
					}
					s.push(infix[x]);
				}
			}
		}
	}
	while(!s.empty())
	{
		postfix+=s.top();
		s.pop();
	}
	
	return postfix;
}
//-----------------

int main()
{
	string inf_exp, post_exp;
	cout<<"Enter Infix Expression: "<<endl;
	cin>>inf_exp;
	cout<<"Infix Expression: "<<inf_exp<<endl;
    
    stack <char> stack; 
    post_exp = InfixToPostfix(stack, inf_exp);
	cout<<endl<<"Postfix Expression: "<<post_exp;
	return 0;
}