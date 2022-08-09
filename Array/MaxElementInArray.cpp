#include<iostream>
using namespace std;
int arr[1000];
int findmax(int n)
{	
	int max = -1;
	cin>>arr[0];
    max = arr[0];
	for(int i = 1 ; i < n; ++i)
	{

		cin>>arr[i];
		if( arr[i] > max)
			max = arr[i];
			
	}
	cout<<max;

}


int main() {

	int n;
	cin>>n;
	findmax(n);

	return 0;
}

