#include<bits/stdc++.h>
using namespace std;
 
// The given array is a wiggle sequence or not 

vector<int> arr = {1, 7, 4, 9, 2, 5}; 
bool isWiggle(vector<int> arr)
{
    int i = 1;
    bool pdiff = arr[1] > arr[0];
    for (int i = 2; i < arr.size(); i++)
    {
      bool cdiff =   arr[i] > arr[i-1];  
      cout<< "pdiff :"<<pdiff<< "cdiff :"<<cdiff<<endl;
      if(cdiff != !pdiff) 
      return false;      
      pdiff = cdiff;
    }      
       
    return true;
}
 
int main()
{
    std::cout << "Result  :" << isWiggle(arr)<< std::endl; 
    return 0;
}