#include <stdio.h>
#include <stdlib.h>
#include "pacientes.h"
#include "consultas.h"
#include "ficheiros.h"

int main() {
    carregarDados(); // carrega dados no arranque

    int opcao;

    do {
        printf("\n===== SISTEMA DE CONSULTAS MEDICAS =====\n");
        printf("1. Registar Paciente\n");
        printf("2. Listar Pacientes\n");
        printf("3. Pesquisar Paciente\n");
        printf("4. Registar Consulta\n");
        printf("5. Listar Consultas\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);
        getchar(); // limpar buffer

        switch (opcao) {
        case 1: registarPaciente(); break;
        case 2: listarPacientes(); break;
        case 3: pesquisarPaciente(); break;
        case 4: registarConsulta(); break;
        case 5: listarConsultas(); break;
        case 0: guardarDados(); break;
        default:
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}
