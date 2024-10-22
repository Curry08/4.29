#include <stdio.h>

int main(){
    int num1,num2,tot=0;
    printf("Inserisci il primo numero: ");
    scanf("%d",&num1);
    printf("Inserisci il secondo numero: ");
    scanf("%d",&num2);
    for(int i=1;i<=num1;i++){
        tot+=num2;
    }
    printf("Il prodotto tra i due numeri è %d",tot);
    return 0;
}
