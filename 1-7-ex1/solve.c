#include <stdio.h>
#include <stdlib.h>

int main(void){
    int DataSize;
    int *Data;

    printf("データの件数は?:");
    scanf("%d",&DataSize);
    Data = (int*)malloc(DataSize*sizeof(int));
    
    /*データの入力*/
    for(int i = 0; i < DataSize; i++){
        printf("データ%d:", i+1);
        scanf("%d", &Data[i]);
    }

    /*データの表示*/
    for(int i = 0; i < DataSize; i++){
        printf("データ%d: %d\n", i+1, Data[i]);
    }

    free(Data);

    return 0;
}
