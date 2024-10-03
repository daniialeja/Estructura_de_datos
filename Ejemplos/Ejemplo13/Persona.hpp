class Persona
{
public:
    Persona();
    ~Persona();
    int getEdad();
    bool esMujer();
    void setEdad(int nuevaEdad);
    void setGenero(bool mujer);
    void mostrar();
    
private:
    int edad;
    bool genero;
    char dni[10] = "12345678A";
};