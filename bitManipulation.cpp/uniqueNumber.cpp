//Unique Number must not be reapeated.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int uniqueNumber(int a[],int n){

    int xorSum = 0;
    for(int i=0;i<n;i++){
        xorSum=xorSum^a[i];
    }
    return xorSum;
}

int main(){
    int a[]= {1,2,3,4,1,2,3};
    cout<<uniqueNumber(a,7);
    return 0;
}