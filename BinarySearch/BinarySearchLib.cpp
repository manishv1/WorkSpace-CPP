#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>


using namespace std;


void fillVector(vector<int> &v,int size)
{
	for (int i = 0; i < size; i++)
	{
		v.push_back(rand() % 100);
		//cout << v[i] << endl;
	}
}

int binarySearch(vector<int> v, int target) {

	int s = 0, e = v.size() - 1;
	int result = -1;
	sort(v.begin(), v.end());

	while (s <= e)
	{
		int mid = (s + e) / 2;

		if (v[mid] == target) {

			return mid;
		}
		else if ( target < v[mid] )
		{
			e = mid - 1;
		}
		else if (target > v[mid])
		{
			s = mid + 1;
		}
	}
	return result;
}


//  Find first index of target element 
//  v[] = { 1,2,3,4,5,5,5,5,6,7,8};

int findFirstIndex(vector<int> v, int target) {

	int s = 0, e = v.size() - 1;
	int result = -1;

	while (s <= e)
	{
		int mid = (e + s) / 2;
		if (v[mid] == target)
		{
			// we got first one index , the firt index if exist will exist on the left of mid
			e = mid - 1;
			result = mid;
		//	cout << result << endl;

		}
		else if (v[mid] < target)
		{
			s =  mid + 1;
		}
		else if (v[mid] > target)
		{
			 e =  mid - 1;
		}

	}
	return result;
}


int findLastIndex(vector<int> v, int target) {

	int s = 0, e = v.size() - 1;
	int result = -1;

	while (s <= e)
	{
		int mid = (e + s) / 2;
		if (v[mid] == target)
		{
			// we got first one index , the last index will be one the right of mid 
			s = mid + 1;
			result = mid;
		//	cout << result << endl;

		}
		else if (v[mid] < target)
		{
			s =  mid + 1;
		}
		else if (v[mid] > target)
		{
			 e =  mid - 1;
		}

	}
	return result;

}




int main()
{
	vector<int> v = {1,2,3,4, 5,5,5,5,6,7,8 };
//	fillVector(v,10);
//	cout << findFirstIndex(v,5)<<endl;

	cout << findLastIndex(v,5)<<endl;
	/*sort(v.begin(), v.end());
	for (auto i : v) {
		cout << i << " ";
	}
	cout << endl<<endl<<binarySearch(v, -5);*/

	
	return 1;

}
