#include <stdio.h>
#include <string.h>
#include "pacientes.h"

Paciente pacientes[100];
int totalPacientes = 0;

void registarPaciente() {
    printf("\n--- Registar Paciente ---\n");
    Paciente p;

    p.id = totalPacientes + 1;

    printf("Nome: ");
    scanf(" %[^\n]", p.nome);

    printf("Idade: ");
    scanf("%d", &p.idade);

    printf("Telefone: ");
    scanf(" %[^\n]", p.telefone);

    printf("Email: ");
    scanf(" %[^\n]", p.email);

    pacientes[totalPacientes] = p;
    totalPacientes++;

    printf("Paciente registado com sucesso!\n");
}

void listaPacientes() {
    printf("\n--- Lista de Pacientes ---\n");

    if (totalPacientes == 0) {
        printf("Nao existem pacientes registados.\n");
        return;
    }

    for (int i = 0; i < totalPacientes; i++) {
        printf("ID: %d, Nome: %s, Idade: %d, Telefone: %s, Email: %s\n",
               pacientes[i].id, pacientes[i].nome, pacientes[i].idade,
               pacientes[i].telefone, pacientes[i].email);
    }
}

void pesquisarPaciente() {
    int id;
    printf("\nIntroduza o ID do paciente: ");
    scanf("%d", &id);

    for (int i = 0; i < totalPacientes; i++) {
        if (pacientes[i].id == id) {
            printf("Encontrado:\n");
            printf("Nome: %s\nIdade: %d\nTelefone: %s\nEmail: %s\n",
                   pacientes[i].nome, pacientes[i].idade,
                   pacientes[i].telefone, pacientes[i].email);
            return;
        }
    }
    printf("Paciente nao encontrado.\n");
}
