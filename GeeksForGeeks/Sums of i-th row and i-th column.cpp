//https://practice.geeksforgeeks.org/problems/sums-of-i-th-row-and-i-th-column3054/1
class Solution {
  public:
    int sumOfRowCol(int N, int M, vector<vector<int>> A) {
        
        int row[N],col[M];

        for(int i=0;i<N;i++){
            int sum = 0;
            for(int j=0;j<M;j++){
                sum = sum+ A[i][j];
            }
            row[i] = sum;
        }

        for(int i=0; i<M ;i++){
            int sum = 0;
            for(int j=0; j<N; j++){
                sum= sum+ A[j][i];
            }
            col[i] = sum;
        }

        for(int i=0 ; i<min(N,M); i++){
            if( col[i] != row[i]){
                return 0;
            }
        }
        return 1; 
    }
};