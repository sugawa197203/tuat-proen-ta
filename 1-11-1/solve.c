#include<stdio.h>

int main(void)
{
    int i;
    FILE *fp; /*ファイルポインタ*/

    fp = fopen("MyFile.txt","a");
    for(i=0;i<5;i++)
        fprintf(fp,"%d\n",i);

    fclose(fp);
    return 0;
}
