#ifndef CURSOSS_H
#define CURSOSS_H


using namespace std;

struct Curso {
    int codigo;
    char nombre[50];
    char Creditos[50];
    char requisitos[50];

};
class CursosCRUD {
public:
    void IngresarCa();
    void ModificarCa();
    void BorrarCa();
    void DesplegarCa();
    void CrudCursos();

};
#endif // CURSOSS_H
