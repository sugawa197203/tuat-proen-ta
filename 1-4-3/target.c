#include <stdio.h>

int main(void){
    int n=10, i, ans=0;
    
    for(i=1; i<=n; i++){
        ans=ans+(2*i-1);
    }
    
    printf("%dの2乗は%d\n",n,ans);
    
    return 0;
}
