#include "punto2.hpp"
#include <iostream>
using namespace std;

// b)iv
int main(int argc, char* argv[]) {
    try {
        //Pruebas log, sobrecarga de logmessage
        logMessage("Todo ok", INFO);
        logMessage("Se detectan cosas", WARNING);
        logMessage("Acceso denegado", "saofi10");
        logMessage("Error!! en esto", "config.txt", 42);
        logMessage("Muy mal error!!", CRITICAL);
        
        throw runtime_error("Simulated runtime error"); //simulacion de un error en runtime
    } 
    catch(const exception& e) {//Si agarra un error en runtime, tira la excepcion
        logMessage(e.what(), ERROR); //Esto te da un mensaje descriptivo del error (el e.what)
        cerr << "Runtime error: " << e.what() << endl;
        return 1;
    }

    return 0;
}
