#include <stdio.h>
#include <math.h>
int main(){
    int n,i,s;
    s=0;
    scanf("%d",&n);
    if (n>0){
        int a[n];
        for (i=0;i<n;i++){
            scanf("%d",&a[i]);
    
        }
        for (i=(n-1);i>=0;i--){
                    s=s+a[i];
            printf("%d ",a[i]);
        }
        printf("/n%d",s);
        
        
    }
    else{
        printf("Error");
    }
return 0;
}
