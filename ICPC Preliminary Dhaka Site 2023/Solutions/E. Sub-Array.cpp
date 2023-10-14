#include <bits/stdc++.h>
#include <initializer_list>
#include <scoped_allocator>
#include <system_error>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
using namespace std;
typedef long long ll;
typedef long long int int64;
#define input(v) for(auto &i : v) cin >> i
#define line(x) getline(cin, x)
#define endl "\n"
#define exit exit(EXIT_SUCCESS);
#define revArray(x, n) reverse(x, x+n);
#define all(x)  x.begin(), x.end()
#define ci const int
const long long MOD = 1e9+7;
using namespace std;
ci N = 1e5+5;
int n, a[N];

long long f(long long x) {
    return x*(x+1)/2;
}
int k = 0;
void Work() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    ll ans = f(n);
    for (int las = 1, i = 2; i <= n + 1; ++i) {
        if (i == n + 1 || a[i] != a[las]) {
            ans -= f(i - las), las = i;
        }
    }
    k++;
    cout << "Case " << k << ": " << ans << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        Work();
    }
    return (EXIT_SUCCESS);
}
