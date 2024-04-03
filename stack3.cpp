#include<iostream>
#include<stack>
using namespace std;
void recursive(stack<int>s,stack<int>&r,int data){
    if(s.empty()){
        r.push(data);
        return ;
    }
    int curr=s.top();
    s.pop();
    recursive(s,r,data);
    r.push(curr);

}
int main(){
    stack<int> s;
    stack<int> r;
    s.push(1);
     s.push(2);
      s.push(3);
    recursive(s,r,10);
    while(!r.empty()){
        cout<<r.top();
        r.pop();
    }
    return 0;
}