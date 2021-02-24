class Solution {
public:
int hIndex(vector<int>& citations) {
        int n = citations.size();
        if(n == 0){
            return 0;
        }
    
        sort(citations.begin(), citations.end());

        for(int i=n; i>0; i--){
            if(citations[n-i] >= i){
                return i;
            }
        }
    
    return 0;
    }
};