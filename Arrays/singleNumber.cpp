#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for (int val : nums) {
            ans ^= val;
        }
        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {2, 2, 1};

    cout << obj.singleNumber(nums);

    return 0;
}