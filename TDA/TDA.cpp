#include<iostream>
using namespace std;
class Rectangulo{
    private:
        float largo,ancho;
    public:
        Rectangulo(float,float);
        void perimeto();
        void area();

};

Rectangulo::Rectangulo(float _largo, float _ancho){
    largo = _largo;
    ancho = _ancho;
};
void Rectangulo::perimeto(){
    float _perimetro;
    _perimetro = (2*largo)+(2*ancho);
    cout<<"El perimetro es: "<<_perimetro<<endl;
}
void Rectangulo::area(){
    float _area;
    _area = largo*ancho;
    cout<<"El area es: "<<_area<<endl;
}
int main(){
    Rectangulo r1(11,7);
    r1.perimeto();
    r1.area();
    return 0;
}