class Solution {
public:
    std::vector<int> pivotArray(std::vector<int>& nums, int pivot) {
        std::vector<int> less, equal, greater;
        
        // Partition the elements into three separate lists
        for (int num : nums) {
            if (num < pivot) {
                less.push_back(num);
            } else if (num == pivot) {
                equal.push_back(num);
            } else {
                greater.push_back(num);
            }
        }
        
        // Concatenate the three lists
        less.insert(less.end(), equal.begin(), equal.end());
        less.insert(less.end(), greater.begin(), greater.end());
        
        return less;
    }
};
