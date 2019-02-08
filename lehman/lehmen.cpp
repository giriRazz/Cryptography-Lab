#include<bits/stdc++.h>
using namespace std;


int main(){

    int p , a ;
    cout<< " enter p "<<endl;
    cin>> p;
    cout<<"enter a less than p "<<endl;
    cin>>a;
    unsigned long long v = (int)((p-1) / 2) ;
    cout<<"v: "<<v<<endl;

    unsigned long long value = pow(a , v);
    cout<<" value = " << value<<endl;
    unsigned long long val = value % p;
    cout<<"val: "<<val<<endl;

    if(val == 1 || val == -1){
       cout<<" p is prime number"<<endl;
    }else{
       cout<<" p is not prime number"<<endl;
    }


return 0;
}
