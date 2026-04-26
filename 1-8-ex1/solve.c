#include<stdio.h>

#define N 5
#define M 10

void initMatrixNM(int x[N][M]){
    int i, j;

    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            x[i][j] = 9-j;
        }
    }
}

void initMatrix(int x[N][N]){
    int i, j;

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            x[i][j] = 9-j;
        }
    }
}

void AddMatrix(int a[N][M], int b[N][M]){
    int i, j;

    for(i = 0; i < N; i++){
        for(j = 0; j < M; j++){
            a[i][j] = a[i][j] + b[i][j];
        }
    }
}

void MultiMatrix(int a[N][N], int b[N][N]){
    int i, j, k;
    int c[N][N] = {0};

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            for(k = 0; k < N; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            a[i][j] = c[i][j];
        }
    }
}

void PrintMatrixNM(int x[N][M]){
    int i, j;

    for(i = 0; i < N; i++){
        printf("xの%d行目:", i);
        for(j = 0; j < M; j++){
            printf(" %d", x[i][j]);
        }
        printf("\n");
    }
}

void PrintMatrix(int x[N][N]){
    int i, j;

    for(i = 0; i < N; i++){
        printf("xの%d行目:", i);
        for(j = 0; j < N; j++){
            printf(" %d", x[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int i, x[N][M]={0};
    
    initMatrixNM(x);
    
    PrintMatrixNM(x);

    AddMatrix(x, x);

    PrintMatrixNM(x);

    int y[N][N] = {0};

    initMatrix(y);

    PrintMatrix(y);

    MultiMatrix(y, y);

    PrintMatrix(y);

    return 0;
}
