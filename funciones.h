struct Libro 
{
    int id;
    char titulo[100];
    char autor[50];
    int publicacion_año;
    char estado[20];
};
void validardatos(int x, void *y, char tipo);
void BorrarSaltolinea(char *a);
void Registro(struct Libro *a, int *cont);
void mostarLibros(struct Libro *a, int *cont);
void buscarLibro(struct Libro *a, int *cont);
void ModificarEstado(struct Libro *a, int *cont);