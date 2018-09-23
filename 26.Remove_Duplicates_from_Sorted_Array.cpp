class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()==0)return 0;
        int len = nums.size()-1;
        for (int i=0;i<len;i++){
            while(i+1<=len && nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i);
                len--;
            }
        }
        return nums.size();
    }
};
