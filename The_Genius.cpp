#include<bits/stdc++.h>
#define Mokhtar ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;
void solve() {
    ll a1,a2,b1,b2;
    cin >> a1 >> a2 >> b1 >> b2;
    ll a = a1 * a2;
    ll b = b1 * b2;
    if (a > b)
        cout <<"Alyaa is the genius";
    else if (a < b)
        cout<<"Amira is the genius";
    else
        cout<<"Everyone is genius";
}
int main() {
    Mokhtar;
    solve();
}
