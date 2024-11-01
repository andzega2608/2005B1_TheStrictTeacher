/*
* Nombre: Andrés Ignacio Zegales Taborga
* Fecha: 24/10/2024
* Tema: The Strict Teacher 2005B1 - Codeforces
*/

#include <iostream>
#include <vector>
using namespace std;
/*
* bubbleSort(vector<int>& vec)
*
* Se usa el metodo de ordenamiento bubble sort con el
* fin de ordenar tanto la posicion del estudiante como
* de los maestros
*
* param vector<int> &vec
* @return
*/
void bubbleSort(vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (vec[j] > vec[j + 1]) {
                swap(vec[j], vec[j + 1]);
            }
        }
    }
}
/*
* encontrarSig(const vector<int>& copia, int est)
*
* Se usa este metodo para encontrar al profesor más cercano
* despues del estudiante
*
* param const vector<int>& copia, int est
* return ubicacion del profesor mas cercano despues de David
*/
int encontrarSig(const vector<int>& copia, int est) {
    for (int i = 0; i < copia.size() - 1; i++) {
        if (est == copia[i]) {
            return copia[i + 1];
        }
    }
    return -1;
}
/*
* encontrarAnt(const vector<int>& copia, int est)
*
* Se usa este metodo para encontrar al profesor más cercano
* antes del estudiante
*
* param const vector<int>& copia, int est
* return ubicacion del profesor mas cercano antes de David
*/
int encontrarAnt(const vector<int>& copia, int est) {
    for (int i = 1; i < copia.size(); i++) {
        if (est == copia[i]) {
            return copia[i - 1];
        }
    }
    return -1;
}
/*
* calcularMov(const vector<int>& posiciones, int est, int celdas)
*
* Metodo que se encarga de calcular la cantidad de movimientos
* optimizados acorde a los casos explicados
*
* param const vector<int>& posiciones, int est, int celdas
* return cantidad de movimientos minimos
*/
int calcularMov(const vector<int>& posiciones, int est, int celdas) {
    vector<int> copia = posiciones;
    bubbleSort(copia);
    int prof1, prof2;
    int sze = copia.size();
    if (est == copia[0]) {
        prof1 = encontrarSig(copia, est);
        return prof1 - 1;
    } else if (est == copia[sze - 1]) {
        prof2 = encontrarAnt(copia, est);
        return celdas - prof2;
    } else {
        prof1 = encontrarAnt(copia, est);
        prof2 = encontrarSig(copia, est);
        return (prof2 - prof1) / 2;
    }
}

int main() {
    int intentos;
    cin >> intentos;
    for (int a = 0; a < intentos; a++) {
        int celdas = 0, n_prof = 0, n_int = 0, prof = 0, est = 0;
        cin >> celdas >> n_prof >> n_int;
        vector<int> posiciones(n_prof + 1);

        for (int i = 1; i <= n_prof; i++) {
            cin >> prof;
            posiciones[i] = prof;
        }

        for (int j = 0; j < n_int; j++) {
            cin >> est;
            posiciones[0] = est;
            int movimientos = calcularMov(posiciones, est, celdas);
            cout << movimientos << "\n";
        }
    }
    return 0;
}
