#ifndef CONSULTAS_H
#define CONSULTAS_H

typedef struct {
    int idConsulta;
    int idPaciente;
    char especialidade[50];
    char medico[100];
    char data[11];
    char hora[6];
} Consulta;

void registarConsulta();
void listarConsultas();

extern Consulta consultas[];
extern int totalConsultas;

#endif
