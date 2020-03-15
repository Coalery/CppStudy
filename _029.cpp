#include <iostream>

#include <stack>
#include <queue>

using namespace std;

int main(int argc, char* argv[]) {
    // Stack
    int decimal = 123;
    stack<int> st;

    do {
        st.push(decimal % 2);
        decimal /= 2;
    } while(decimal);

    while(!st.empty()) {
        cout << st.top();
        st.pop();
    }
    cout << endl;
    
    // Queue
    int n = 20;
    queue<int> que;
    que.push(0);
    que.push(1);

    for(int i=2; i<n; i++) {
        int temp = que.front();
        cout << temp << " ";
        que.pop();
        que.push(temp + que.front());
    }
    cout << endl;

    // Piriority Queue
    priority_queue<int> pq;
    pq.push(10);
    pq.push(23);
    pq.push(20);
    pq.push(14);

    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    return 0;
}