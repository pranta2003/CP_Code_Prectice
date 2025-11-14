/////////////////          PRANTA KUMER PANDIT            ///////////////
//                      Test Case Less Template                       ||
//                                                                    ||
//      BANGLADESH  UNIVERSITY OF BUSINESS AND TECHNOLOGY             ||
//                          INTAKE 52                                 ||
//                      DEPARTMENT OF CSE                             ||
//||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
//                      So, WELCOME TO ISHAN'S PARADISE               //
//                (-.-) Want to be a Secret tool of next ICPC  (-.-)  //

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb   push_back
#define yes   cout<<"YES"<<endl
#define no    cout<<"NO"<<endl
#define all(x) (x).begin(), (x).end()
#define gcd(a,b)      __gcd(a,b)
#define lcm(a,b)  (a*b)/__gcd(a,b)
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void solve() {
    long double pkp;
    cin >> pkp;

    const long double A = 12500.0L;
    const long double B = 50000.0L;
    const long double C = 150000.0L;

    const long double limit = 1e-12L;

    auto taxFromIncome = [&](long double I)->long double {
        if (I <= A) return 0.0L;
        if (I <= B) return (I - A) * 0.20L;
        if (I <= 100000.0L) return (B - A) * 0.20L + (I - B) * 0.40L;
        if (I <= 125000.0L) return (B - A) * 0.20L + (100000.0L - B) * 0.40L + (I - 100000.0L) * 0.60L;
        if (I <= C) return (B - A) * 0.20L + (100000.0L - B) * 0.40L + (125000.0L - 100000.0L) * 0.60L + (I - 125000.0L) * 0.40L;
        return (B - A) * 0.20L + (100000.0L - B) * 0.40L + (125000.0L - 100000.0L) * 0.60L + (C - 125000.0L) * 0.40L + (I - C) * 0.45L;
    };

    long double arkta = 0.0L;

    if (pkp <= limit) {
        arkta = 0.0L;
    } else {
        long double lo = 0.0L, hi = 1e18L;
        if (pkp <= 47500.0L) hi = 1e6L;
        else hi = 1e12L;

        for (int iter = 0; iter < 200; ++iter) {
            long double mid = (lo + hi) * 0.5L;
            long double t = taxFromIncome(mid);
            if (t < pkp) lo = mid;
            else hi = mid;
        }
        arkta = (lo + hi) * 0.5L;
    }

    cout << fixed << setprecision(2) << arkta << "\n";
}

int main() {
    optimize();
    int lol;
    cin >> lol;
    while (lol--) {
        solve();
    }
}

//                                   THANKS                             //
