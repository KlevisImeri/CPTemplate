// clang-format off
#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using str = string;
#define vec vector
#define arr array
#define all(x) x.begin(), x.end()
#define p(x) cout << (x) << endl
#define pv(x) for(auto& _:x){cout<<(_)<<' ';}cout<<endl;

#ifdef LOCAL
#include "debug.cpp"
#else
#define d(x) 69
#endif

void solve() {
	int p = 4;
	p("Hello World");
	vec<int> a = {1, 2, 3, 4};
	d(a);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin>>t; while(t--)solve();
}
