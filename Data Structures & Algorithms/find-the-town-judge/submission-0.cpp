class Solution {
   public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>> mat(n + 1, vector<int>(n + 1, 0));
        for (auto it : trust) {
            int ai = it[0];
            int bi = it[1];
            mat[ai][bi] = 1;
        }
        for (int i = 1; i <= n; i++) {
            // first condition
            bool judge = true;
            for (int j = 1; j <= n; j++) {
                if (i == j) continue;
                if (mat[i][j] == 1) {
                    judge = false;
                    break;
                }
            }
            if (judge){
                // check second condition
                for (int j=1; j<=n; j++){
                    if (i==j) continue;
                    if (mat[j][i]==0){
                        judge = false;
                        break;
                    }
                }
            }
            if (judge) {
                return i;
            }
        }
        return -1;
    }
};