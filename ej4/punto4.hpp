#include <iostream>
#include <chrono>

using namespace std;
//4)a<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//Elijo *char en vez de std::string porque char*permite ejecutar constexpr, 
//lo que realiza la comparacion en tiempo de compilacion. 
//Ademas std::string maneja memoria dinamica internamente y seria innecesariamente 
//mas complicado para hacer solo esto>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

/**
 * @brief Compara dos cadenas de texto de forma recursiva
 * @param str1 Primera cadena a comparar
 * @param str2 Segunda cadena a comparar
 * @return true si las cadenas son iguales, false en caso contrario
 */
bool compararStrings(const char* str1, const char* str2);

//4)b
/**
 * @brief Compara en tiempo de ejecución y mide el tiempo
 */
void run_runtime_comparison();

//4)c
/**
 * @brief Compara en tiempo de compilación
 */
constexpr bool compararCompileTime(const char* str1, const char* str2);