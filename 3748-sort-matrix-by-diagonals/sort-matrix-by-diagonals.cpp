class Solution {
public:
    void sortDiagonal(int startRow, int startCol, vector<vector<int>>& grid, bool ascending) {
        int n = grid.size();
        int i = startRow, j = startCol;
        vector<int> vec;

        // Collect diagonal
        while (i < n && j < n) {
            vec.push_back(grid[i][j]);
            i++;
            j++;
        }

        // Sort
        if (ascending) {
            sort(vec.begin(), vec.end());
        } else {
            sort(vec.begin(), vec.end(), greater<int>());
        }

        // Put back into grid
        i = startRow;
        j = startCol;
        int k = 0;
        while (i < n && j < n) {
            grid[i][j] = vec[k++];
            i++;
            j++;
        }
    }

    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();

        // Bottom-left triangle (including main diagonal) → non-increasing
        for (int i = 0; i < n; i++) {
            sortDiagonal(i, 0, grid, false);
        }

        // Top-right triangle (excluding main diagonal) → non-decreasing
        for (int j = 1; j < n; j++) {
            sortDiagonal(0, j, grid, true);
        }

        return grid;
    }
};
