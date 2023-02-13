#include<stdio.h>
float km_rodado,valor;

int main( ){
    
    printf("Quantos kilometros foram percorridos na corrida?\n");
    scanf("%f",&km_rodado);
    
    valor=4.90+(km_rodado*3.00);
    
    printf("Por uma corrida de %.2fkm, o valor a ser pago é de R$%.2f\n",km_rodado,valor);
    
    return 0;
    
}