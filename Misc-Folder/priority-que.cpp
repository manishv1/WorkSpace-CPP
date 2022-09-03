#include <iostream>
#include <unordered_map>
#include <string.h>


using namespace std;
template<typename k, typename v >
void print_map(unordered_map < k,v> const &m)
{
    for(auto const &pair : m){

        cout<<"{"<< pair.first<<":"<<pair.second<<"}"<<endl;
    }

}

unordered_map<string,int> m = {{"Z",100},{"B",2},{"C",3},{"a",4}};
int main()
{
   m.insert({"E",5});
   m.insert({"Z",200});
   m.emplace("R",4);  // Create and insert
   m.at("a") = -1;   // with at you can use try catch block
   print_map(m);
   m.at("a") += 1;   // with at you can use try catch block
   print_map(m);
   return 1;
}