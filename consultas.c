#include <stdio.h>
#include "consultas.h"
#include "pacientes.h"

Consulta consultas[200];
int totalConsultas = 0;

void registarConsulta() {
    Consulta c;

    printf("\n--- Registar Consulta ---\n");

    printf("ID do paciente: ");
    scanf("%d", &c.pacienteId);

    printf("Especialidade: ");
    scanf(" %[^\n]", c.especialidade);

    printf("Data (DD/MM/AAAA): ");
    scanf(" %[^\n]", c.data);

    printf("Hora (HH:MM): ");
    scanf(" %[^\n]", c.hora);

    c.id = totalConsultas + 1;

    consultas[totalConsultas] = c;
    totalConsultas++;

    printf("Consulta registada com sucesso!\n");
}

void listaConsultas() {
    printf("\n--- Lista de Consultas ---\n");

    if (totalConsultas == 0) {
        printf("Nenhuma consulta registada.\n");
        return;
    }

    for (int i = 0; i < totalConsultas; i++) {
        printf("Consulta %d | Paciente %d | %s | %s às %s\n",
               consultas[i].id,
               consultas[i].pacienteId,
               consultas[i].especialidade,
               consultas[i].data,
               consultas[i].hora);
    }
}
