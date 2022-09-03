
#include<bits/stdc++.h>
using namespace std;

// lower_bound : give index of value equal to searched element and in case exact value does not match it gives 
// index of just greater than the searched one 

int main(){

    int arr[] = {1,5,10,15,20};
    int n = sizeof(arr)/sizeof(int); 
    auto it = lower_bound(arr,arr+n,6);
    int idx = it - arr;
    cout<<endl<<" Lower Bound : Index  " << idx<<"....value..."<<arr[idx]<<endl;
    return 1;

}