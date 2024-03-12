#include<iostream>
#include<cmath>
using namespace std;

int fact(int n){
    int factor = 1;
    for(int i=1;i<=n;i++){
         factor *= i;
    }
    return factor;
}
int main(){
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j) * fact(i-j))<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}