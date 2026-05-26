#include<iostream>
using namespace std;
int main(){
    int n;
 
    cout<<"enter size of an array";
    cin>>n;

    int arr[n];
    cout<<" enter elements of array";


    for (int i =0;i<n;i++){
    cin>>arr[i];
    }
    
  for (int i =0;i<n;i++){
    cout<<arr[i]<<" ";
  }

  //comparison loop
  int max = arr[0];
  for (int i = 1;i<n;i++){
    if(arr[i]>max){
   max=arr[i];
    }
  }
  cout<<"max is "<<max;
return 0;
}

