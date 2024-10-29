class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int minrow=0;
        int maxrow=matrix.size()-1;
        int mincol= 0;
        int maxcol= matrix[0].size()-1;
        vector<int>v;
        while(maxrow>=minrow && maxcol>=mincol){
            for(int i=mincol; i<=maxcol; i++){
                v.push_back(matrix[minrow][i]);
            }
            minrow++;
            if(minrow>maxrow || mincol>maxcol) break;

            for(int i=minrow; i<=maxrow ;i++){
                v.push_back(matrix[i][maxcol]);
            }
            maxcol--;
            if(minrow>maxrow || mincol>maxcol) break;

            for(int i=maxcol; i>=mincol; i--){
                v.push_back(matrix[maxrow][i]);
            }
            maxrow--;
            if(minrow>maxrow || mincol>maxcol) break;

            for(int i=maxrow; i>=minrow; i--){
                v.push_back(matrix[i][mincol]);
            }
            mincol++;
             if(minrow>maxrow || mincol>maxcol) break;
        }
        return v;
    }
};