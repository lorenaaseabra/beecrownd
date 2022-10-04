#include <stdio.h>
#include <math.h>

int main(){
        int x,y,cont,soma=0;
        scanf("%i%i", &x,&y);
        if(x<y){
                for(cont=x+1;cont<y;cont++){
                        if (cont%2!=0){ 
                                soma+=cont; 
                        }
                }
        }else{
                for(cont=y+1;cont<x;cont++){
                        if (cont%2!=0){ 
                                soma+=cont; 
                        }
                }
        }
        printf("%d\n", soma);
        return 0;
}