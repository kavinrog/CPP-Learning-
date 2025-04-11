class Solution {
    public:
        vector<pair<int,int>> directions = {{1,0},{0,1},{-1,0},{0,-1}};
        int ROWS;
        int COLS;
        int numIslands(vector<vector<char>>& grid) {
            ROWS = grid.size();
            COLS = grid[0].size();
            int islands = 0;

            for(int r = 0; r <= ROWS; r++){
                for(int c = 0; c <= COLS; c++){
                    if (grid[r][c]=='1'){
                        dfs(grid, r, c);
                        islands+=1;
                    }
                }
            }
            return islands;
            
        }
        void dfs(vector<vector<char>>& grid, int r, int c){
            if(r<0 || c < 0 || r > ROWS || c > COLS || grid[r][c]=='0'){
                return;
            }
            grid[r][c] = '0';
            for (auto[dr,dc] : directions){
                dfs(grid, r+dr, c+dc);
            }
        }

    };