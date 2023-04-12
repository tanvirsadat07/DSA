
#include <iostream>

#include <vector>
using namespace std;
// Function to Reverse the array
void merge (int nums[], int s,int e, int mid)
{
    vector<int> temp;

    int left=s;
    int right=mid+1;


    while(left<mid&&right<e){


        if(nums[left]>nums[right]){

            temp.push_back(nums[right++]);
        }

        else{

              temp.push_back(nums[left++]);
        }
    }




while(left<mid){

  temp.push_back(nums[left++]);

}

while(right<e){


    temp.push_back(nums[right++]);
}




for(int i=s;i<e;i++){

    nums[i]=temp[i];
}

   
}

void sort1(int arr[], int s,int e){

    
    if(s>e) return ;
    
    int mid=(e-s)+s/2;


   sort1(arr,s,mid);
   sort1(arr,mid+1,e);
   merge(arr, s,e,mid);



    }





int main()
{
  int arr[] = { 2, 7, 4, 13, 0};
  
  int left=0;
 int right=sizeof(arr)/sizeof(arr[0]);

 sort1( arr ,left ,right-1);


for(int i=left;i<right;i++){

   cout<<arr[i]<<endl;
}


  

  return 0;
}


