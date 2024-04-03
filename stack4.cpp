#include<iostream>
#include<string>
using namespace std;
//cheak bracket sequence or not
//their are 3 types of bracket ( paranthis [ square bracket ]) {curly bracket }
//(({})) () balanced (() unbalanced 
int stringcheaker(string str){
     int c=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='('){
            c++;
        }
        else{
            c--;
        }
    }
    return c;
}
int main(){
    string s;
    cout<<"enter the string ";
    cin>>s;
   int ans=stringcheaker(s);
   if(ans==0){
    cout<<"ok";
   }
   else{
    cout<<"not ok";
   }

    return 0;
}