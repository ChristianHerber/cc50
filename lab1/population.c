#include <stdio.h>
#include <cs50.h>

int main(void)
{

    //Declarando as variáveis que serão utilizadas
    int finalPopulation, population, gain, loss, years;

    //Atribuindo valor inicial à variável years
    years = 0;

    //Recebendo a entrada da população inicial e verificando se é um número positivo
    do
    {
        population = get_int("População Inicial: ");
    }
    while (population < 1);

    //Recebendo a entrada da população final a ser atingida, e verificando se não é menor que a população inicial
    do
    {
        finalPopulation = get_int("População Final: ");
    }
    while (finalPopulation <= population);


    //Realizando o cálculo de perda e ganho da população por ano, até que atinga a população final requisitada.
    //Incrementando 1 ano a cada passada do loop
    do
    {
        gain = population / 3;
        loss = population / 4;
        population += gain - loss;
        years++;
    }
    while (population < finalPopulation);


    printf("Levará %i", years);
    printf(" anos para atingir a a população de %i\n", finalPopulation);

}