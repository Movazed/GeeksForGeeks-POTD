#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:

vector<int> bracketNumbers(string str)
{
    stack<int> st;
    vector<int> ans;
    int i = 1;
    for (char ch : str)
    {
        if (ch == '(')
        {
            st.push(i);
            ans.push_back(i);
            i++;
        }
        else if (ch == ')')
        {
            ans.push_back(st.top());
            st.pop();
        }
    }
    return ans;
}
};

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;

        vector<int> ans = ob.bracketNumbers(s);

        for (auto i : ans)
            cout << i << " ";

        cout << "\n";
    }

    return 0;
}