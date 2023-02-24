#include<iostream>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

void insertarLista(Nodo *&lista, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;

    Nodo *aux1 = lista;
    Nodo *aux2;

    while((aux1 != NULL) && (aux1->dato <n)){
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if(lista == aux1){
        lista = nuevo_nodo;
    }
    else{
        aux2->siguiente = nuevo_nodo;
    }

    nuevo_nodo->siguiente = aux1; 
}

void mostrarLista(Nodo *lista){
    Nodo *actual = new Nodo();       // Crea un nodo
    actual = lista;                  // El nodo lo iguala a lista, por lo que estara en el primer nodo

    while(actual != NULL){           // Itera hasta que actual sea null, ya que significaria que llego al final de la lista
        cout<<actual->dato<<" -> ";  // Ingresa en cada componente del nodo
        actual = actual->siguiente;  // Actual ahora pasa al siguiente nodo
    }

}


int main(){
    Nodo *lista = NULL;
    int dato;
    cout<<"Ingrese Numero: ";cin>>dato;
    insertarLista(lista,dato);

    cout<<"Ingrese Numero: ";cin>>dato;
    insertarLista(lista,dato);

    cout<<"Ingrese Numero: ";cin>>dato;
    insertarLista(lista,dato);

    mostrarLista(lista);
    
    return 0;
}