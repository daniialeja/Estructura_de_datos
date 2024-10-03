#include "Persona.hpp"
#include <iostream>
Persona::Persona()
{
}

int Persona::getEdad(){
    return this->edad;
}
    
bool Persona::esMujer(){
    return genero;
}    

void Persona::setEdad(int nuevaEdad){
    this->edad = nuevaEdad;
}

void Persona::setGenero(bool mujer){
    this->genero = mujer;
}

void Persona::mostrar(){
    bool gen = esMujer();
    if (gen){
        char s[6] = {'M','u','j','e','r','\0'};
        std::cout << "Edad: " << edad << " Genero: " << s << " dni: " << dni << std::endl;
    }else{
        char s[7] = {'H','o','m','b','r','e','\0'};
        std::cout << "Edad: " << edad << " Genero: " << s << " dni: " << dni << std::endl;
    }
    
}

Persona::~Persona()
{
}