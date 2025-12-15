# 1706828_mii_2025_26
Relatório do Trabalho prático
Programação I

Sistema de Consultas Médicas



Aluno: Henrique Canas 1706828, 
       HenriqueCanas, henriquecanas2@gmail.com

1. Descrição do Trabalho	3
2. Implementação do Trabalho	5
3. Funcionamento do trabalho	6
4. Conclusão	7

1.	Descrição do Trabalho
O presente trabalho prático, desenvolvido no âmbito da unidade curricular de Programação I, consiste na implementação de um Sistema de Gestão de Consultas Médicas, utilizando a linguagem de programação C.
O sistema tem como principal objetivo permitir a gestão básica de informações relacionadas com pacientes e consultas médicas, através de uma aplicação de consola. As principais funcionalidades implementadas são:
•	Registo de pacientes, incluindo dados pessoais como nome, idade, telefone e email;
•	Listagem de todos os pacientes registados no sistema;
•	Pesquisa de pacientes através do identificador (ID);
•	Registo de consultas médicas associadas a um paciente, contendo informação sobre especialidade, médico, data e hora;
•	Listagem das consultas registadas;
•	Armazenamento persistente dos dados em ficheiros, permitindo que a informação seja mantida entre diferentes execuções do programa.
O sistema foi desenvolvido com uma abordagem modular, recorrendo à divisão do código em vários ficheiros (.c e .h), de forma a melhorar a organização, legibilidade e manutenção do código.
Arquitetura do Sistema
A arquitetura do sistema segue um modelo simples e organizado, baseado em módulos independentes, onde cada componente é responsável por uma parte específica da aplicação.
•	Interface de Utilizador (main.c):
Responsável pela apresentação do menu principal e pela interação com o utilizador.
•	Módulo de Pacientes (pacientes.c / pacientes.h):
Gere todas as operações relacionadas com os pacientes, como registo, listagem e pesquisa.
•	Módulo de Consultas (consultas.c / consultas.h):
Responsável pelo registo e listagem das consultas médicas.
•	Módulo de Ficheiros (ficheiros.c / ficheiros.h):
Trata da leitura e escrita dos dados em ficheiros, garantindo a persistência da informação.

2.	Implementação do Trabalho	
  A implementação do sistema foi realizada em linguagem C, recorrendo a uma abordagem modular, com o objetivo de facilitar a organização do código, a sua leitura e manutenção. O projeto foi dividido em vários ficheiros, sendo cada um responsável por uma parte específica do sistema.
Estrutura do Projeto
O sistema encontra-se organizado da seguinte forma:
•	main.c
Contém a função main() e o menu principal. É responsável pela interação com o utilizador e pela chamada das funções dos diferentes módulos, de acordo com a opção selecionada.
•	pacientes.c / pacientes.h
Este módulo implementa todas as funcionalidades relacionadas com os pacientes. São utilizadas estruturas (struct) para armazenar a informação de cada paciente, incluindo nome, idade, telefone e email.
As principais funções implementadas neste módulo são:
o	registarPaciente() – permite adicionar um novo paciente ao sistema;
o	listarPacientes() – apresenta a lista de todos os pacientes registados;
o	pesquisarPaciente() – permite pesquisar um paciente através do seu identificador (ID).
•	consultas.c / consultas.h
Este módulo é responsável pela gestão das consultas médicas. Cada consulta está associada a um paciente, através do seu ID.
As funções implementadas incluem:
o	registarConsulta() – regista uma nova consulta, indicando a especialidade, o médico, a data e a hora;
o	listarConsultas() – lista todas as consultas registadas no sistema.
•	ficheiros.c / ficheiros.h
Este módulo assegura a persistência dos dados. Os dados dos pacientes e das consultas são guardados em ficheiros binários (.dat) no momento em que o programa termina e carregados automaticamente quando o programa é iniciado.
As funções principais são:
o	guardarDados() – escreve os dados dos pacientes e das consultas em ficheiros;
o	carregarDados() – lê os dados previamente guardados, permitindo recuperar a informação.
Estruturas de Dados
Para armazenar a informação, foram utilizadas estruturas (struct) e arrays, permitindo guardar múltiplos pacientes e consultas em memória durante a execução do programa. Cada paciente e cada consulta possuem um identificador único, facilitando a associação entre ambos.
Interação com o Utilizador
A interação com o utilizador é feita através de um menu textual apresentado na consola. O programa utiliza uma leitura segura da opção escolhida, evitando erros de execução e ciclos infinitos. De acordo com a opção selecionada, a função correspondente é chamada.
Pesquisa de Pacientes
A funcionalidade de pesquisa permite localizar um paciente através do seu ID. O sistema percorre o array de pacientes e, caso encontre uma correspondência, apresenta os dados do paciente. Caso contrário, informa o utilizador de que o paciente não foi encontrado. Esta funcionalidade torna o sistema mais eficiente e fácil de utilizar.


3.	Funcionamento do trabalho	
 
Figura 2 Selecionada a opção 1 e preenchendo os campos
 
Figura 3 Selecionada a opção 2
 
Figura 4 Selecionada a opção 3 e introduzido o ID 1
 
Figura 5 Selecionada a opção 4 e introduzido os dados pedidos.
 
Figura 6 Selecionanda a opção 5
 
Figura 7 Selecionada a opção 0 


4.	Conclusão
Com a realização deste trabalho prático foi possível aplicar, de forma prática, os conhecimentos adquiridos na unidade curricular de Programação I, nomeadamente no desenvolvimento de programas em linguagem C, utilização de estruturas de dados, modularização do código e manipulação de ficheiros.
O sistema desenvolvido permite a gestão básica de consultas médicas, incluindo o registo, listagem e pesquisa de pacientes, bem como o registo e listagem de consultas associadas a esses pacientes. A divisão do programa em vários módulos contribuiu para uma melhor organização do código e facilitou a sua manutenção e compreensão.
Apesar de o sistema cumprir os objetivos propostos, existem ainda funcionalidades que poderiam ser melhoradas ou acrescentadas no futuro, como a edição e remoção de pacientes e consultas, validação mais rigorosa dos dados introduzidos, melhoria da interface com o utilizador e implementação de estruturas de dados mais eficientes.
Em conclusão, o trabalho permitiu consolidar conceitos fundamentais de programação e proporcionou uma melhor compreensão do funcionamento de um sistema de gestão simples, desenvolvido em linguagem C.
