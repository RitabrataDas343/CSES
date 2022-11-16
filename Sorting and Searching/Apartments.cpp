#include <bits/stdc++.h>

typedef long long int lli;
typedef long long ll;
typedef long double ld;
typedef int_fast64_t fast64;

#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
    
#define ln(x) x.length()
#define pi 3.1415926535
#define f(i, a, b) for (lli i = a; i < b; i++)
#define rf(i, a, b) for (lli i = a; i >= b; i--)
#define all(x) x.begin(), x.end()

#define Yes cout << "YES" \
                 << "\n";
#define No cout << "NO" \
                << "\n";
#define auto_init(v, x) \
    for (auto &x : v)   \
        cin >> x;
#define auto_display(v, x) \
    for (auto x : v)       \
        cout << x << " ";  \
    cout << endl;
#define auto_displayln(v, x) \
    for (auto x : v)         \
        cout << x << endl;
    
#define vi vector<int>
#define vc vector<char>
#define vbool vector<bool>
#define vll vector<ll>
#define vst vector<string> 
#define pb(x) push_back(x);

#define mpi map<int, int>
#define mpci map<char, int>
#define mpll map<ll, ll>
#define pii pair<int, int>
#define inf INT64_MAX

const lli mod = 1e18;
    
using namespace std;
    
int main(){
    IO
    lli n, m, k, a;
    cin >> n >> m >> k;
    vll v1, v2;
    f(i, 0, n){
        cin >> a;
        v1.pb(a);
    }
    f(i, 0, m){
        cin >> a;
        v2.pb(a);
    }
    sort(all(v1));
    sort(all(v2));
    lli lp1 = 0, lp2 = 0, count = 0;
    while(lp1 < v1.size() and lp2 < v2.size()){
        if(v2[lp2] <= v1[lp1] + k and v2[lp2] >= v1[lp1] - k){
            count++;
            lp2++;
            lp1++;
        } else if (v2[lp2] < v1[lp1] - k){
            lp2++;
        } else if(v2[lp2] > v1[lp1] + k){
            lp1++;
        }
    }
    cout << count << endl;
    return 0;
}
