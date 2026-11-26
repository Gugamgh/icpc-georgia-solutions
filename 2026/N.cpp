#include <bits\stdc++.h>
using namespace std;

int main() {
    int a, b, x, y; 
    cin>>a>>b>>x>>y;

    int l = max(x, y);
    int r = max(a - x, b - y);

    cout << l + r << '\n';

    return 0;
}