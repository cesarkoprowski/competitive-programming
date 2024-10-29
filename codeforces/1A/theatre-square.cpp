#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, a;
    int tiles_width;
    int tiles_length;
    long long total_tiles;
    cin >> n >> m >> a;
    tiles_width = (m + a - 1) / a;
    tiles_length = (n + a - 1) / a;
    total_tiles = 1LL * tiles_length * tiles_width;
    cout << total_tiles << endl;
    return 0;
}
