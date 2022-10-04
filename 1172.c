#include <stdio.h>
#define SIZE 10
int main(){
        int x[SIZE],n,i;
        
        for (i=0;i<SIZE;i++){
                scanf("%i",&n);
                x[i] = n;
        }
        for (i=0;i<SIZE;i++){
                if(x[i] <= 0){
                        x[i] = 1;
                }
                printf("X[%i] = %i\n", i, x[i]);
        }
        return 0;
}