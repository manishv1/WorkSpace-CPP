#include <iostream>
#include <stack>
#include <algorithm>
#include <queue>
#include <chrono>
#include <thread>
//#include <ctime>
#include <unistd.h>

using namespace std;

int main(){
 
   
     //srand() sets the seed which is used by rand to generate “random” numbers.
     // If you don’t call srand before your first call to rand, it’s as if you had called srand(1)
     // to set the seed to one. // Use current time as seed for random generator
    srand(time(0));
  
    priority_queue<int> pq;
    int n;

    cout<<"Enter number of integer ";
    cin>>n;
    for(int i = 0 ; i < n ; ++i){

        int k = rand()%n;
        
        pq.push(k);
    }


    while( !pq.empty())
    {

        cout<<pq.top()<<"  ";
        pq.pop();
    }
    cout<<endl;

    return 1;
}