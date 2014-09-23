#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int x, y, xy[20], i, j, cont=0, ver=0;
    printf("Vetor X: ");
    for(i=0;i<20;i++){
        if(i<10){
            ver=0;
            scanf("%d", &x);
            for(j=0;j<i;j++){
                if(x==xy[j]){
                    ver=1;
                }
            }
            if(ver==0){
                xy[cont] = x;
                cont++;
            }
        }
        if(i==10){
            printf("Vetor Y: ");
        }
        if(i>=10){
            ver=0;
            scanf("%d", &y);
            for(j=0;j<i;j++){
                if(y==xy[j]){
                    ver=1;
                }
            }
            if(ver==0){
                xy[cont] = y;
                cont++;
            }
        }
    }
    printf("\nVetor XY: ");
    for(i=0;i<cont;i++){
        printf("%d ", xy[i]);
    }
    
    getch();
    return 0;
}
