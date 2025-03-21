#include "punto4.hpp"
//4c // a esta funcion la tuve que poner aca porque:
//``Las funciones constexpr deben estar disponibles para 
//el compilador al momento de evaluar el código en tiempo de compilación.``
constexpr bool compararCompileTime(const char* str1, const char* str2) {
    return (*str1 == '\0' && *str2 == '\0') ? true :
           (*str1 != *str2) ? false :
           compararCompileTime(str1 + 1, str2 + 1);
}
//La parte de ejecutrar esto y tener la conclusion  del 4c esata en el archivo main
int main() {
    run_runtime_comparison();
    // Comparación en tiempo de compilación
    constexpr bool resultado = compararCompileTime("Somebody once told me the world is gonna roll me Iaintthesahrpesttool in the shed she was looking", "Somebody once told me the world is gonna roll me Iaintthesahrpesttool in the shed she was looking");
    cout << "[Tiempo de compilacion=0] Las cadenas son " << (resultado ? "iguales" : "diferentes") << "." << endl; //si es true, se mete en iguales, sino en diferentes

    return 0;
}
//Como conclusion, viendo que el tiempo de comparacion si se compara con constexpr es 0  porque 
//no tiene que hacer trabajo, las tiene de antemano. Ya comparo en la compilacion.. No ocurre mientras se ejecuta
//pero no se puede usar esta ventaja siempre porque si tenemos algo dinamico eso se 
//tiene que ver en tiempos de ejecucion, no de compilacion, pero para casos asi esta bien saber
//