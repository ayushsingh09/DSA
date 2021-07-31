#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
// complexity - O(n)
using namespace std;
int linearSearch(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements for array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the number to be searched"<<endl;
    cin>>key;
    
    cout<<linearSearch(arr,n,key);
    
}