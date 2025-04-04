#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(){
    float salario, reajuste, sal_reajustado;

    printf("Informe o salário do funcionario: ");
    scanf("%f", &salario);

    if(salario < 1500.00){
        reajuste = salario * 0.15;
        sal_reajustado = salario + reajuste;
        printf("O salário reajustado com 15%% é de: %.2f\n", sal_reajustado);
    }else if(salario >=1500.00){
        reajuste = salario * 0.10;
        sal_reajustado = salario + reajuste;
        printf("O salário reajustado com 10%% é de: %.2f\n", sal_reajustado);
    }else{
        reajuste = salario * 0.05;   
        sal_reajustado = salario + reajuste;
        printf("O salário reajustado com 5%% é de: %.2f\n", sal_reajustado);
    }   
}
