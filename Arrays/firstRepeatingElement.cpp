//Given Aan array arr[] of size N. The task is to find the first repeating
//element in the array of integers, i.e., an element that occurs more than
//once and whose index of first occurence is smallest.
//Constrainsts:
// 1 <= N <= 10^6
// 0 <=Ai <= 10^6

//BAse iDea - TO check if an element is repeating, we maintain an array
// idx[], which stores the first occurences (index) of a particular 
//element a[i]
//Approach - Initialize the idx[] with -1, and minidx with INT_MAX
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
    const int N = 1e6+2;
    int idx[N];
    for(int i=0;i<N;i++){
        idx[i]=-1;
    }
    int minidx = INT_MAX;
    
    for(int i=0;i<n;i++){
        if(idx[a[i]]==-1){
            idx[a[i]]= i;
        }
        else{
            minidx = min(minidx, idx[a[i]]);
        }
    }
    cout<<"First Repeating  "<<minidx+1<<endl;
return 0;
}
