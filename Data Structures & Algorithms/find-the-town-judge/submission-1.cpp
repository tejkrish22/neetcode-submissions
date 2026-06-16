class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> inDegree (n+1,0);
        vector<int> outDegree (n+1,0);

        for (auto it:trust){
            int ai = it[0];
            int bi = it[1];

            inDegree[bi]++;
            outDegree[ai]++;
        }
        for (int i=1; i<=n; i++){
            if (inDegree[i]==n-1 and outDegree[i]==0) return i;
        }
        return -1;
    }
};