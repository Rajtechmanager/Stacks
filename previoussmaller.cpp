#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
vector<int> prevsmaller(vector<int> vec){
  vector<int>ans(vec.size(),-1);
    stack<int> s;
    s.push(0);
    for(int i=1;i<vec.size();i++){
        while(!s.empty() and vec[i]<vec[s.top()]){
            ans[s.top()]=vec[i];
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){
        ans[s.top()]=-1;
        s.pop();
    }
    return ans;
}
int main(){
    int a;
    cout<<"enter the size";
    cin>>a;
    vector<int>ansvec(a,-1);
    vector<int>vec(a,-1);
    // cout << *vec.begin() << endl;
    
    for(int i=0;i<a;i++){
        cin>>vec[i];
    }
    reverse(vec.begin(),vec.end());
    ansvec=prevsmaller(vec);
    reverse(ansvec.begin(),ansvec.end());
    for(int i=0;i<ansvec.size();i++){
        cout<<ansvec[i]<<" ";
    }
    return 0;
}