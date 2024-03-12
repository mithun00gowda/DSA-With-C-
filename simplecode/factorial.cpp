#include<iostream>
using namespace std;

int checkfact(int n){
    if(n>0){
        return n * checkfact(n-1);
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    cout<<checkfact(n);
    return 0;
}