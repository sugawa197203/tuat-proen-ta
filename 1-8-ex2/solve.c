#include <stdio.h>
#include <assert.h>
#define N 100

void editBloodType(int bloodTypeList[N], int index, int bloodType){
    bloodTypeList[index] = bloodType;
}

void printAllIndexByType(int bloodTypeList[N], int type){
    int i;

    for(i = 0; i < N; i++){
        if(bloodTypeList[i] == type){
            printf("%d ", i);
        }
    }
    printf("\n");
}

void printDetail(int bloodTypeList[N]){
    int i;

    for(i = 0; i < N; i++){
        printf("%d ", bloodTypeList[i]);
    }
    printf("\n");
}

int main(void)
{
    int bloodTypeList[N] = {0};
    int queryCount, queryType;

    scanf("%d", &queryCount);

    while(queryCount--){
        scanf("%d", &queryType);

        if(queryType == 1){
            int index, bloodType;
            scanf("%d %d", &index, &bloodType);
            editBloodType(bloodTypeList, index, bloodType);
        } else if(queryType == 2){
            int type;
            scanf("%d", &type);
            printAllIndexByType(bloodTypeList, type);
        } else if(queryType == 3){
            printDetail(bloodTypeList);
        }
    }
}
