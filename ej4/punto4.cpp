#include <iostream>
#include <chrono>
#include "punto4.hpp"
using namespace std;

//4a
bool compararStrings(const char* str1, const char* str2) {
    //Si ambos son nulos, son iguales
    if (*str1 == '\0' && *str2 == '\0') {
        return true;
    }
    //Si caracter a caracter no es igual, ya tiro false
    if (*str1 != *str2) {
        return false;
    }

    return compararStrings(str1 + 1, str2 + 1);  // Llamo recursivo en los siguientes caracteres
}

//4)b

void run_runtime_comparison() {
    const char* text1 = "Somebody once told me the world is gonna roll me I ain't the sharpest tool in the shed She was looking kind of dumb with her finger and her thumb In the shape of an `L` on her forehead";
    const char* text2 = "Somebody once told me the world is gonna roll me I ain't the sharpest tool in the shed She was looking kind of dumb with her finger and her thumb In the shape of an `L` on her forehead";

    auto startTime = chrono::high_resolution_clock::now();
    bool resultado = compararStrings(text1, text2);
    auto endTime = chrono::high_resolution_clock::now();

    auto elapsedTime = chrono::duration_cast<chrono::nanoseconds>(endTime - startTime);

    cout << "[Tiempo de ejecución] Las cadenas son " << (resultado ? "iguales" : "diferentes") << "." << endl; 
    cout << "Tiempo de ejecución: " << elapsedTime.count() << " nanosegundos" << endl;
}

