#include <bits/stdc++.h>
#include <unordered_map>
//#include <map>
using namespace std;
 
// note negative values are also stored, map stores the " <KEY>  , <VALUE>"  pair so I think negative does not matter 

  int arr[] = { -1, 2, 45, 6, 10, 8 };
  
unordered_map< int, int> arr_map;
//map< int, int> arr_map;
 
/* Driver program to test above function */
int main()
{
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < len ; ++i){

        arr_map[arr[i]] = arr[i];
    }

    for(auto x : arr_map)
        cout<< x.first << "  "<< x.second<<endl; 
    return 0;
}