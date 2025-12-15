#include <stdio.h>
#include <stdlib.h>
#include "pacientes.h"
#include "consultas.h"
#include "ficheiros.h"

int main() {
    int opcao;

    carregarDados(); // carregar pacientes e consultas

    do {
        printf("\n==== SISTEMA DE CONSULTAS MÉDICAS ====\n");
        printf("1. Registar Paciente\n");
        printf("2. Lista De Pacientes\n");
        printf("3. Pesquisar Paciente\n");
        printf("4. Registar Consulta\n");
        printf("5. Lista De Consultas\n");
        printf("0. Sair\n");

        printf("Escolher opcao: ");

        // LEITURA SEGURA (não deixa entrar em loop)
        if (scanf("%d", &opcao) != 1) {
            while (getchar() != '\n'); // limpa buffer
            opcao = -1; // opcao invalida 
        }

        switch (opcao) {
            case 1:
                registarPaciente();
                break;
            case 2:
                listaPacientes();
                break;
            case 3:
                pesquisarPaciente();
                break;
            case 4:
                registarConsulta();
                break;
            case 5:
                listaConsultas();
                break;
            case 0:
                guardarDados();
                printf("A sair...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}

