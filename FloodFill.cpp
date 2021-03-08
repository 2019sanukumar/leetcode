class Solution {
public:
    void dfs(vector<vector<int>>& image,int i,int j,int nc,int oc)
    {
        if(i>=image.size()|| i<0 || j>=image[0].size()||j<0|| image[i][j]!=oc)return;
        image[i][j]=nc;
        dfs(image,i-1,j,nc,oc);
        dfs(image,i,j-1,nc,oc);
        dfs(image,i+1,j,nc,oc);
        dfs(image,i,j+1,nc,oc);
        return;
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(newColor==image[sr][sc])return image;
        dfs(image,sr,sc,newColor,image[sr][sc]);
        return image;
    }
};
