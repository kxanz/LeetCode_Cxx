class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
                unordered_map<int, int> map;

        for (int num : nums) {
            map[num]++;
        }

        vector<vector<int>> buckets(nums.size() + 1);
        for (auto x : map) {
            buckets[x.second].push_back(x.first);
        }

        vector<int> res;
        for (int i = buckets.size() -1; res.size() < k; i--) {
            for (int num : buckets[i]) {
                res.push_back(num);
            }
        }

        return res;
    }
};
