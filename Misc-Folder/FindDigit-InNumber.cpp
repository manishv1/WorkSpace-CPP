// CPP code to find a digit in a number
// using std::tostring
#include <bits/stdc++.h>

using namespace std;
// Driver code
int main()
{
 
    // Converting number to string
    std::string str = std::to_string(9954);
 
    // Finding 5 in the number
std::cout << "5 is at position " << str.find('5') + 1;
std::cout<<endl;
}