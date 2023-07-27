#include<bits/stdc++.h>
#define Mokhtar ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;
void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    int x = a + b + c, y = (a + b) * c, z = a * (b + c), w = a * b * c;
    cout << max(max(x, y), max(z, w));
}
int main() {
    Mokhtar;
    solve();
}
