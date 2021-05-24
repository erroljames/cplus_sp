#include<iostream>
#include<stack>

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

string InfixToPrefix(stack <char> s, string infix){
	string prefix;
	reverse(infix.begin(), infix.end());
	for(int x=0; x<infix.length(); x++)
	{
		if(infix[x]=='(')
		{
			infix[x]=')';
		}else if (infix[x]==')')
		{
			infix[x]='(';
		}		
	}
	for(int x=0; x<infix.length(); x++)
	{
		if((infix[x] >='a' && infix[x]<='z') || (infix[x]>='A' && infix[x] <= 'Z') || (infix[x]>='0' && infix[x]<='9'))
		{
			prefix+=infix[x];
		}
		else if(infix[x]=='(')
		{
			s.push(infix[x]);
		}
		else if(infix[x]==')')
		{
			while((s.top()!='(') && (!s.empty()))
			{
				char temp = s.top();
				prefix+=temp;
				s.pop();
			}
			if(s.top()=='(')
			{
				s.pop();
			}
		}
		else if(myOperator(infix[x]))
		{
			if(s.empty())
			{
				s.push(infix[x]);
			}else
			{
				if(precedence(infix[x])>precedence(s.top()))
			{
				s.push(infix[x]);
			}
			else if(precedence(infix[x])==precedence(s.top()) && (infix[x]=='^'))
			{
				while((precedence(infix[x])==precedence(s.top())) && (infix[x]=='^'))
				{
					prefix+=s.top();
					s.pop();
				}
				s.push(infix[x]);
			}
			else if(precedence(infix[x])==precedence(s.top()))
			{
				s.push(infix[x]);
			}
			else
			{
				while((!s.empty()) && (precedence(infix[x])<precedence(s.top())))
				{
					prefix+=s.top();
					s.pop();
				}
				s.push(infix[x]);
			}
		}
	}
	}
	while(!s.empty())
	{
		prefix+=s.top();
		s.pop();
	}
	reverse(prefix.begin(),prefix.end());
	
	
	return prefix;
}

int main(){
	string infix;
	string prefix;
	cout<<"Enter Infix Expression: "<<endl;
	cin>>infix;

	cout<<"Infix Expression: "<<infix<<endl;
	stack <char> stack;
	prefix = InfixToPrefix(stack, infix);
	cout<<endl<<"Prefix Expression: "<<prefix;
	return 0;
}