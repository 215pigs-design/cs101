#include <stdio.h>

int main()
{
    int r =6;
    for(int i =1,j =r;i<=r;i++,j--){
        printf("%*d ",j,i);
        for(int k =1;k<i;k++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
