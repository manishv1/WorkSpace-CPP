#include <iostream>

using namespace std;


int arr[] = {1,2,3,4,5,6,7};


/* Function to reverse an array. An array can be
reversed in O(n) time and O(1) space. */
void reverse(int arr[], int l, int r)
{
	if (l < r) {
		swap(arr[l], arr[r]);
		reverse(arr, ++l, --r);
	}
}



void reverseArray(int arr[], int len){


       for(int i = 0 ; i < len/2 ; ++i)
       {
            std::swap(arr[i], arr[len -1 -i]);

       }
}

void print(int arr[], int len){

    cout<<endl<<endl;
    for(int i = 0; i < len ; ++i){
        cout<<arr[i]<<" ";
    }

    cout<<endl<<endl;
}


int main(){

    int len = sizeof(arr)/sizeof(arr[0]);
    cout<<"arr size "<< len<<endl;
    print(arr,len);
    reverseArray(arr,len);
    print(arr,len);
}