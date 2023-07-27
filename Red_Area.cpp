#include<bits/stdc++.h>
#define Mokhtar ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
using namespace std;
void solve() {
    int a;
    cin >> a;
    cout <<fixed<<setprecision(6) << ((pow(.5 * a,2)- (3.141592 * pow(.25 * a,2)))/2) + .5 * .25 * a * .5 * a;
}
int main() {
    Mokhtar;
    solve();
}
