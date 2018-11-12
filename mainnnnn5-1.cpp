#include <stdio.h>
const int N = 4;
const int M = 5;
int main()
{
    int i, j, min, max, x = 0, y = 0, z;
    int A[4][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    for(i = 0; i < N; i++){
        min = A[i][0];
        max = A[i][0];
        for(j = 0; j < M; j++){
            if(A[i][j] < min){
                min = A[i][j];
                x = j;
            }
            if(A[i][j] > max){
                max = A[i][j];
                y = j;
            }
        }
        z = A[i][x];
        A[i][x] = A[i][y];
        A[i][y] = z;
    }
    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++)
            printf("%3d", A[i][j]);
        printf("\n");
    }
    return 0;
}
