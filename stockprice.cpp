#include<bits/stdc++.h>
using namespace std;
vector<int> previousgreatervec(vector <int> vec){
stack<int>s;
vector<int>ans(vec.size(),-1);
s.push(0);
for(int i=1;i<vec.size();i++){
    while(!s.empty() and vec[i]>vec[s.top()]){
        ans[s.top()]=vec.size()-1-i;
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
    //stock price previous elements are smaller then current;
    int n;
    cout<<"enter the length";
    cin>>n;
    vector<int>vec(n,-1);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    reverse(vec.begin(),vec.end());

    vector<int>ansvec(n,-1);

    ansvec=previousgreatervec(vec);
    reverse(ansvec.begin(),ansvec.end());
    for(int i=0;i<ansvec.size();i++){

    cout<<i-ansvec[i]<<" ";
        
        
        
    }

    return 0;
}