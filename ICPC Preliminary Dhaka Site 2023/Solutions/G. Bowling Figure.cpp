#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl "\n"
#define exit exit(EXIT_SUCCESS);
#define all(x)  x.begin(), x.end()

const long long MOD = 1e9+7;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int t;
    cin >> t;
    for (int i=1; i<=t; i++) {
        string s;
        cin >> s;
        int run=0, w=0, sum=0;
        int x = s.length()/6.00;
        float over = x + ((s.length()%6)/10.0);
        for(auto i : s) {
            if(i=='W') {
                w++;
            }
        }
        for (auto i : s) {
            if(isalpha(i)) {
                continue;
            }
            run+=i-'0';
        }
        cout << fixed << setprecision(1) << over << " " << (over<=1.0? "Over " : "Overs ") << run << (run<2? " Run " : " Runs ") << w << (w<2? " Wicket." : " Wickets.") << endl;
    }
    return (EXIT_SUCCESS);
}
