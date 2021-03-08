class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int max=0;
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    int count=0;
                    DFS(grid,i,j,count); 
                    if(count>max)
                    {
                        max=count;
                    }
                }
            }
        }
        return max;
    }
    
    void DFS(vector<vector<int>>& grid,int i,int j,int& count)
    {
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||grid[i][j]==0)
        {
            // count++;//this will give perimeter
            return;
        }
        count++;// this will give area
        
        grid[i][j]=0;
        DFS(grid,i+1,j,count);
        DFS(grid,i,j+1,count);
        DFS(grid,i-1,j,count);
        DFS(grid,i,j-1,count);
    }
    
};
