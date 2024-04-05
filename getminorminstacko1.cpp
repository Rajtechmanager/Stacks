#include<bits/stdc++.h>
using namespace std;

class MinStack {
    long long min;
    stack<long long> st;

public:
    MinStack() {
        this->min = INT_MAX;
    }

    void push(int val) {
        if (st.empty()) {
            st.push(val);
            min = val;
        } else {
            st.push(val - min);
            if (min > val) {
                min = val;
            }
        }
    }

    void pop() {
        if (!st.empty()) {
            if (st.top() < 0) {
                min = min - st.top();
                st.pop();
            } else {
                st.pop();
            }
        }
    }

    int top() {
        if (st.size() == 1) {
            return st.top();
        } else {
            if (st.top() > 0) {
                return st.top() + min;
            } else {
                return min;
            }
        }
    }

    int getMin() {
        return min;
    }
};

int main() {
    MinStack obj;
    obj.push(3);
    obj.push(5);
    obj.push(2);
    obj.push(1);

    cout << "Top element: " << obj.top() << endl;
    cout << "Minimum element: " << obj.getMin() << endl;

    obj.pop();

    cout << "After popping, top element: " << obj.top() << endl;
    cout << "After popping, minimum element: " << obj.getMin() << endl;

    return 0;
}
