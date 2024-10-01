//Bibliotecas utilizadas
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(0,"portuguese");
    float n[2],ppd,notaeu,nota3;
    int i=0,eu=0,n3=0;

//n1 e n2
     for(;i<2;i++){
    do {printf("Nota N%i: ",i+1);
    scanf("%f",&n[i]);
    if(n[i]<0 || n[i]>4.5)printf("erro 3\n");}
    while(n[i]<0 || n[i]>4.5);}
//ppd
    do{printf("Nota PPD: ");
    scanf("%f",&ppd);
    if(ppd<0 || ppd>1)printf("erro 3\n");}
    while(ppd<0 || ppd>1);
//exame unificado
    printf("\nRealizou o Exame Unificado( Sim=1 , Não=0 )? ");
    scanf("%i",&eu);

    if(eu==1){
        do{printf("Nota do Exame Unificado: ");
        scanf("%f",&notaeu);
        if(notaeu<0 || notaeu>1)printf("erro 3\n");
        }while(notaeu<0 || notaeu>1);
    }
//n3
    printf("\nRealizou a N3( Sim=1 , Não=0 )? ");
    scanf("%i",&n3);
    if(n3==1){
        do{printf("Sua nota da N3: ");
        scanf("%f",&nota3);
        if(nota3<0 || nota3>4.5)printf("erro 3\n");}
        while(nota3<0 || nota3>4.5);
    }
//substiruição de nota
    for(i=0;i<1;i++){
        if(n[0]==n[1] && n[0]<nota3) {n[0]=nota3;break;}

        if(n[0]>n[1] && n[1]<nota3) {n[1]=nota3;break;}

        if(n[0]<n[1] && n[0]<nota3) {n[0]=nota3;break;}
    }
//resultado
    if(n[0]+n[1]+ppd+notaeu>10)printf("\nOQUE?!?! Você ultrapassou o limite de 10.");
    if(n[0]+n[1]+ppd+notaeu<10 && n[0]+n[1]+ppd+notaeu>=7)printf("\nA sua nota é: %.2f\nParábens!! Você foi Aprovado!!",n[0]+n[1]+ppd+notaeu);
    if(n[0]+n[1]+ppd+notaeu<7)printf("\nA sua nota é: %.2f\nInfelizmente vc foi Reprovado :(",n[0]+n[1]+ppd+notaeu);

    return 0;
    }