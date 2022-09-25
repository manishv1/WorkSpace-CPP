// C++ program for the above approach
#include "bits/stdc++.h"
//#include "valarray"
using namespace std;
 
// Function to slice the given array
// elements from range (X, Y)
valarray<int> slicing(valarray<int> arr,
                      int X, int Y)
{
 
    // Return the slicing of array
    // using slice from start 1 and size 3 and stride 4 
    return arr[slice(X, Y - X + 1, 1)];
}
 
// Print the resultant array
// after slicing
void printResult(valarray<int> v)
{
 
    // Traverse the vector v
    for (auto i : v) {
        cout << i << ' ';
    }
    cout << '\n';
}
 
// Driver Code
int main()
{
 
    // Given vector
    valarray<int> arr = { 1, 2, 3, 4,
                          5, 6, 7 };
 
    // Given range
    int X = 0, Y = 4;
 
    // To store the sliced vector
    valarray<int> ans;
 
    // Function Call
    ans = slicing(arr, X, Y);
 
    // Print the sliced vector
    printResult(ans);
}