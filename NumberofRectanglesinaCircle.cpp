#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int rectanglesInCircle(int r) {
        // code here
        int cnt=0;
        for(int i=1;i<2*r;i++){
            for(int j=1;j<2*r;j++){
                if((long)i*i+(long)j*j<=(long)4*r*r) cnt++; //to fit the rectangle inside circle
            }
        }
        return cnt;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        int ans = ob.rectanglesInCircle(n);
        cout << ans << "\n";
    }
}