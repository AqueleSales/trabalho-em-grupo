//Bibliotecas utilizadas
#include <stdio.h>
#include <limits.h>

int main() {
    //definando variaveis para os valores maximos
    char c = CHAR_MAX;
    int i = INT_MAX;
    short si = SHRT_MAX;
    unsigned int ui = UINT_MAX;
    long li = LONG_MAX;
    unsigned long uli = ULONG_MAX;
    long long lli = LLONG_MAX;
    unsigned long long ulli = ULLONG_MAX;
    //adiconando um valor a mais aos valores maximos e gerando um overflow
    c += 1;
    i += 1;
    si += 1;
    ui += 1;
    li += 1;
    uli += 1;
    lli += 1;
    ulli += 1;
    //tabela muito mal feita, preguiça de fazer uma matriz certinha, desculpaa-- >_<
    printf("tipo||||Valor Inicial||||Valor com Overflow\n");
    printf("------------------------------------------------------------\n");
    printf("char||%d||%d\n", CHAR_MAX, c);
    printf("------------------------------------------------------------\n");
    printf("int||%d||%d\n", INT_MAX, i);
    printf("------------------------------------------------------------\n");
    printf("short int||%d||%d\n", SHRT_MAX, si);
    printf("------------------------------------------------------------\n");
    printf("unsigned int||%u||%u\n", UINT_MAX, ui);
    printf("------------------------------------------------------------\n");
    printf("long int||%ld||%ld\n", LONG_MAX, li);
    printf("------------------------------------------------------------\n");
    printf("unsigned long int||%lu||%lu\n", ULONG_MAX, uli);
    printf("------------------------------------------------------------\n");
    printf("long long int||%lld||%lld\n", LLONG_MAX, lli);
    printf("------------------------------------------------------------\n");
    printf("unsigned long long int||%llu||%llu\n", ULLONG_MAX, ulli);
    printf("------------------------------------------------------------\n");

    return 0;
}
