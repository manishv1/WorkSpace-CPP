#include <iostream>
#include <vector>
using namespace std;

class Vector {
	vector<int> myVec;

public:
	Vector(vector<int> newVector) {
	    myVec = newVector;
	}
	
	void print() {
		for (int i = 0; i < myVec.size(); i++)
			cout << myVec[i] << " ";
	}
	
};

int main() {
    vector<int> vec;
    
	vec.push_back(5);
	vec.push_back(10);
	vec.push_back(15);
	
	Vector vect(vec);
	vect.print();
	// 5 10 15 
}