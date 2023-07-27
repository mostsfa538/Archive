#include<bits/stdc++.h>
#define Mokhtar ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;
void solve() {
    ll a,b,c;
    cin>>a>>b>>c;
    b>c?cout<<(ll)pow(a,b-c):cout<<(ll)pow(a,c-b);
}
int main() {
    Mokhtar;
    solve();
}
