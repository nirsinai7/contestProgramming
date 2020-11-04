#include <iostream>
using namespace std;
#define ll long long

ll div(ll a, ll b, ll x, ll i) {
    if (x < b || x % b != 0) return x;
    ll j, y, max;

    max = 1;
    j = i;
    while (j <= x / 2) {
        if (x % j == 0) {
            y = div(a, b, x / j, j);
            if (y == x / j) return y;
            if (y > max) max = y;
        }
        j++;
    }
    return max;
}

int main() {
    ll i, t, a, b, j, x;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> a >> b;
        x = div(a, b, a, 2);
        cout << x << endl;
    }
}



