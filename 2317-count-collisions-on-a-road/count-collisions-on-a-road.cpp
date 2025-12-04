class Solution {
public:
    int countCollisions(string directions) {
        int n = directions.size();
        int i = 0, j = n - 1;
        int c = 0;

        // Skip all leading 'L'
        while (i < n && directions[i] == 'L') {
            i++;
        }

        // Skip all trailing 'R'
        while (j >= 0 && directions[j] == 'R') {
            j--;
        }

        // Count moving cars in the middle section
        for (int m = i; m <= j; m++) {
            if (directions[m] != 'S') {
                c++;
            }
        }

        return c;
    }
};
