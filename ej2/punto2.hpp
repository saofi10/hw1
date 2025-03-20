#ifndef PUNTO2_HPP
#define PUNTO2_HPP

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Niveles de severidad como un enum
enum SeverityLevel {
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    CRITICAL,
    SECURITY
};

/**
 * @brief Convierte un nivel de severidade n la etiqueta debida
 * @param level Nivel de severidad
 * @return String con la etiqueta del nivel de severidad
 */
string getSeverityLabel(SeverityLevel level);

/**
 * @brief Registra un mensaje en el archivo de log con un nivel de severidad
 * @param mensaje Mensaje a registrar
 * @param nivel Nivel de severidad del mensaje
 */
void logMessage(const string& mensaje, SeverityLevel nivel);

/**
 * @brief Registrau n mensaje de error en el archivo de log con información del archivo y línea
 * @param mensaje Mensaje de error a registrar
 * @param archivo Nombre del archivo donde ocurrio el error
 * @param linea Numero de linea donde ocurrio el error
 */
void logMessage(const string& mensaje, const string& archivo, int linea);

/**
 * @brief Registra evento de seguridad con el usuario involucrado
 * @param mensaje Mensaje de seguridad a registrar
 * @param usuario Usuario relacionado con el evento
 */
void logMessage(const string& mensaje, const string& usuario);

#endif // PUNTO2_HPP
