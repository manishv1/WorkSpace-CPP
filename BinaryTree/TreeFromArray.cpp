#include<bits/stdc++.h>
using namespace std;
 

class node
{
    public:
        int data;
        node *lc;
        node *rc;
   
        node(int data){
            this->data = data;
            lc = NULL;
            rc = NULL;
        }    
};
 


vector<int> v = {500,450,1200,300,400,800,1600};
 

node *buildTree(node *root)
{

   int li, ri ;
   int n = v.size();

   int i = 0;
   li = 2*i + 1;
   ri = 2*i + 2;
  
   while( i < n/2 && li < n && lr < n  )
   {
        
       

       li = 2*i+1;
       ri = 2*i+2;

   }
}

node *makeTree(node *root, vector<int> v)
{

      while(v.size() != 0)
      {
         

      }




}



int main()
{
    
 
 
 
    return 0;
}