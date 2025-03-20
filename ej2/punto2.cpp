#include <iostream>
#include <string>
#include <fstream>
#include "punto2.hpp"

using namespace std;

string getSeverityLabel(SeverityLevel level) {
    switch (level) {
        case DEBUG: return "[DEBUG]";
        case INFO: return "[INFO]";
        case WARNING: return "[WARNING]";
        case ERROR: return "[ERROR]";
        case CRITICAL: return "[CRITICAL]";
        case SECURITY: return "[SECURITY]";
        default: return "[UNKNOWN COMMAND]";
    }
}

void logMessage(const string& mensaje, SeverityLevel nivel) {
    ofstream logFile("log.txt", ios::app); // Abre el archivo en modo append
    if (!logFile) {
        cerr << "Error al abrir el archivo de log." << endl;
        return;
    }

    logFile << getSeverityLabel(nivel) << " " << mensaje << endl; //Esto es lo que escribe
    logFile.close();
}

// punto b)ii

void logMessage(const string& mensaje, const string& archivo, int linea) {
    ofstream logFile("log.txt", ios::app);
    if (!logFile) {
        cerr << "Error al abrir el archivo de log." << endl;
        return;
    }

    logFile << "[ERROR] " << mensaje << " en " << archivo << ":" << linea << endl;
    logFile.close();
}

//b)iii


void logMessage(const string& mensaje, const string& usuario) {
    ofstream logFile("log.txt", ios::app); //Abrir modo append
    if (!logFile) {
        cerr << "Error al abrir el archivo de log." << endl; //Por si no hay
        return;
    }

    logFile << "[SECURITY] Usuario: " << usuario << " - " << mensaje << endl;//Escribe en el archivoe sto
    logFile.close();
}
// b)iv esta en el archivo main

