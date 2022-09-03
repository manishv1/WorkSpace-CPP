#include <iostream>
#include <deque>



// Other Ways to Create a C++ Deque8
/e fill constructor
//Here, we have initialized a deque of size 5 with values 12
//deque<int> deque1(5, 12);
//This is equivalent to

//deque<int> deque1 = {12, 12, 12, 12, 12};

//Create a deque from another deque.
//We can copy one deque to another using the range method initialization.

//deque<int> deque1 = {1, 2, 3, 4, 5};

// copy all elemnts of deque1 to deque2
//deque<int> deque2(deque1.begin(), deque1.end());

// copy elements from index 1 to index 2 of deque1
//deque<int> deque3(deque1.begin() + 1, deque1.begin() + 3);

//Insert Elements to a Deque
//push_back() - insert elements at the end
//push_front() - insert elements at the beginning




//Access Elements from a Deque
// front() - returns element at the front
// back() - returns element at the back
// at() - returns element at the specified index



//Change Elements of a Deque
// We can use the at() method to change the element of the deque. For example,

// change elements at the index
// nums.at(0) = 3;
// nums.at(1) = 4;



#include <iostream>
#include <deque>
using namespace std;

int main() {

  deque<int> nums {2, 3};

  cout << "Initial Deque: ";
  for (const int& num : nums) {
    cout << num << ", ";
  }
  
  // add integer 4 at the back
  nums.push_back(4);
   
  // add integer 1 at the front
  nums.push_front(1);
  
  cout << "\nFinal Deque: ";
  for (const int& num : nums) {
    cout << num << ", ";
  }
  
  return 0;
}