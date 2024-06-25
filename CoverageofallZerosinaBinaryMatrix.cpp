#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int delrow[4] = {-1, 0, 1, 0};
    int delcol[4] = {0, 1, 0, -1};
    int FindCoverage(vector<vector<int>>&matrix){
        // Code here
        int m = matrix.size();
        int n = matrix[0].size();
        int count = 0;
        for(int i = 0;i<m;i++) {
            for(int j = 0;j<n;j++) {
                if(matrix[i][j] == 0){
                    for(int k = 0;k<4;k++) {
                        int nrow = delrow[k] + i;
                        int ncol = delcol[k] + j;
                        
                        if(nrow >= 0 and nrow < m and ncol >= 0 and ncol < n){
                            if(matrix[nrow][ncol] == 1)count++;
                        }
                    }
                }
            }
        }
        return count;
    }
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>matrix(n, vector<int>(m, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> matrix[i][j];
		Solution obj;
		int ans = obj.FindCoverage(matrix);
		cout << ans << "\n";
	}
	return 0;
}