#include<bits/stdc++.h>
using namespace std;
int fun(vector<int>vec){
stack<int>s;
int ans=INT_MIN;
s.push(0);
for(int i=1;i<vec.size();i++){
while(!s.empty() and vec[i]<vec[s.top()]){
    int x=vec[s.top()];
    s.pop();
int prev=(s.empty())?-1:s.top();
cout<<x<<" "<<i<<" "<<prev<<" "<<endl;
ans=max(ans,x*(i-prev-1));
}
cout<<i<<endl;
s.push(i);
}
while(!s.empty()){
int el=vec[s.top()];
s.pop();
int nge=vec.size();
int sge=s.empty()?-1:s.top();
cout<<el<<" " <<nge<<" "<<sge<<endl;
ans=max(ans,el*(nge-sge-1));
}
return ans;
}
int main(){
    //histogram contains water ;
    int n;
    cout<<"enter the input ";
    cin>>n;
    vector<int>vec(n,-1);
    for(int i=0;i<vec.size();i++){
        cin>>vec[i];
    }
    int ansvec;
    ansvec=fun(vec);
    cout<<ansvec;
    return 0;
}