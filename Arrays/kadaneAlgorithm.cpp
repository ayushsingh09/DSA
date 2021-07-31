//Complexity of KADANE ALGORITHM = O(n)
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
#include<climits>
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
    int currSum = 0;
    int maxofSum = INT_MIN;
    for(int i=0;i<n;i++){
        currSum += a[i];
        if(currSum<0)
            currSum = 0;
        maxofSum = max(maxofSum, currSum);
    }
    cout<<maxofSum;





    // int maxSum = INT_MAX;
    // int currSum =0;
    // for(int i=0;i<n;i++){
    //     currSum+=a[i];
    //     if(currSum<0){
    //         currSum=0;
    //     }
    //     maxSum = max(maxSum,currSum);
    // }
    // cout<<maxSum<<endl;
return 0;
}