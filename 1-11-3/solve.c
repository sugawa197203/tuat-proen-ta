#include <stdio.h>

#define N 10

void Scalar(int a[N], int k){
    int i;
    for(i=0; i<N; i++)
        a[i] = k * a[i];
}

int main(void){
    int i;
    int a[N], k=3;
    for(i=0; i<N; i++)
        a[i] = i;
    Scalar(a, k);

    FILE *fp;
    fp = fopen("out.txt", "w");
    for(i=0; i<N; i++)
        fprintf(fp, "a[%d]は%d\n", i, a[i]);
    fclose(fp);
    return 0;
}
