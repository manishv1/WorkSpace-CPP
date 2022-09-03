#include<bits/stdc++.h>


using namespace std;

// upper_bound : give next greater value in array  

int main(){

    int arr[] = {1,5,10,15,20};
    int n = sizeof(arr)/sizeof(int); 
    auto idx = upper_bound(arr,arr+n,5);
    cout<<" Upper Bound : Index" << idx<<"....value..."<<*idx;
    return 1;

}