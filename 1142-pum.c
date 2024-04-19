#include <stdio.h>

int main() {
   int num, i,x=1;
   
	scanf("%d", &num);

	for(i = 1; i <= num; i++)	{
		for( ;x <=4*num; x++){
		
			if((x % 4) == 0){
				printf("PUM\n");
			}else{
				printf("%d ", x);
			}
		}
	}
			             
  return 0;
   }
