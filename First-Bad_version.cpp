class Solution {
public:
    int firstBadVersion(int n) {
        int si=1;
        int ei=n;
        int res;
        if(n==1)return isBadVersion(n);
        while(si<=ei)
        {
            int mid=si-(si-ei)/2;
            
            if(isBadVersion(mid))
            {
                res=mid;
                ei=mid-1;//important
            }
            else
            {
                si=mid+1;
            }
                
        }
        return res;
        
        
    }
};