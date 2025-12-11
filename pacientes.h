#ifndef PACIENTES_H
#define PACIENTES_H

typedef struct {
    int id;
    char nome[100];
    int idade;
    char telefone[20];
    char email[100];
} Paciente;

void registarPaciente();
void listarPacientes();
void pesquisarPaciente();

// variáveis globais do módulo
extern Paciente pacientes[];
extern int totalPacientes;

#endif
