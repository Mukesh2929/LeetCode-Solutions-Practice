class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int rows = mat.size();
        int cols = mat[0].size();

        if(rows * cols != r * c)
            return mat;

        vector<vector<int>> result(r, vector<int>(c));

        for(int i = 0; i < rows * cols; i++) {
            result[i / c][i % c] = mat[i / cols][i % cols];
        }

        return result;
    }
};
