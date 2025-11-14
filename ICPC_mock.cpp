///////////////          PRANTA KUMER PANDIT            ///////////////
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
#define pb push_back
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define all(x) (x).begin(), (x).end()
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/__gcd(a,b)
#define Ishan() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve() {
    string pkp;
    getline(cin, pkp);
    int r = (int)pkp.length();

    int count_escape = 0;
    int first_pos = -1;

    for (int i = 0; i + 1 < r; ++i) {
        if (pkp[i] == '\\' && pkp[i+1] == '0') {
            count_escape++;
            if (first_pos == -1) first_pos = i;
            i++;
        }
    }

    int len = r - count_escape;
    int sizeoff = len + 1;
    int strlen;
    if (first_pos == -1) {
        strlen = len;
    } else {

        strlen = first_pos;
    }

    cout << sizeoff << " " << strlen << '\n';
}

int main() {
    Ishan();
    int lol;
    if (!(cin >> lol)) return 0;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (lol--) {
        solve();
    }
    return 0;
}
