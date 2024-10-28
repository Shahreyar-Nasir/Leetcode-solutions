class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //take transpose and reverse each row
        int m = matrix.size();
        for(int i=0; i<m; i++){
            for(int j=i+1; j<m ; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
       for (auto& row : matrix) {
        reverse(row.begin(), row.end());
       }
        
    }
};