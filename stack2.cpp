#include<iostream>
#include<stack>
using namespace std;
void recursivepro(stack<int>s,stack<int>&result){
if(s.empty()){
    return;
}
int ans=s.top();
s.pop();
recursivepro(s,result);
result.push(ans);
}
void print(stack<int> result){
while(!result.empty()){
    cout<<result.top()<<" ";
    result.pop();
}
}
int main(){
    stack<int>d;
    stack<int>l;
    d.push(10);
    d.push(20);
    d.push(30);
    d.push(40);
    recursivepro(d,l);
    print(l);
    return 0;
}