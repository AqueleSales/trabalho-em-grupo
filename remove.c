//Bibliotecas utilizadas
#include <stdio.h>
#include <math.h>
//ligamento para o arquivo remove.c contendo o algoritmo para resolução das mensagens
#include "Remove.h"

int func_val(int x, int b){
    //valroes duble pois os valores são grandes e necessitam o dobro de espaço da memoria
    double a0 = 186.752;
    double a1 = -148.235;
    double a2 = 34.5049;
    double a3 = -3.5091;
    double a4 = 0.183166;
    double a5 = -0.00513554;
    double a6 = 0.0000735464;
    double a7 = -4.22038e-7;
    double y;
    //função polinominal para remoção de caracates indesejaveis
    y = a0 + (a1 + b)*x + a2*x*x + a3*x*x*x + a4*x*x*x*x + a5*x*x*x*x*x + a6*x*x*x*x*x*x + a7*x*x*x*x*x*x*x;
    return round(y);
    //return round, retorna o valor da função e arrendonda,se o valor se aproximar do 0 ele retira o caracteres se não guarda
}