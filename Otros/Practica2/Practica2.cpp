#include <iostream>
#include <string>
using namespace std;

struct Persona {
    string nombre;
    string genero;
    string salon;
};

int main() {
    Persona hombres[35] = {
        {"Juan", "Masculino", "N"}, {"Pedro", "Masculino", "N"}, {"Luis", "Masculino", "N"}, {"Carlos", "Masculino", "N"}, {"Jorge", "Masculino", "N"},
        {"Miguel", "Masculino", "N"}, {"Fernando", "Masculino", "N"}, {"Sergio", "Masculino", "N"}, {"Ricardo", "Masculino", "N"}, {"Alberto", "Masculino", "N"},
        {"Manuel", "Masculino", "N"}, {"Francisco", "Masculino", "N"}, {"Rafael", "Masculino", "N"}, {"Andrés", "Masculino", "N"}, {"Javier", "Masculino", "N"},
        {"Hugo", "Masculino", "N"}, {"Diego", "Masculino", "N"}, {"Adrián", "Masculino", "N"}, {"Iván", "Masculino", "N"}, {"Oscar", "Masculino", "N"},
        {"David", "Masculino", "N"}, {"Daniel", "Masculino", "N"}, {"Alejandro", "Masculino", "N"}, {"Eduardo", "Masculino", "N"}, {"Roberto", "Masculino", "N"},
        {"Gabriel", "Masculino", "N"}, {"Mario", "Masculino", "N"}, {"Enrique", "Masculino", "N"}, {"Pablo", "Masculino", "N"}, {"Raúl", "Masculino", "N"},
        {"Antonio", "Masculino", "N"}, {"José", "Masculino", "N"}, {"Ángel", "Masculino", "N"}, {"Tomás", "Masculino", "N"}, {"Sebastián", "Masculino", "N"}
    };

    Persona mujeres[15] = {
        {"María", "Femenino", "N"}, {"Ana", "Femenino", "A"}, {"Laura", "Femenino", "A"}, {"Carmen", "Femenino", "A"}, {"Isabel", "Femenino", "A"},
        {"Marta", "Femenino", "N"}, {"Elena", "Femenino", "A"}, {"Lucía", "Femenino", "A"}, {"Sara", "Femenino", "A"}, {"Paula", "Femenino", "A"},
        {"Clara", "Femenino", "N"}, {"Sofía", "Femenino", "A"}, {"Alicia", "Femenino", "A"}, {"Patricia", "Femenino", "A"}, {"Cristina", "Femenino", "A"}
    };

    cout << "Hombres:" << endl;
    for (int i = 0; i < 35; i++) {
        if(hombres[i].genero=="Masculino"){
        cout << hombres[i].nombre << " está en el salón " << hombres[i].salon << "." << endl;
        hombres[i].salon = "B";
    }
    }

    cout << "\nMujeres:" << endl;
    for (int i = 0; i < 15; i++) {
        if(mujeres[i].genero=="Femenino"){
        mujeres[i].salon =="A";
        cout<< mujeres[i].nombre << " está en el salón " << mujeres[i].salon << "." << endl;

    }
    }

    return 0;
}