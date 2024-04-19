// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int x;
    int a,b,c,d,e,f,g,h,i,j,k,l,m;
    scanf("%d", &x);
    //descobrir notas de 100
    a = x / 100;
    b = x - 100*a;
    //descobrir as notas de 50:
    c = b / 50;
    d = b - 50*c;
    //descobrir as notas de 20
    e = d / 20;
    f = d - 20*e;
    //descobrir as notas de 10
    g = f / 10;
    h = f - 10*g;
    //descobrir notas de 5
    i = h / 5;
    j = h - 5*i;
    //descobrir notas de 2
    k = j / 2;
    l = j - 2*k;
    //descobrir notas de 1
    m = l / 1;
   
    printf("%d\n", x); 
    printf("%d nota(s) de R$ 100,00\n", a);
    printf("%d nota(s) de R$ 50,00\n", c);
    printf("%d nota(s) de R$ 20,00\n", e);
    printf("%d nota(s) de R$ 10,00\n", g);
    printf("%d nota(s) de R$ 5,00\n", i);
    printf("%d nota(s) de R$ 2,00\n", k);
    printf("%d nota(s) de R$ 1,00\n", m);
    
    return 0;
}
