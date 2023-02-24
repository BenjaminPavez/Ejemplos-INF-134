#include<iostream>
using namespace std;
class Auto{
    private:
        int gasolina, vel_i,vel_f;
    public:
        Auto(int,int,int);
        void arrancar();
        void aumentar_velocidad();
        void disminuir_velocidad();

};
Auto::Auto(int _gasolina, int _vel_i, int _vel_f){
    gasolina = _gasolina;
    vel_i = _vel_i;
    vel_f = _vel_f;
};
void Auto::arrancar(){
    cout<<"Iniciando"<<endl;
    if(gasolina>0){
        cout<<"Arrancado Correctamente"<<endl;
    }
    else{
        cout<<"Bajo nivel de gasolina"<<endl;
    }
};
void Auto::aumentar_velocidad(){
    if(gasolina>0){
        for(int i=0;i<vel_i;i++){
            cout<<i<<endl;
        }
        if(vel_i>=100){
            cout<<"Exceso de velocidad, reduzca"<<endl;
        }
    }
    else{
        cout<<"Bajo nivel de gasolina"<<endl;
    }
};
void Auto::disminuir_velocidad(){
    if(gasolina>0){
        for(int i=vel_f;i>0;i--){
            cout<<i<<endl;
        }
    }
    else{
        cout<<"Bajo nivel de gasolina"<<endl;
    }
};
int main(){
    Auto Ford(30,41,100);
    Ford.disminuir_velocidad();
    return 0;
}