#include <iostream>

using namespace std;
/*
///Imprimir los elementos

void imprimir(int *ptr,int tam){
    int arr[4]={1,2,3,4};
    while(tam<4){
        *ptr=arr[tam++];
        cout << *ptr;
    }
}

int main(){
    int arr[4];
    int tam=0;
    imprimir(&arr[4],tam);
    return 0;
}
*/
///Suma

void sumar(int *ptr,int tam){
    int arr[4]={1,3,3,3};
    while(tam<4){
        *ptr+=arr[tam++];
        cout << *ptr;
    }
}

int main(){
    int suma=0;
    int arr[4];
    int tam=0;
    sumar(&arr[4],tam);
    return 0;
}

