#include<iostream>
using namespace std;
class stack{
   int *arr;
   int capacity;
   int top;
   public:
stack(int c){
   this-> capacity=c;
   arr=new int[c];
   top=-1;
}
 void push(int data){
if(top==capacity-1){
   cout<<"stack is full";
   return;
}
top+=1;
arr[top]=data;
}
void pop(){
   if(top==-1){
      cout<<"stack is empty";
      return;
   }
   top--;
}
int ctop(){
   return arr[top];
}
int size(){
   return this->top+1;
}
bool isempty(){
   if(top==-1){
      return true;
   }
}
bool isFull(){
   if(top==capacity-1){
      return true;
   }
}
};
 int main(){
    stack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
   cout<<s.ctop()<<endl;
    s.push(4);
    s.push(5);
    return 0;
 }