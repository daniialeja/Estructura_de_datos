#include <iostream>
#include <Persona.hpp>
using namespace std;

int main(int argc, char **argv)
{
    Persona Luis;
    Luis.setEdad(18);
    Luis.setGenero(false);
    Luis.mostrar();
    
    Persona Andres;
    Andres.setEdad(19);
    Andres.setGenero(false);
    Andres.mostrar();
    
    Persona Sofia;
    Sofia.setEdad(20);
    Sofia.setGenero(true);
    Sofia.mostrar();
    
    Persona Daniel;
    Daniel.setEdad(21);
    Daniel.setGenero(false);
    Daniel.mostrar();
    
    Persona Julio;
    Julio.setEdad(22);
    Julio.setGenero(false);
    Julio.mostrar();
    
    Persona Carla;
    Carla.setEdad(23);
    Carla.setGenero(true);
    Carla.mostrar();
    
    Persona Anastasio;
    Anastasio.setEdad(24);
    Anastasio.setGenero(false);
    Anastasio.mostrar();
    
    Persona Miguel ;
    Miguel.setEdad(25);
    Miguel.setGenero(false);
    Miguel.mostrar();
    
    Persona Ana;
    Ana.setEdad(26);
    Ana.setGenero(true);
    Ana.mostrar();
    
    Persona Pedro;
    Pedro.setEdad(27);
    Pedro.setGenero(false);
    Pedro.mostrar();
    
    return 0;
}