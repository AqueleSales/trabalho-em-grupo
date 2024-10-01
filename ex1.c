//Bibliotecas utilizadas
#include <stdio.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>
//ligamento para o arquivo remove.c contendo o algoritmo para resolução das mensagens
#include "Remove.h"

int main(){
    char Codigo[101]; //quantidada de caracteres para a mensagem
    char temp[3]; //espaços no vetor para manipulação de caracter para depois haver a tradução
    int m, b,i,r,  quantia = 0;

    printf("digite quantos codigos voce quer: ");
    scanf("%d", &quantia);
    fflush(stdin);//libera o fluxo da leitora de dados
    for( m = 0; m<quantia; m++){
        //loop para guardar a mensagem
        printf("algoritimo de inteligencia: ");
        scanf("%d", &b);
        fflush(stdin);
        printf("qual o codigo em hexa:");
        scanf("%100s", Codigo);
        fflush(stdin);
        for(i = 0;i < 100; i+=2){
            //loop para selecionar 2 caracters por vez para depois decodificar enviar para a func_val
            temp[0] = Codigo[i];
            temp[1] = Codigo[i + 1];
            temp[2] = '\0';
            //se ouver um numero igual a 3 ele não deixa entrar no temp[0]
            if (temp[0] != '3'){
            //se houver a sequencia de 00 para de decodificar
            if(temp[0] == '0' && temp[1] == '0') break;
            r = strtol(temp, NULL, 16);
            //decodifica o conjunto e guarda no r e depois envia para a func_val
            if(func_val((i/2)+1,b)!=0)printf("%c",r);
            //retornar a decodificação da mensagem
            }
        }
    }    
    return 0;    
}