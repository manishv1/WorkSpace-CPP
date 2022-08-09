#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
using namespace std;




int main()
{
    int a  = -12345;
    char buff[64];

  //  itoa(a,buff,10);
    string s = to_string(a);
    sprintf(buff,"%d",a);

    // Converting float to string
    std::string str1 = std::to_string(12.10);
    // Converting float to string
    std::string str2 = std::to_string(12.10);

    cout<<s<<endl;
    cout<<buff<<endl;
    cout<<str1<<endl;
    cout<<str2<<endl;
    return 1;
}