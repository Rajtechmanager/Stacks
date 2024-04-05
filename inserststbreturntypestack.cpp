#include<iostream>
#include<stack>
using namespace std;

stack<int> insertatbottom(stack<int>& s, int val) {
    if (s.empty()) {
        s.push(val);
        return s;
    }
    int i = s.top();
    s.pop();
    stack<int> result = insertatbottom(s, val);
    s.push(i);
    return s;
}

void print(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st = insertatbottom(st, 6); // Assign the result back to the stack
    print(st);
    return 0;
}
