class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int i,j;
        
        int row=matrix.size();
        int col=matrix[0].size();
       int matrix1[row][col];
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                matrix1[i][j]=matrix[j][i];
            }
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                matrix[i][j]=matrix1[i][j];
            }
        }
          for(i=0;i<row;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
     
    }
};