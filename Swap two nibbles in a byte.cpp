#include <bits/stdc++.h>

using namespace std;
class Solution {
  public:
    int swapNibbles(int n) {
        // code here
        int mask = (1 << 4) - 1;
        return ((mask & n) << 4) | (mask & (n >> 4));
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.swapNibbles(n) << endl;
    }
    return 0;
}