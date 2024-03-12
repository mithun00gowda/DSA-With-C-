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
    int ans = fact(n);
    cout<<ans<<endl;
    return 0;
}