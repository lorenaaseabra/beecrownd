#include <stdio.h>
#define SIZE 10

int main(){
        int v;
        int n[SIZE];
        scanf("%d", &v);
        for (int i=0;i<SIZE;i++){
                if (i==0){
                        n[i] = v;
                        printf("N[%d] = %d\n", i, n[i]);
                }else{
                        n[i] = n[i-1]*2; 
                        printf("N[%d] = %d\n", i, n[i]);
                }
        }
        return 0;
}