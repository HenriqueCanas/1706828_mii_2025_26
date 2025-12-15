#ifndef CONSULTAS_H
#define CONSULTAS_H

typedef struct {
    int id;
    int pacienteId;
    char especialidade[50];
    char data[20];
    char hora[10];
} Consulta;

void registarConsulta();
void listaConsultas();

extern Consulta consultas[200];
extern int totalConsultas;

#endif
