#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>


using namespace std;


// Extract Unique Elements form array 

vector<int> extractUniqueElement(vector<int>& v)
{
	vector<int> result;
	set<int> s;

	for (int i : v)
	{
		s.emplace(i);

	}


	for (int i : s)
	{
		result.push_back(i);
	}

	for (auto i : v)
	{
		cout << i << endl;
	}

	return result;

}

// dutch national flag 
// sort array containing three numbers 
// vector<int> v = { 1,1,1,1,0,0,0,0,2,2,2,2 };
//  output -->  v = { 0,0,0,0,1,1,1,1,2,2,2,2};
void dutchNationalFlag(vector<int> &v) {

	int curIdx = 0;
	int Idx1_s = 0;
	int Idx2_s = v.size()-1;

	while (curIdx <= Idx2_s)
	{

		if (v[curIdx] == 0)
		{
			v[curIdx] = 1; curIdx++;
			v[Idx1_s] = 0; Idx1_s++;
		}
		else if (v[curIdx] == 1)
		{
			curIdx++;
		}
		else if(v[curIdx] == 2)
		{
			swap(v[curIdx],v[Idx2_s]); 
			Idx2_s--; 
		}
	}
}



// Moore's Voting Algorithm 
// find the number which apperas grater than (>) N/2 times in an array of N
// vector<int> v = { 5,5,5,3,3,4,1,2,5,5};
int mooreVotingAlgo(vector<int> v) {
	
	int cur_element = v[0];
	int count = 1;

	for (int i = 1; i < v.size(); i++)
	{
		if (cur_element == v[i])
			count++;
		else
			count--;
		if (count == 0)
		{
			cur_element = v[i];
			count++;
		}
	}

	// verify : This is must neede take the case below 
	// v = { 1,2,3,4,5} here coint will be non zero still cur_element is not a majority element

	count = 0;
	for (int i = 0; i < v.size(); i++)
	{ 
		if (v[i] == cur_element) count++;

		if (count > v.size() / 2)
			return cur_element;
	}
	return -1;

}


// sort array of 0 and 1's 
// vector<int> v = { 1,1,1,1,0,0,0,0 };
void sortArrayofZeroAndOnes(vector<int>&v)
{
	int zidx = 0;	
	for (auto i : v) {

		if (i == 0) {
			v[zidx] = 0;
			zidx++;
		}
	}

	for (int i = zidx; i < v.size(); i++)
	{
		v[i] = 1;
	}	
}

// k left rotation 
// brute force 
void kLeftRotation(vector<int>& v, int k)
{
	
	for (int i = 0; i < k; i++)	{

		int tmp = v[0];

		for (int i = 1; i < v.size(); i++)
		{
			v[i - 1] = v[i];
		}
		v[v.size() - 1] = tmp;
	}

}

// pivot index in rotated and sorted array 

// rorated arrays are like :     1,2,3,4,5 -->  4,5,1,2,3
// LT Rotation					 1,2,3,4,5 -->  2,3,4,5,1	


// RT Rotation Cases :    1,2,3,4,5     -->  5,1,2,3,4
int pivotIndexInRoratedArray(vector<int> v) {

	// this is Leetcode submitted code : Correct Code 

	int pIdx = -1;
	for (int  i = 1; i < v.size()-1; i++)
	{
		if ((v[i - 1] > v[i]) && ( v[i+1] > v[i]))
		{
			pIdx = i;
			return pIdx	;
		}
	}

	if (pIdx == -1)
	{
		if (v[0] > v[v.size() - 1])
			return v.size() - 1;
		else return 0;		
	}
}

void zigZagArray(vector<int> v)
{



}




// print : 10,20,30 ,40    --> 102030  203040 
void print3ConsequtiveElements(vector<int> v)
{
	for (int i = 0; i < v.size()-2; i+= 1)
	{
		cout << v[i] << v[i + 1] << v[i + 2] << endl;

	}


}

int main()
{

	//vector<int> v = { 1,2,3,4,5,6 };
	//vector<int> v = { 2,2,2,1,1,1,0,0,0 };
	//vector<int> r;

	vector<int> v = { 5,5,5,3,3,5,1,5,2};
	//vector<int> v = { 1,2,3,4,5};
	cout << mooreVotingAlgo(v);

    //	print3ConsequtiveElements(v);
	//int tmp = pivotIndexInRoratedArray(v);
	//cout << tmp << endl;

	/*dutchNationalFlag(v);
	for (auto i : v) {
		cout << i << endl;
	}*/
	/*r = extractUniqueElement(v);
	for (int i : r)
		cout << i << " ";*/

	/*sortArrayofZeroAndOnes(v);
	for (auto i : v) {
		cout << i << endl;

	}*/

	//kLeftRotation(v,3);
	//for (auto i : v) {
	//	cout << i << endl;
	//}

	return 1;

}
