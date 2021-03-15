//find minimum subarray sum of length arr.length-k
//subtract it from total_sum-minimum_subaray_sum
//that wiil be ans
// sliding window of size arr.length-k
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total_sum=0;
        for(int i=0;i<cardPoints.size();i++)
        {
            total_sum+=cardPoints[i];
        }
        int n=cardPoints.size()-k;
        if(n==0)return total_sum;
        int sum=INT_MAX;
        int tempsum=0;
        int i=0;
        int j=0;
        while(j<cardPoints.size())
        {
            if((j-i+1)<n)
            {
                tempsum+=cardPoints[j];
                j++;
                continue;
            }
            else if((j-i+1)==n)
            {
                // sum=min(sum,tempsum);
                // tempsum-=cardPoints[i];
                // i++;
                // j++;
                tempsum+=cardPoints[j];
                j++;
                sum=min(sum,tempsum);
                tempsum-=cardPoints[i];
                i++;
            }
                
        }
        return total_sum-sum;
        
    }
};
