//Given an unsorted array A of size N of non negative integers, find a 
// continuous subarray which adds to a given number S.
//subarray is always continuous.
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
