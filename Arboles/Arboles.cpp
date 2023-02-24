#include<iostream>
using namespace std;

struct Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
};

void menu();
Nodo *crear_Nodo(int);
void insertar(Nodo *&,int);
void mostrar_Arbol(Nodo *, int);

Nodo *arbol = NULL;

int main(){
    menu();
    return 0;
}



//Funcion para crear nodo
Nodo *crear_Nodo(int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;

    return nuevo_nodo;
}

//Funcion que inserta nodo en el arbol
void insertar(Nodo *&arbol,int n){
    if(arbol == NULL){
        Nodo *nuevo_nodo = crear_Nodo(n);
        arbol = nuevo_nodo;
    }
    else{
        int valorRaiz = arbol->dato;
        if(n < valorRaiz){
            insertar(arbol->izq,n);
        }
        else{
            insertar(arbol->der,n);
        }
    }
}

void search(Nodo *&arbol,int n){
    bool busqueda;
    if(arbol == NULL){
        return;
    }
    else{
        if(n > arbol->dato){
            search(arbol->der,n);

        }
        if(n < arbol->dato){
            search(arbol->izq,n);
        }
        else{
            busqueda = true;
            cout<<"Se ha encontrado una coincidencia del valor "<<n<<endl;
            
        }
    }
    cout<<"No se ha encontrado ninguna coincidencia del valor "<<n<<endl;
}

//Funcion de Menu
void menu(){
    int dato,opcion, contador=0;
    do{
        cout<<"\t.:MENU:."<<endl;
        cout<<"1. Insertar un nuevo nodo"<<endl;
        cout<<"2. Mostrar el arbol completo"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Opcion: ";cin>>opcion;
        switch (opcion){
            case 1: cout<<"\nIngrese un numero: ";cin>>dato;
                    insertar(arbol, dato);
                    cout<<"\n";
                    break;
            case 2: cout<<"\nMostrando arbol completo:\n\n";
                    mostrar_Arbol(arbol,contador);
                    break;
        
        }
    }while(opcion !=3);
}

//Funcion para mostrar el arbol completo
void mostrar_Arbol(Nodo *arbol, int cont){
    if(arbol == NULL){
        return;
    }
    else{
        mostrar_Arbol(arbol->der,cont+1);
        for(int i=0;i<cont;i++){
            cout<<"   ";
        }
        cout<<arbol->dato<<endl;
        mostrar_Arbol(arbol->izq,cont+1);
    }
}


