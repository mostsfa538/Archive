#include<bits/stdc++.h>
#define Mokhtar ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;
void solve() {
    ll a;
    cin >> a;
    if (a <= 2)
        cout << -1;
    else if (a % 2 == 0)
        cout << a / 2 - 1;
    else cout << a / 2;
}
int main() {
    Mokhtar;
    solve();
}
