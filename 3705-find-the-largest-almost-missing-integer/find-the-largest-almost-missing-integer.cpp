class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        // case1
        if(k==1){
            int ans=-1;
            for(int x:nums){
                int count=0;
            for(int y:nums){
                if(x==y)
                count++;
            }
            if(count==1)
                ans=max(ans,x);
            } return ans;
        }
        // case2
        if(k==n){
            return *max_element(nums.begin(),nums.end());
        }
        // case 3
            int ans=-1;
            int first=nums[0];
        int last=nums[n-1];
        int countfirst=0;
        int countlast=0;
        for(int x:nums){
            if(x==first)
                countfirst++;
             if(x==last)
                countlast++;
         } if(countfirst==1)
            ans=max(ans,first);
            if(countlast==1)
            ans=max(ans,last);
     return ans;
    }
};