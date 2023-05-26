#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>


using namespace std;


void print(string a)
{
	/*for (size_t i = 0; i < a.length(); i++)
	{
		cout << a.at(i);
	}*/

	for (char c : a)
	{
		cout << c << endl;
	}
}

void substring(string a)
{

	string tmp = a.substr(2);
	cout << endl;
	print(tmp);
}


int main()
{
	string s = "radha";
	print(s);
	substring(s);
	return 1;

}
