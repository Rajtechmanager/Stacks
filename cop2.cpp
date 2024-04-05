#include<iostream>
#include<stack>
using namespace std;
void copystack(stack<int>&s){
if(s.size()==1){
    s.pop();
    return ;
}
int st=s.top();
s.pop();
copystack(s);
s.push(st);
}
void print(stack<int>s){
while(!s.empty()){
    cout<<s.top();
    s.pop();
}
}
int main(){
    stack<int> s;
     stack<int> res;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    copystack(s);
    print(s);
    return 0;
}