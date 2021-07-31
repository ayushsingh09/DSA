// An arithmetic array is an array that contains at least two integers 
// and the differences between consecutive integers are equal. 
// For example, [9, 10], [3, 3, 3], and [9, 7, 5, 3] are arithmetic arrays, 
// while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are not arithmetic arrays.

// Sarasvati has an array of N non-negative integers. The i-th integer 
// of the array is Ai. She wants to choose a contiguous arithmetic subarray
//  from her array that has the maximum length. Please help her to determine 
//  the length of the longest contiguous arithmetic subarray.
//Find the sum of each subArray of the given array.

//Sample     10  7  4  6  8  10  11
//Length       -3 -3  2  2  2   1
//Longest Arithmetic Length = 4,4,8,10
//INTUITION AND APPROACH -
// Loop over the array and find the array
// Maintain the following - 
// 1. Previous Common Difference (pd)
// 2 Current Arithmetic Subarray Length (curr)
// 3. Max Arithmetic Subarray Length (ans)

//Cases : 1st case - pd == A[i]-A[i-1]
//                     then Current ans increases by 1
//                     ans = max(ans,curr)
//        2nd case - pd != A[i]-A[i-1]
//                     then Current ans =2
//                      because every subarray of atleast 2 array has the
//                      length of 2.
//My Code
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of aray";
    cin>>n;
    int a[n];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pd = a[1]-a[0];
    int ans =2;
    int curr = 2;

    for(int i=2;i<n;i++){
        if(pd==a[i]-a[i-1]){
            curr++;
        }
        else {
            curr = 2;
            pd = a[i]-a[i-1];
        }
        ans = max(ans, curr);
        cout<<ans<<endl;
    }
    return 0;
}

//Dhatterwal Code
// #include<iostream>
// #include<vector>
// #include<string>
// #include<algorithm>
// #include<math.h>
// using namespace std;
// // compexity - O
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
    
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     int ans = 2; //length
//     int pd = a[1]-a[0];
//     int j = 2; //since difference of 1 is being stored at pd initially.
//     int curr = 2; //length

//     while(j<n){
//         if(pd == a[j]-a[j-1]){
//             curr++;
//         }
//         else{
//             pd = a[j]-a[j-1];
//             curr =2;
//         }
//         ans = max(ans,curr);
//         j++;
//     }
//     cout<< ans << endl;
//     return 0;
// }



















