#include <iostream>
#include <stack>
using namespace std;

stack<int> pop(stack<int> &s) {
    if (s.size() == 1) {
        return s;
    }
    int ss = s.top();
    s.pop();
    stack<int> result = pop(s);
    s.push(ss);
    return result;
}

void print(stack<int> &s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    
    stack<int> ans = pop(s);
    print(ans);

    return 0;
}
