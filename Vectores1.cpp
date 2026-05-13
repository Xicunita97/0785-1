#include <iostream>
#include <vector>
#include <string>

#include <algorithm>

unsing namespace std;

template<typename T>
void print_vector(const vector<T>& elems) {
    for (int i = 0; i < elems.size(); i += 1) {
        cout << elems[i] << endl;
    }
}

void print_array(const int array[], const int SIZE) {
    for (int i = 0; i < SIZE; i += 1) {
        cout << array[i] << endl;
    }
}

int main() {
    //
    // ARRAYs (C)
    // Vectores simples não-extensíveis.
    // 
    // TIPO_DADOS VAR[] = {OBJ1, OBJ2, ...};
    // TIPO_DADOS VAR[SIZE];
    //
    // ARRAY_OU_VECTOR[POS] => elemento na posição POS, em que POS é um valor
    //                         entre 0 e SIZE - 1 (SIZE é o número de elementos
    //                         no ARRAY_OU_VECTOR)

    const int SIZE = 8;
    int idadesA[] = {20, 18, 37, 41, 21, 46, 44, 29};
    cout << "ARRAY idadesA" << endl;
    cout << "1o elemento     : " << idadesA[0] << endl;
    cout << "Último elemento : " << idadesA[SIZE-1] << endl;

    cout << "Mostra todos:" << endl;
    print_array(idadesA, SIZE);

    cout << "\nCopiar idadesA para idadesB" << endl;
    int idadesB[SIZE];

    /*
    idadesB[0] = idadesA[0];
    idadesB[1] = idadesA[1];
    idadesB[2] = idadesA[2];
    etc.
    */

    for (int i = 0; i < SIZE; i += 1) {
        idadesB[i] = idadesA[i];
    }
    print_array(idadesB, SIZE);
}
