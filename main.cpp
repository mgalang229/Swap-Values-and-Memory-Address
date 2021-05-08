#include <bits/stdc++.h>

using namespace std;

int main() {
    pair<int, int*> a;
    int x = 10;
    a.first = 10;
    a.second = &x;
    int y = 20;
    pair<int, int*> b;
    b.first = y;
    b.second = &y;
    cout << a.first << " " << b.first << '\n';
    cout << a.second << " " << b.second << '\n';
    swap(a, b);
    cout << '\n';
    cout << a.first << " " << b.first << '\n';
    cout << a.second << " " << b.second << '\n';
    return 0;
}
