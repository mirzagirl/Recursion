#include<bits/stdc++.h>
using namespace std;

int rec(int n){
    if(n==0)return n;
    cout<<"bf"<<n<<endl;
    return rec(n-1);
    cout<<"af"<<n<<endl;
}

int main(){
    int n;
    cin>>n;
    cout<<endl;
    rec(5);
    return 0;
}