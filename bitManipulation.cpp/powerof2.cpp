#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
// power of 2 will always (n & n-1) = 0

bool isPowerOf2(int n){
    return (n && !(n & n-1));
}

int main(){
    cout<<isPowerOf2(16)<<endl;
    return 0;
}