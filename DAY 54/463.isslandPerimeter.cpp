class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        if (grid.size() == 0) {
        return 0;
    }
 
    int M = grid.size();
    int N = grid[0].size();
 
    int count = 0;
 
    // traverse each cell of the matrix
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            // if the current cell is a land
            if (grid[i][j] == 1)
            {
                // check if top edge is adjacent to the water
                if ((i == 0 || grid[i - 1][j] == 0)) {
                    count++;
                }
 
                // check if bottom edge is adjacent to the water
                if (i == M - 1 || grid [i + 1][j] == 0) {
                    count++;
                }
 
                // check if left edge is adjacent to the water
                if (j == 0 || grid [i][j - 1] == 0) {
                    count++;
                }
 
                // check if right edge is adjacent to the water
                if (j == N - 1 || grid[i][j + 1] == 0) {
                    count++;
                }
            }
        }
    }
 
    return count;

    }
};