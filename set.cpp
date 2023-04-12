
#include<iostream>

#include<set>
using namespace std;

 
void duplicate_erase(string st, int n)
{
   set<char> s;
 
    

    for(int i=0;i<n;i++){

        s.insert(st[i]);
        
    }


int j=0;


for(auto x:s){

    cout<< x;
}


  

}
 
int main()
{
    string s=" hello";
    
    int n = s.size();
    duplicate_erase(s, n);

//      for(int i=0;i<n;i++){

//    cout<<arr[i]<<endl;
        
//     }
    return 0;
}