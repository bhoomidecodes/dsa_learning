#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter sizde of an array";
    cin>>n;

    int arr[n];
    cout<<"enter elements of array";
    for (int i =0;i<n;i++){
    cin>>arr[i];
    }

    for (int i=0;i<n;i++){
        cout<<arr[i];
    }

int min = arr[0];
for (int i =0;i<n;i++){
    if(arr[i]<min){
        min = arr[i];
    
    }

}
 cout<<"minimum value is "<<min;
return 0 ;
}
