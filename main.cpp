/*Escreva um programa em C++ que contenha uma função gen() que gere aleatoriamente 
uma letra minúscula do alfabeto, uma função sel() que converte a letra sorteada 
na correspondente maiúscula e uma função prn() de saída que mostre na tela os 
resultados obtidos pelas funções gen() e sel(). */

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int gen();
int sel(int);
void prn(char, char);

int main(){
    char letra_min, letra_mai;
    srand(time(0));
    letra_min = gen();
    letra_mai = sel(letra_min);

    prn(letra_min, letra_mai);
}

int gen(){
    int ascii;

    ascii = 97 + rand() % (122 - 97) + 1;

    return ascii;
}

int sel(int l_min){
    return toupper(l_min);
}


void prn(char lmin, char lmai){
    cout << "A letra sorteada foi " << lmin << endl;
    cout << "Em maiusculo: " << lmai;
}