class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> r;

        int i = 0;

        while (i < nums.size()) {
            int start = nums[i];
            while (i + 1 < nums.size() && nums[i + 1] == nums[i] + 1) {
                i++;
            }
            int end = nums[i];
            if (start == end) {
                r.push_back(to_string(start));
            }
            
            else {
                r.push_back(to_string(start) + "->" + to_string(end));
            }

            i++;
        }

        return r;
    }
};