#include<iostream>
#include<queue>
#include<unordered_map>
#include<string.h>



using namespace std;

unordered_map<string ,int > m;
priority_queue<unordered_map< string , int >>pq;

// add data to map
void fill_map()
{
    m.emplace("Apple",1);
    m.emplace("Banana",2);
    m.emplace("Cauliflower",3);
    m.emplace("Dogy",4);
    m.emplace("Elephent",5);
    
}

// add map elements to priority queue
void add_to_pq(priority_queue<unordered_map< string ,int >> &pq)
{
    for( auto i: m)
    pq.push(i);
}

int main()
{



    return 1;

}