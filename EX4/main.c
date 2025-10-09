#include <stdio.h>
#include<stdlib.h>

int main()
{
    FILE*fp;
    int a[] ={1,2,3};
    char b[] ="ABC";
    float c[] ={1.1,1.2,1.3};
    
    int ra[3];
    char rb[4];
    float rc[3];
    
    
    fp = fopen("a.bin", "wb+");
    fwrite(a,sizeof(a), 3, fp);
    fwrite(b,sizeof(b), 3, fp);
    fwrite(c,sizeof(c), 3, fp);
    
    fread(a, sizeof(a), 3, fp);
    for (int i =0; i<3; i++){
        printf("%d ", a[i]);
        printf("\n");
    }
    
    fread(b, sizeof(b), 3, fp);
    for (int i =0; i<3; i++){
        printf("%c ", b[i]);
        printf("\n");
    }
    
    fread(c, sizeof(c), 3, fp);
    for (int i =0; i<3; i++){
        printf("%.1f ", c[i]);
        printf("\n");
    }

    return 0;
}
