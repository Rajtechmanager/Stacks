#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool detectbracket(string str){
stack<int>s;
for(int i=0;i<str.length();i++){
    if(str[i]=='(' or str[i]=='{' or str[i]=='['){
        s.push(str[i]);
    }
    else{
        if(str[i]=='}' and s.top()=='{' and !s.empty()){
            s.pop();
        }
         else if(str[i]==']' and s.top()=='[' and !s.empty()){
             s.pop();
        }
         else if(str[i]==')' and s.top()=='(' and !s.empty()){
             s.pop();
        }
        else{
            return false;
        }
    }
}
return s.empty();

}
int main(){
    //(([{}]))
    string str;
    cout<<"please enter the input";
    cin>>str;
    cout<<detectbracket(str);
    return 0;
}