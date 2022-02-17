
#if 0
#include <iostream>
#include <string>

std::string* mensaje(std::string* texto) {
    return texto;
}

int main() {
    std::string texto{ "hola amigo" };
    std::string* ptrtexto{ &texto };
    std::cout << mensaje(ptrtexto) << "\n";
    auto devuelto = mensaje(ptrtexto);
    std::cout << devuelto << "\n";
    std::string cambiar{ *devuelto };
    std::cout << cambiar;

    return 0;
}




std::string nombre;
std::string curso;
int edad;
int id;
int tutorId;
double optativas;
int diaNacimiento;
int mesNacimiento;
int anNacimiento;
int materiasOptativas;
int nombrePadre;
int nombreMadre;




struct Alumno
{
    std::string nombre{};
    int id{};
    int edad{};
    int tutorId{};
};


Alumno juan; // crea una struct Alumno para juan


Alumno francisco; // crea una struct Alumno para francisco




#include <string>
#include <iostream>
struct Alumno
{
    std::string nombre{};
    int id{};
    int edad{};
    int tutorId{};
};

int main()
{
    Alumno juan;
    Alumno francisco;
    juan.edad = 17;  // operador de selección de miembro (.) para seleccionar el miembro edad de la variable juan
    std::cout << juan.edad; // imprime la edad de juan

    return 0;
}

#endif

#include <iostream>

struct Alumno
{
    std::string nombre{};
    int id{};
    int edad{};
    int tutorId{};
};

int main()
{
    Alumno juan;
    juan.id = 6;
    juan.edad = 17;
    juan.tutorId = 45;

    Alumno francisco;
    francisco.id = 15;
    francisco.edad = 28;
    francisco.tutorId = 32;

    int edadTotal{ juan.edad + francisco.edad };

    if (juan.id > francisco.id)
        std::cout << "El id de Juan es más alto que el de Francisco\n";
    else if (juan.id < francisco.id)
        std::cout << "El id de Juan es más bajo que el de Francisco\n";
    else
        std::cout << "id repetido, debe revisarse\n";

    // Modificar id
    francisco.id += 3;

    // aumentar edad de juan
    ++juan.edad; // usa pre-incremento para aumentar la edad de juan en 1

    return 0;
}








