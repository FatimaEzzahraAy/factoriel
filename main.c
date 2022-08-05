#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factoriel(int a){
    int i;
    int f = 1;
    for(i = 1 ; i <= a ; i++){
        f = f * i;
    }
    return f;
}

int main()
{
    int f,i,n;

    f = 1;
    printf("Entrez un nombre : \n");
    scanf("%d", &n);

    for(i = 1 ; i <= n ; i++){
        f = f * i;
    }
    printf("\n le factoriel est = %d \n ", f);
    printf("************************************\n");
printf("le factoriel : %d", factoriel(n));
    return 0;
}

