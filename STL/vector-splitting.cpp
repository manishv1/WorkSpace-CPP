#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
 
void print(std::vector<int> v)
{
    for (auto it = v.begin(); it != v.end(); ++it) {
        std::cout << *it << ' ';
    }
 
    std::cout << std::endl;
}
 
int main()
{
    std::vector<int> v = { 1, 2, 3, 4, 5 };
 
    std::vector<int> left;
    std::vector<int> right;
    std::vector<int>::iterator middleItr(v.begin() + v.size() / 2);
 
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (std::distance(it, middleItr) > 0) {
            left.push_back(*it);
        }
        else {
            right.push_back(*it);
        }
    }
 
    print(left);
    print(right);
 
    return 0;
}