#include <iostream>
#include <stack>

using namespace std;


void insertAtEnd(stack<int> &s, int d)
{ 
     int tl;
     if( s.empty())
     {
         s.push(d);
         cout<<"size ="<<s.size()<<endl;
     }
     else
     {
        tl = s.top();
        s.pop();
        insertAtEnd(s,d);
        cout<<"adding......"<<tl<< endl ;
        s.push(tl);
     }

    // Remove all evlemnts form stsck
       
    // Inser the data 

    // Add All elements removed in step One
    return;
}

int main()
{

    stack<int> s;
    for(int i = 0; i < 5 ;++i)
    {
        s.push(i);       
    } 
    
    insertAtEnd(s,-1);
    while(!s.empty())
    {
        cout<< s.top()<<endl;
        s.pop();
    }    return 1;
}