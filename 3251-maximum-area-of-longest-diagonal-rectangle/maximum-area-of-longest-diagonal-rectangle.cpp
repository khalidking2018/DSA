class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) {
        int bestArea = 0;
        int bestDiag = -1;
        
        for (int i = 0; i < d.size(); i++) {
            int l = d[i][0];
            int b = d[i][1];
            int diagSq = l * l + b * b;  // diagonal^2
            int area = l * b;

            if (diagSq > bestDiag) {
                bestDiag = diagSq;
                bestArea = area;
            } else if (diagSq == bestDiag) {
                bestArea = max(bestArea, area);
            }
        }
        return bestArea;
    }
};
