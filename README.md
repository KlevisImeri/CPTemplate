```c++
#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;
using str = string;
using ld = long double;
#define vec vector
#define arr array
#define all(x) x.begin(), x.end()
#define p(x) cout << (x) << endl
#define pv(x) for(auto& _:x){cout<<(_)<<' ';}cout<<endl;
#define def(X) auto operator<=>(const X&) const = default;


#ifdef LOCAL
void print(char x){cerr<<'\''<<x<<'\'';}
void print(string &x){cerr<<'"'<<x<<'\"';}
void print(const char* x){cerr<<'"'<<x<<'"';};
void print(bool x){cerr<<(x?"true":"false");}

template <typename T>
void print(T& x);

template <typename A, typename B>
void print(pair<A, B>& p) {
  cerr<<"{";
    print(p.first);
    cerr<<',';
    print(p.second);
    cerr<<"}";
}


template <typename T, typename Container>
void print(queue<T, Container> q) {
    cerr << '[';
    bool first = true;
    while (!q.empty()) {
        if (!first) cerr << ", ";
        print(q.front());
        q.pop();
        first = false;
    }
    cerr << ']';
}

template <typename T, typename Container, typename Compare>
void print(priority_queue<T, Container, Compare> pq) {
    cerr << '[';
    bool first = true;
    while (!pq.empty()) {
        if (!first) cerr << ", ";
        print(pq.top());
        pq.pop();
        first = false;
    }
    cerr << ']';
}

template <typename T, typename Container>
void print(stack<T, Container> st) {
    vector<T> elements;
    while (!st.empty()) {
        elements.push_back(st.top());
        st.pop();
    }
    reverse(all(elements));
    print(elements);
}

template <typename T>
void print(T& x){
  if constexpr(is_arithmetic_v<T>) cerr<<x;
    else if constexpr(requires{x.print();}) x.print();
    else{
        int f=0;
        cerr<<'{';
        for(auto &i:x)
            cerr<<(f++ ?",":""),print(i);
        cerr<<"}";
    }
}

void _print() {}
template <typename T, typename... V> 
void _print(T t, V... v) {
  print(t);
  if (sizeof...(v)) cerr<<", ";
  _print(v...);
}

#define d(x...) cerr<<"["<<#x<<"]: ";_print(x);cerr<<"\n";
#define out(x...) void print(){cerr<<'{';_print(x);cerr<<"}";}

#else
#define d(x...)
#define out(x...)
#endif
    

void solve() {
    // Basic types
    int num = 42;
    char ch = 'A';
    bool flag = true;
    string text = "Hello World";
    d(num, ch, flag, text);
    
    // Vector examples
    vec<int> v1 = {1, 2, 3, 4, 5};
    vec<string> v2 = {"apple", "banana", "cherry"};
    vec<pair<int, int>> v3 = {{1, 2}, {3, 4}, {5, 6}};
    d(v1, v2, v3);
    
    // Array
    arr<int, 5> a1 = {10, 20, 30, 40, 50};
    d(a1);
    
    // Set examples
    set<int> s1 = {5, 2, 8, 1, 9};
    set<string> s2 = {"zebra", "apple", "banana"};
    d(s1, s2);
    
    // Multiset
    multiset<int> ms1 = {3, 1, 4, 1, 5, 9, 2, 6, 5};
    d(ms1);
    
    // Map examples
    map<int, string> m1 = {{1, "one"}, {2, "two"}, {3, "three"}};
    map<string, int> m2 = {{"apple", 5}, {"banana", 3}, {"cherry", 8}};
    d(m1, m2);
    
    // Multimap
    multimap<int, string> mm1 = {{1, "first"}, {1, "uno"}, {2, "second"}, {2, "dos"}};
    d(mm1);
    
    // Unordered containers
    unordered_set<int> us1 = {10, 20, 30, 40};
    unordered_map<string, int> um1 = {{"key1", 100}, {"key2", 200}};
    d(us1, um1);
    
    // Queue
    queue<int> q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    d(q1);
    
    // Deque
    deque<int> dq1 = {1, 2, 3, 4, 5};
    d(dq1);
    
    // Priority Queue (max heap by default)
    priority_queue<int> pq1;
    pq1.push(30);
    pq1.push(10);
    pq1.push(50);
    pq1.push(20);
    d(pq1);
    
    // Min heap priority queue
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(30);
    pq2.push(10);
    pq2.push(50);
    pq2.push(20);
    d(pq2);
    
    // Stack
    stack<int> st1;
    st1.push(100);
    st1.push(200);
    st1.push(300);
    d(st1);
    
    // Nested containers
    vec<vec<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    d(matrix);
    
    map<string, vec<int>> groups = {
        {"even", {2, 4, 6, 8}},
        {"odd", {1, 3, 5, 7}},
        {"primes", {2, 3, 5, 7}}
    };
    d(groups);
    
    
    // Custom struct example with def macro
    struct Point {
        int x, y;
        out(x,y)
        def(Point);  // Auto-generates comparison operators
    };
    
    vec<Point> points = {{1, 2}, {3, 1}, {2, 4}};
    sort(all(points));  // Works because of def(Point)
    d(points)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
```
