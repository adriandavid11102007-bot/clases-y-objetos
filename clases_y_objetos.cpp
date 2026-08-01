#include <iostream>
#include <string>

using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    int anioPublicacion;
    int edicion;
    int cantidadPaginas;

public:
   
    Libro(string t, string a, int anio, int ed, int pag) {
        titulo = t;
        autor = a;
        anioPublicacion = anio;
        edicion = ed;
        cantidadPaginas = pag;
    }

   
    Libro() {
        titulo = "";
        autor = "";
        anioPublicacion = 0;
        edicion = 0;
        cantidadPaginas = 0;
    }

    void mostrardatos() {
        cout << "\n--- Detalles del Libro ---" << endl;
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Año de Publicación: " << anioPublicacion << endl;
        cout << "Edición: " << edicion << endl;
        cout << "Cantidad de Páginas: " << cantidadPaginas << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
   
    Libro listaLibros[5];

    string t, a;
    int anio, ed, pag;

    cout << "=== REGISTRO DE 5 LIBROS ===" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "\nIntroduce los datos del libro " << (i + 1) << ":" << endl;

        cout << "Titulo: ";
        getline(cin >> ws, t);

        cout << "Autor: ";
        getline(cin, a);

        cout << "Ano de Publicacion: ";
        cin >> anio;

        cout << "Edicion: ";
        cin >> ed;

        cout << "Cantidad de Paginas: ";
        cin >> pag;

        cin.ignore(); 

        
        listaLibros[i] = Libro(t, a, anio, ed, pag);
    }

    cout << "\n=== MOSTRANDO LA INFORMACIÓN DE LOS LIBROS ===" << endl;

    for (int i = 0; i < 5; i++) {
        listaLibros[i].mostrardatos();
    }

    return 0;
}

