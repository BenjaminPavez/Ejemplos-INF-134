#include<iostream>
using namespace std;
struct Nodo{
   int dato;
   Nodo *siguiente;
};
//Agregar elementos a una pila
void agregar_pila(Nodo *&pila, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
}
//Sacar elementos a una pila
void sacar_elemento(Nodo *&pila, int &n){
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}

int main(){
    Nodo *pila = NULL;
    int valor, var;
    //Ingresar datos a la pila
    do{
        cout<<"Ingrese un numero: ";cin>>var;
        agregar_pila(pila, var);
        cout<<"Para agregar un nuevo elemento a la pila ingrese 1, de lo contrario presione otro numero: ";cin>>valor;
    }while(valor == 1);

    //Imprimir datos a la pila
    while (pila != NULL){
        sacar_elemento(pila,var);
        if(pila != NULL){
            cout<<var<<" , ";
        }
        else{
            cout<<var<<" . ";
        }
    }
    return 0;

}