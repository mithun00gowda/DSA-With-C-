#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
  
    cin>>n;
    int original = n;
    int armstrong = 0;
    while(n>0){
        int last = n%10;
        armstrong += pow(last,3);
        cout<<armstrong<<endl;
        n = n/10;
    }
    cout<<armstrong<<endl;
    if(armstrong == original){
        cout<<"armstrong is true";
    }else{
        cout<<"armstrong is false";
    }

    return 0;
}
