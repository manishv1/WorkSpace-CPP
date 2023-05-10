#include <iostream>

//https://www.youtube.com/watch?v=Fy7p4ADLwow&list=PLFKexf2NBjmP4OdUPy21-0TWHsepAKSUw&index=10

using namespace std;



void generateSubSets(char* arr, char* out, int idx, int o)
{
	cout << out << endl;
	if (idx == 3) {
		return;
	}

	
	for (int i = idx; i < 3; ++i)
	{
		out[o] = arr[i];
		generateSubSets(arr, out, i + 1, o + 1);
		out[o] = '\0';
		
	}
	
}

̥̥void generateSubSets1(char *arr, char *out, int idx, int o)
{
	
	if (idx == 3) {

		out[o] = '\0';
		cout << out << endl;
		return;
	}

		
	out[o] = arr[idx];
	̥̥generateSubSets1(arr, out, idx + 1, o+1);
	generateSubSets1(arr, out, idx + 1, o);
	
		

}




int main()
{
	char arr[] = { 'a','b','c'};
	char out[4]{};

	generateSubSets(arr, out, 0, 0);
	cout << "Running another version of dfs" << endl << endl;
	generateSubSets1(arr, out, 0, 0);
	return 0;
}