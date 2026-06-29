#include<stdio.h>

int main(void)
{
    int i,a[5];
    FILE *fp1,*fp2;
    fp1 = fopen("MyFile.txt","r");
    fp2 = fopen("MyFile2.txt","w");

    for(i=0;i<5;i++)
        fscanf(fp1,"%d",&a[i]);

    for(i=0;i<5;i++)
        fprintf(fp2,"%d\n",a[i]);

    fclose(fp1);
    fclose(fp2);
    return 0;
}
