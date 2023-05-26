class Solution {
public:
    int dr[4]={-1,0,1,0};
    int dc[4]={0,1,0,-1};
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n=heights.size(),m=heights[0].size();
        vector<vector<int>> visPac(n,vector<int>(m,0)),visAtl(n,vector<int>(m,0)),ans;
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(col==0 || row==0) dfs(row,col,n,m,visPac,heights);
                if(col==m-1 || row==n-1) dfs(row,col,n,m,visAtl,heights);
            }
        }
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if(visPac[row][col] && visAtl[row][col]) ans.push_back({row,col});
            }
        }
        return ans;
    }
    void dfs(int row,int col,int n,int m,vector<vector<int>>&vis,vector<vector<int>>&heights){      
        vis[row][col]=1;               
        for(int i=0;i<4;i++){
            int nrow=row+dr[i],ncol=col+dc[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && heights[nrow][ncol]>=heights[row][col]){
                dfs(nrow,ncol,n,m,vis,heights);
            }
        }
    }
};
