#include <stdio.h>
#define SIZE 100
int main(){

        double a[SIZE];
        
        for (int i=0;i<SIZE;i++){
                scanf("%lf",&a[i]);
        }
        for (int i=0;i<SIZE;i++){
                if(a[i]<=10){
                        printf("A[%d] = %.1lf\n", i, a[i]);
     
                }                
        }
        return 0;
}