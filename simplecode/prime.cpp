#include<iostream>
#include<cmath>
using namespace std;
int checkprime(int n){
    bool flag = 0;
   for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
        cout<<"non-prime";
        flag=1;
        break;
    }
   }
   if(flag == 0){
    cout<<"Prime" <<endl;
   }

   return 0;
}

int main(){
    int n;
    cin >> n;
    checkprime(n);
}