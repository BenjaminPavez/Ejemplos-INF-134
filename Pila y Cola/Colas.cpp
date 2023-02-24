#include<iostream>
using namespace std;

struct Nodo{
    int dato;
    Nodo *Siguiente;

};

//Funcion para determinar si la cola esta vacia o no
bool cola_vacia(Nodo *frente){
    return(frente == NULL)? true: false;
}

//Funcion para eliminar elementos de la cola
void suprimir_cola(Nodo *&frente, Nodo *&fin, int &n){
    n = frente->dato;
    Nodo *aux = frente;
    if(frente == fin){
        frente = NULL;
        fin = NULL;
    }
    else{
        frente = frente->Siguiente;
        
    }
    delete aux;

}

//Funcion para insertar elementos a la cola
void insertar_cola(Nodo *&frente, Nodo *&fin, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->Siguiente = NULL;

    if(cola_vacia(frente)){
        frente = nuevo_nodo;

    }
    else{
        fin->Siguiente = nuevo_nodo;
    }

    fin = nuevo_nodo;
    cout<<"Elemento "<<n<<" insertado correctamente\n";
}

void recorrer_cola(Nodo *&frente,int &a){
    Nodo *nuevo_nodo = frente;
    a = nuevo_nodo->dato;
    frente = nuevo_nodo->Siguiente;
    delete nuevo_nodo;
}

int main(){
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    int dato, a, k=1;
    while(k==1){
        cout<<"Ingrese numero: ";cin>>dato;
        insertar_cola(frente,fin,dato);
        cout<<"Para agregar otro elemento presione 1: ";cin>>k;
    }
    while (frente != NULL){
        recorrer_cola(frente, a);
        if(frente != NULL){
            cout<<a<<" - ";
        }
        else{
            cout<<a<<" . ";
        }
    }
    //Eliminar los elementos de la cola
    cout<<"\nQuitando elementos de la cola";
    while(frente != NULL){
        suprimir_cola(frente,fin,dato);
        if(frente != NULL){
            cout<<dato<<" , ";
        }
        else{
            cout<<dato<<" . ";
        }

    }
    
    return 0;
}