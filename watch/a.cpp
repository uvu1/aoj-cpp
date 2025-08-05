#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int hour = N/60/60;
    int min = N%3600/60;
    int sec = N%60;
    cout << hour << ":" << min << ":" << sec << endl;
    return 0;
}
