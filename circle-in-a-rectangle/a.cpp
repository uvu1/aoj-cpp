#include <bits/stdc++.h>
using namespace std;

int main() {
    int W,H,x,y,r;
    cin >> W >> H >> x >> y >> r;
    if ((x-r)<0 or W<(x+r) or (y-r)<0 or H<(y+r)){
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}
