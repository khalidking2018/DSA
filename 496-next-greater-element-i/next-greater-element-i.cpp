class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> res;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (nums1[i] == nums2[j]) {
                    int nextGreater = -1;

                    // Search for first greater element to the right
                    for (int k = j + 1; k < n; k++) {
                        if (nums2[k] > nums2[j]) {
                            nextGreater = nums2[k];
                            break;
                        }
                    }

                    res.push_back(nextGreater);
                    break; // stop searching nums2 for this nums1[i]
                }
            }
        }

        return res;
    }
};
