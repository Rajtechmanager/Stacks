#include<iostream>
#include<stack>
using namespace std;
void insertatbottom(stack<int>&s,int val){
if(s.empty()){
    s.push(val);
    return;
}
int i=s.top();
s.pop();
insertatbottom(s,val);
return s.push(i);
}
void print(stack<int>s){
while(!s.empty()){
    cout<<s.top();
    s.pop();
}
}
int main(){
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    insertatbottom(st,6);
    print(st);
    return 0;
}