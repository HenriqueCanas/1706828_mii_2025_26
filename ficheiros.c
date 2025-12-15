#include <stdio.h>
#include "pacientes.h"
#include "consultas.h"

void carregarDados() {
    FILE *fp;

    fp = fopen("pacientes.dat", "rb");
    if (fp) {
        fread(&totalPacientes, sizeof(int), 1, fp);
        fread(pacientes, sizeof(Paciente), totalPacientes, fp);
        fclose(fp);
    }

    fp = fopen("consultas.dat", "rb");
    if (fp) {
        fread(&totalConsultas, sizeof(int), 1, fp);
        fread(consultas, sizeof(Consulta), totalConsultas, fp);
        fclose(fp);
    }
}

void guardarDados() {
    FILE *fp;

    fp = fopen("pacientes.dat", "wb");
    fwrite(&totalPacientes, sizeof(int), 1, fp);
    fwrite(pacientes, sizeof(Paciente), totalPacientes, fp);
    fclose(fp);

    fp = fopen("consultas.dat", "wb");
    fwrite(&totalConsultas, sizeof(int), 1, fp);
    fwrite(consultas, sizeof(Consulta), totalConsultas, fp);
    fclose(fp);
}
