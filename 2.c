#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int a[10], b[10], ab[20], i, ia=0, ib=0;
	
	for(i=0;i<40;i++){
		if(i<10){
			printf("\n\nDigite o valor A de ind %d: ", i+1);
			scanf("%d", &a[i]);
			printf("\nDigite o valor B de ind %d: ", i+1);
			scanf("%d", &b[i]);
		}
		if(i<20){
			if(i==0){
				ab[i] = a[ia];
				ia++;
			}else if(i%2==1){
	  			ab[i] = b[ib];
	  			ib++;
			}else{
				ab[i] = a[ia];
				ia++;
			}
		}
		if(i==20){
			printf("Vetor Intercalado:");
		}
		if(i>=20){
			printf("%d ", ab[i-20]);
		}	
	}
		
	getch();
	return 0;
}
