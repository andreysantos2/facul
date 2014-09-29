#include<stdio.h>
#include<stdlib.h>

int main(){
    
    float temp[12], ma, me;
    int i, j, maior[12], menor[12], contMaior=0, contMenor=0;
    
    printf("Digite as temperaturas dos 12 meses\n");
    for(i=0;i<12;i++){
        printf("Mes %d: ", i+1);
        scanf("%f", &temp[i]);
    }
    ma=temp[0];
    me=temp[0];
    for(i=0;i<12;i++){
        if(temp[i]>=ma){
            printf("\nMaior");
            if(temp[i]==ma){
                maior[contMaior]=i;
                contMaior++;
                printf(" mes %d: %.2f", i+1, ma);
            }else{
                ma=temp[i];
                maior[contMaior]=i;
                printf(" mes %d: %2.f", maior[contMaior]+1, ma); 
            }
        }
        if(temp[i]<=me){
            if(temp[i]==me){
                me=temp[i];
                menor[contMenor]=i;
                contMenor++;
            }else{
                me=temp[i];
                menor[contMenor]=i;
            }
        }
    }
    printf("\n\nMaior Temperatura: %.2f", ma);
    if(contMaior>1)
        printf("\nMeses");
    else
        printf("\nMes");
        
    printf(" com maior temperatura:");
    for(i=0;i<contMaior;i++){
        printf(" %d - ", maior[i]+1);
        switch(maior[i]){
            case 0: printf("janeiro"); break;
            case 1: printf("fevereiro"); break;
            case 2: printf("marco"); break;
            case 3: printf("abril"); break;
            case 4: printf("maio"); break;
            case 5: printf("junho"); break;
            case 6: printf("julho"); break;
            case 7: printf("agosto"); break;
            case 8: printf("setembro"); break;
            case 9: printf("outubro"); break;
            case 10: printf("novembro"); break;
            case 11: printf("dezembro"); break;
        }
    }
    
    printf("\n\nMenor Temperatura: %.2f", ma);
    if(contMaior>1)
        printf("\nMeses");
    else
        printf("\nMes");
        
    printf(" com menor temperatura:");
    for(i=0;i<contMenor;i++){
        printf(" %d - ", menor[i]+1);
        switch(menor[i]){
            case 0: printf("janeiro"); break;
            case 1: printf("fevereiro"); break;
            case 2: printf("marco"); break;
            case 3: printf("abril"); break;
            case 4: printf("maio"); break;
            case 5: printf("junho"); break;
            case 6: printf("julho"); break;
            case 7: printf("agosto"); break;
            case 8: printf("setembro"); break;
            case 9: printf("outubro"); break;
            case 10: printf("novembro"); break;
            case 11: printf("dezembro"); break;
        }
    }
    
    getch();
    return 0;    
    
}
