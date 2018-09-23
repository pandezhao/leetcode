class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        if(nums.size()<3){return result;}
        for (int i=0;i<nums.size()-2;i++){
            int ptr_begin = i+1;
            int ptr_end = nums.size()-1;
            while (ptr_begin<ptr_end){
                if (nums[i]+nums[ptr_begin]+nums[ptr_end]>0){
                    ptr_end--;
                }else if(nums[i]+nums[ptr_begin]+nums[ptr_end]<0){
                    ptr_begin++;
                }else{
                    vector<int> tmp;
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[ptr_begin]);
                    tmp.push_back(nums[ptr_end]);
                    result.push_back(tmp);
                    while(ptr_begin<ptr_end && nums[ptr_begin] == tmp[1]) ptr_begin++;
                }
                while (i + 1 < nums.size() && nums[i + 1] == nums[i]) 
                     i++;
            }
        }
        return result;
    }
};
