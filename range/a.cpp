#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a<b and b<c) cout << "Yes" << endl; // a < b < cは(a<b)<cというようにコンパイラに解釈されるため意味を持たない
    else cout << "No" << endl;
    return 0;
}
