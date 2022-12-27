
#include <bits/stdc++.h>

using namespace std;
void sub(int  input[],int n,vector<int> &ans,int ind,int sum,int s){
    if(ind==n){
        if(s==sum){
            for(auto i: ans){
                cout<<i<<" ";
            }
            cout<<endl;
            
        }return;
    }
    ans.push_back(input[ind]);
    s+=input[ind];
    sub(input,n,ans,ind+1,sum,s);
    ans.pop_back();
    s-=input[ind];
    sub(input,n,ans,ind+1,sum,s);
}

int main()
{
   int a[]={1,2,3};
   vector<int> ans;
   sub(a,3,ans,0,3,0);
}
