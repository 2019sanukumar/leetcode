class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        long  sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        long leftsum=goal-sum;
        leftsum=abs(leftsum);
        cout<<leftsum;
        int a=leftsum/limit;
        if(leftsum%limit !=0)return a+1;
        // return ceil(a);
        return a;
        
        
    }
};
