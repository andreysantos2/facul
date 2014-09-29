#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int a[8], i, j, x;
    
    printf("Vetor:");
    for(i=0;i<8;i++){
        scanf("%d", &a[i]);
        for(j=0;j<i;j++){
            if(a[i]<a[j]){
                x=a[j];
                a[j]=a[i];
                a[i]=x;
            }
        }                 
    }
    printf("\nVetor ordenado:");
    for(i=0;i<8;i++){
        printf(" %d", a[i]);
    }
    
    getch();
    return 0;    
    
}
