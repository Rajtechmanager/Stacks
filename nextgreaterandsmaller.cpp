#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> nextgreaterlele(vector <int> vec){
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
    // next g ele
    //time complexty o(n);
    //space o(n);
    int n;
    cout<<"enter the size of vec";
    cin>>n;
    vector<int>vec(n);
    vector<int>ansvec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
     
    ansvec=nextgreaterlele(vec);
    cout<<endl;
    for(int j=0;j<ansvec.size();j++){
        cout<<ansvec[j]<<" ";
    }
    return 0;
}