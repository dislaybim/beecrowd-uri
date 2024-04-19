#include <stdio.h>

int main () {

int n, result;
scanf("%d", &n);
int i = 1;

for(i = 1; i <= 10; i++){
    printf("%d x %d = %d\n", i, n, i*n);
}
return 0;
}
