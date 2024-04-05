#include<iostream>
#include<stack>
using namespace std;
void copystack(stack<int>s,stack<int>&res){
if(s.size()==1){
    return ;
}
int st=s.top();
s.pop();
 copystack(s,res);
res.push(st);
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
    copystack(s,res);
    print(res);
    return 0;
}