#include<iostream>
#include<vector>
using namespace std;


void merge (int arr1[],int arr2[], int m, int n, vector<int> &a ){

int i=0;
while(i<m){

    a.push_back(arr1[i]);
    i++;
}

int j=0;
while(j<n){

    a.push_back(arr2[j]);
    j++;
}

}


void bublesort(vector<int> &a){


   for(int i=0;i<a.size()-1;i++){

    for(int j=i+1;j<a.size();j++){


        if(a[i]>a[j]){
            swap(a[j],a[i]);
        }
        
    }
   }




}
void mergeSortedArrays(int m, int n, int arr1[], int* arr2, vector<int>& a) {

    for (int i = 0; i < m; i++) {
        arr1[i] = a[i];
    }
    for (int j = m; j < n; j++) {
        arr2[j -m] = a[j];
    }
}





int main (){

int arr1[]={1,2,11};
int arr2[]={5,7};
vector <int> a;

int size1=sizeof(arr1)/sizeof(arr1[0]);
int size2=sizeof(arr2)/sizeof(arr2[0]);



merge(arr1,arr2,size1,size2, a);
bublesort(a);

mergeSortedArrays(size1,size2,arr1,arr2,a);

for(int i=0;i<a.size();i++){


    cout<<a[i]<<endl;
}


  cout<<"array1 "<<endl;

for(int i=0;i<size1;i++){
  

    cout<<arr1[i]<<endl;
}

    return 0;
}