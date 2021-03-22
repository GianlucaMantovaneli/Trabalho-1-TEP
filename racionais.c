#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "racionais.h"

struct Racional_st
{ 
    long int num;
    long int den;
};
typedef struct Racional_st Racional_pt;

Racional_pt* criaRacional(long int num, long int den)
{
    Racional_pt* R = (Racional_pt*) malloc(sizeof(Racional_pt));

    if (R==NULL)
    {
        printf("memoria insuficiente!\n");
        exit(1);
    }

    R->num = num;
    R->den = den;

        return R;
}

void destroiRacional(Racional_pt* R)
{
    free(R);
}

Racional_pt* copiaRacional(Racional_pt* R1, Racional_pt* R2)
{
    R1->num == R2->num;
    R1->den == R2->den;

        return R2;
}

static long int algoritmo_euclidiano_recursivo(long int num, long int den){
    if(num == 0){
        return den;
    }
    else{
        return algoritmo_euclidiano_recursivo(den % num, num);
    }
}

int comparaRacionais(Racional_pt* R1, Racional_pt* R2)
{

}

int equivalencia(Racional_pt* R1, Racional_pt* R2)
{
    Racional_pt aux1, aux2;

    long int mmc1 = algoritmo_euclidiano_recursivo(R1->num, R1->den);
    long int mmc2 = algoritmo_euclidiano_recursivo(R2->num, R2->den);

    aux1.num = R1->num / mmc1;
    aux1.den = R1->den / mmc1;
    aux2.num = R2->num / mmc2;
    aux2.den = R2->den / mmc2;

    if(aux1.num == aux2.num && aux1.den == aux2.den){
        return 1;
    }
    else{
        return 0;
    }
}

int denominadorZero(Racional_pt* R)
{
    if (R->den == 0)
    {
        return 1;
    }else
        return 0;
    
}

int numeroZero(Racional_pt* R)
{
    if (R->num == 0)
    {
        return 1;
    }else
        return 0;
    
}

int ambosZero(Racional_pt* R)
{
    if (R->num == 0 && R->den == 0)
    {
        return 1;
    }else
        return 0;
    
}

Racional_pt* somaRacionais(Racional_pt* R1, Racional_pt* R2, Racional_pt* R3)
{

}
