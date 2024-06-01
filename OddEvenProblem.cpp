#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string oddEven(string s) {
        // code here
        unordered_map<char,int> mpp;
        for(int i=0;i<s.size();i++)
        {
            mpp[s[i]]++;
        }
        vector<int> v;
        
        int x=0,y=0;
        for(auto it : mpp)
        {
          int z=it.first-'a';
            if((z+1)%2==0 && it.second%2==0)
            {
                x++;
            }
            else if((z+1)%2!=0 && it.second%2!=0)
            {
                y++;
            }
        }
        return (x+y)%2==0?"EVEN":"ODD";
    }
};
int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}
