#ifndef PACIENTES_H
#define PACIENTES_H

typedef struct {
    int id;
    char nome[50];
    int idade;
    char telefone[20];
    char email[50];
} Paciente;

void registarPaciente();
void listaPacientes();
void pesquisarPaciente();

extern Paciente pacientes[100];
extern int totalPacientes;

#endif
