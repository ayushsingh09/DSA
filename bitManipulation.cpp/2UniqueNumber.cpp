#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int setBit(int n , int pos){
    return ((n & (1<<pos))!=0);
}
void unique(int a[],int n){
    int xorSum =0 ;
    for(int i=0;i<n;i++){
        xorSum ^= a[i];
    }
    int tempXor = 0;
    int setBit = 0,pos;
    while(setBit!=1){
        setBit = xorSum & 1;
        pos++;
        xorSum=xorSum>>1;
    }
    int newXor = 0;
    for(int i=0;i<n;i++){
        if(setBit(a[i],pos-1))
            newXor ^= a[i];
    }
    cout<<newXor<<endl;
    cout<<newXor^tempXor<<endl;
}
int main(){
    int a[] = {1,2,3,1,2,3,5,7};
    unique(a,8);
    return 0;
}