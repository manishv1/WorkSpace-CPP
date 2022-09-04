#include<bits/stdc++.h>
using namespace std;
 

template <typename T>
void display(vector<T> a)
{
    for (int i = 0; i < a.size(); i++)
    {
        std::cout << i<<"..."<< a[i] << std::endl;
        
    }
    

}
 

template <typename T>

 int bSearch(vector<T> &v, T t)
 {
     int sz, l,r,mid;

     sz = v.size();
     l = 0;
     r = sz -1;

    sort(v.begin(),v.end());
    display<T>(v);
    while (l <= r)
    {
  
  
        mid = (l+r)/2;
         
        if (v[mid] == t)
        {
            /* code */
            cout<<"target is at index.. "<<mid<<"   target value... "<<v[mid]<<endl;
            return mid;
        }
        else if (v[mid] > t)
        {
                r = mid -1;   
        }
        else
        {
            l = mid + 1;
        }
             
     }

     return -1; 
 }
 
 
int main()
{

    vector<string> vs = {"ASD","qwe","per","zxc"};
    //vector<int> v = {0,1,2,3,4,5,6,7,8};
    //sort(v.begin(), v.end());

    cout<<bSearch<string>(vs,"per");
    return 0;
}