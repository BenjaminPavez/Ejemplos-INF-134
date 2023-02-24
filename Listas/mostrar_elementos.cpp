#include<iostream>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void mostrarLista(Nodo *lista){
    Nodo *actual = new Nodo();       // Crea un nodo
    actual = lista;                  // El nodo lo guala a lista, por lo que estara en el primer nodo

    while(actual != NULL){           // Itera hasta que actual sea null, ya que significaria que llego al final de la lista
        cout<<actual->dato<<" -> ";  // Ingresa en cada componente del nodo
        actual = actual->siguiente;  // Actual ahora pasa al siguiente nodo
    }

}

int main(){
    return 0;
}