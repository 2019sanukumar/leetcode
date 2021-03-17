class Solution {
public:
    vector<int> minOperations(string boxes) {
        int sum_moves=0;
        int num_boxes=0;
        for(int i=0;i<boxes.size();i++)
        {
            if(boxes[i]=='1')
            {
                sum_moves+=i;
                num_boxes++;    
            }    
        }
        int l=0;
        int r=num_boxes;
        int current=sum_moves;
        vector<int>ans;
        for(int i=0;i<boxes.size();i++)
        {
            ans.push_back(current);
            if(boxes[i]=='1')
            {
                r--;
                l++;    
            }
            current+=l;
            current-=r;
        }
        return ans;
        
    }
};
