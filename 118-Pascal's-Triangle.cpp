class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> matrix(numRows);
    for(int i=0; i<numRows; i++){
        for(int j=0; j<=i; j++){
            matrix[i].push_back(0);
        }
    }
    for(int i=0; i<numRows; i++){
        for(int j=0; j<=i; j++){
            if(j==0 || j==i) matrix[i][j]=1;
            else{
                matrix[i][j]= matrix[i-1][j] + matrix[i-1][j-1];
            }
            
        }
    }
    return matrix;
        
    }
};