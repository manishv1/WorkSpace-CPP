#include<iostream>
#include<stack>

using namespace std;


void insertInSortedStack(stack<int>& s, int x)
{
	if ( s.empty() || s.top() < x)
	{
		s.push(x);
       return;
	}
    int temp = s.top();
	s.pop();
	insertInSortedStack(s,x);
	s.push(temp);
}

void insertAtEnd(stack<int>& s, int x)
{
	if (s.empty())
	{
		s.push(x);
		return;
	}
	int element = s.top();
	s.pop();
	insertAtEnd(s,x);
	s.push(element);
	return;
}

void printStack(stack<int> s)
{

	while (!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}
}

int main()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(6);
	printStack(s);
	cout<<endl<<endl;
	insertInSortedStack(s,5);
    printStack(s);
	return 1;
}