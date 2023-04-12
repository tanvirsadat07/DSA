
#include<iostream>

#include<map>
using namespace std;



int main()
{
    int arr[] = {2,1,3,4,2};

    map<int,int>m;
    
    int n = sizeof(arr) / sizeof(arr[0]);
   
     for(int i=0;i<n;i++){
       m[arr[i]]++;
   
        
    }


//searching for the majority element:
    for (auto x : m) {
       cout<<x.second<<endl;
    }


    return 0;
}