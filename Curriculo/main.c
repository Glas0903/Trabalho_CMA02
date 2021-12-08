/*
Programadores: Ana Carolina da Silva Oliveira
               Gabriel Lopes Aredes da Silveira
               Vinicius de Oliveira Barros
               Yan de Assis Gonçalves Bonin
Data: 08/12/2021
DEscrição: O sistema tem por intuito facilitar a coleta de informações de candidatos para preenchimento de vagas disponíveis afim de agilizar o processo de seleção e assim reduzir custos e tempo.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");
  char nascimento[300];
  char ob_prof[300];
  char ex_prof[300];
  char qualific[300];
  char idioma_comp[50];
  char disponib_mud[300];
  char numero[20];
  char nome[100];
  char CPF[20];
  char email[50];
  int idade = 0;
  int cargo = 0;
  int curriculo = 0;
  int inicio = 0;
  int ENCAUT = 0;
  int ADS = 0;
  int TST = 0;
  int TA = 0;
  int TRH = 0;
  int SG = 0;
  float prent_sal = 0;

  while (inicio != 2)
  {

    // A opção número 1 só poderá ser efetuada se as vagas já estiverem disponíveis.

    printf("\n0) Gerente");
    printf("\n1) Candidato");
    printf("\n2) Sair");
    printf("\nSelecione sua opcao: ");
    scanf("%i", &inicio);

    if (inicio == 0) // o comando if significa se, então, se o usuário escolher a opção 0, executará um determinado programa.
    {

      printf("\n\n\t ====================== \n\n"); // o comando printf é para mostrar uma mensagem de texto na tela.
      printf("\n\n\t    CADASTRO DE VAGAS   \n\n");
      printf("\n\n\t ====================== \n\n");

      printf("\n\n Informe o número de vagas para o cargo de Enegnheiro de Controle e Automação: ");
      scanf("%d", &ENCAUT); // o camando scanf lê a informação prestada no teclado.
      printf("\n\n Informe o número de vagas para o cargo de Analista de Sistemas: ");
      scanf("%d", &ADS);
      printf("\n\n Informe o número de vagas para o cargo de Tecnico em Segurança do Trabalho: ");
      scanf("%d", &TST);
      printf("\n\n Informe o número de vagas para o cargo de Tecnico em Administração: ");
      scanf("%d", &TA);
      printf("\n\n Informe o número de vagas para o cargo de Tecnico em Recursos Humanos: ");
      scanf("%d", &TRH);
      printf("\n\n Informe o número de vagas para o cargo de Serviços Gerais: ");
      scanf("%d", &SG);

      printf("\n\n\t ====================== \n\n");
      printf("\n\n\t   Disposição de Vagas   \n\n");
      printf("\n\n\t ====================== \n\n");

      printf("\n\n Vagas para Engenheiro de Controle e Automação: %i", ENCAUT);
      printf("\n\n Vagas para Analista de Sistemas: %i", ADS);
      printf("\n\n Vagas para Tecnico em Segurança do Trabalho: %i", TST);
      printf("\n\n Vagas para Tecnico em Administração: %i", TA);
      printf("\n\n Vagas para Tecnico em Recursos Humanos: %i", TRH);
      printf("\n\n Vagas para Serviços Gerais: %i", SG);

      printf("\n\n %i curriculos foram preenchidos \n\n", curriculo);
    }
    if (inicio == 1)
    {

      printf("\n\n\t ====================== \n\n");
      printf("\n\n\t CADASTRO DE CURRICULOS \n\n");
      printf("\n\n\t ====================== \n\n");

      printf("\n\n Informe o seu nome completo: ");
      fflush(stdin);
      gets(nome);
      fflush(stdin);

      printf("\n\n Digite o seu CPF: ");
      scanf("%s", &CPF);

      printf("\n\n Infome a sua idade: ");
      scanf("%d", &idade);

      printf("\n\n Digite sua data de nascimento: ");
      scanf("%s",&nascimento);

      printf("\n\n Digite seu numero de contato: ");
      scanf("%s",&numero);

      printf("\n\n insira o seu e-mail de contato: ");
      scanf("%s", &email);

      printf("\n\n Fale um pouco sobre seu objetivo profissional: ");
      fflush(stdin);
      gets(ob_prof);
      fflush(stdin);

      printf("\n\n Fale um pouco sobre suas experiencias profissionais: ");
      fflush(stdin);
      gets(ex_prof);
      fflush(stdin);

      printf("\n\n Fale sobre suas qualificacoes: ");
      fflush(stdin);
      gets(qualific);
      fflush(stdin);

      printf("\n\n Digite um idioma complementar que voce domina: ");
      fflush(stdin);
      gets(idioma_comp);
      fflush(stdin);

      printf("\n\n Fale sobre sua disponibilidade para viagens e mudancas: ");
      fflush(stdin);
      gets(disponib_mud);
      fflush(stdin);

      printf("\n\n Fale sobre quanto voce pretende receber: ");
      scanf("%f",&prent_sal);

      if (idade >= 18) // se maior de 18 anos, o usuário poderá continuar fazendo o cadastro.
       {
        printf("\n\n Estas sao nossas opções de vagas disponiveis: \n\n");
        printf("\n\n Engenheiro de Controle e Automação: %i \n\n", ENCAUT);
        printf("\n\n Analista de sistemas: %i \n\n", ADS);
        printf("\n\n Tecnico em Segurança do Trabalho: %i \n\n", TST);
        printf("\n\n Tecnico em Administração: %i \n\n", TA);
        printf("\n\n Tecnico em Recursos Humanos: %i \n\n", TRH);
        printf("\n\n Servicos Gerais: %i \n\n", SG);

        printf("\n\n Informe o numero da opcao escolhida: \n\n (1-Engenheiro de Controle e Automação, 2-Analista de sistemas, 3-Tecnico em Segurança do Trabalho, 4-Tecnico em Administração, 5-Tecnico em Recursos Humanos, 6-Serviços Gerais)\n\n ");
        scanf("%d", &cargo);

        printf("\n\n Fale um pouco sobre seu objetivo profissional: ");
        fflush(stdin);
        gets(ob_prof);
        fflush(stdin);

        printf("\n\n Fale um pouco sobre suas experiencias profissionais: ");
        fflush(stdin);
        gets(ex_prof);
        fflush(stdin);

        printf("\n\n Fale sobre suas qualificacoes: ");
        fflush(stdin);
        gets(qualific);
        fflush(stdin);

        printf("\n\n Digite um idioma complementar que voce domina: ");
        fflush(stdin);
        gets(idioma_comp);
        fflush(stdin);

        printf("\n\n Fale sobre sua disponibilidade para viagens e mudancas: ");
        fflush(stdin);
        gets(disponib_mud);
        fflush(stdin);

        printf("\n\n Fale sobre quanto voce pretende receber: ");
        scanf("%f",&prent_sal);

        switch (cargo) // o comando switch significado caso, devido as opções.
         {
        case 1:
          printf("\n\n Parabéns, o cargo de Engenheiro de Controle e Automação foi escolhido, verifique agora os seus dados: ");
          printf("\n\n nome: %s", nome);
          printf("\n\n CPF: %s", CPF);
          printf("\n\n Idade: %i", idade);
          printf("\n\n Email: %s", email);
          printf("\n\n Número: %s", numero);
          printf("\n\n Data de nascimento: %s", nascimento);
          printf("\n\n Objetivo Profissional: %s", ob_prof);
          printf("\n\n Experiencias Profissionais: %s", ex_prof);
          printf("\n\n Qualificações: %s", qualific);
          printf("\n\n Idioma Complementar: %s", idioma_comp);
          printf("\n\n Disponiblidade movél: %s", disponib_mud);
          printf("\n\n Pretenção Salarial: %f", prent_sal);
          printf("\n\n cargo: Engenheiro de Controle e Automação \n\n");
          break;

        case 2:
          printf("\n\n Parabéns o cargo de Analista de Sistemas foi escolhido, verifique agora os seus dados: ");
          printf("\n\n nome: %s", nome);
          printf("\n\n CPF: %s", CPF);
          printf("\n\n Idade: %i", idade);
          printf("\n\n Email: %s", email);
          printf("\n\n Número: %s", numero);
          printf("\n\n Data de nascimento: %s", nascimento);
          printf("\n\n Objetivo Profissional: %s", ob_prof);
          printf("\n\n Experiencias Profissionais: %s", ex_prof);
          printf("\n\n Qualificações: %s", qualific);
          printf("\n\n Idioma Complementar: %s", idioma_comp);
          printf("\n\n Disponiblidade movél: %s", disponib_mud);
          printf("\n\n Pretenção Salarial: %f", prent_sal);
          printf("\n\n cargo: Analista de Sistemas \n\n");
          break;

        case 3:
          printf("\n\n Parabéns o cargo de Tecnico em Segurança no Trabalho foi escolhido, verifique agora os seus dados: ");
          printf("\n\n nome: %s", nome);
          printf("\n\n CPF: %s", CPF);
          printf("\n\n Idade: %i", idade);
          printf("\n\n Email: %s", email);
          printf("\n\n Número: %s", numero);
          printf("\n\n Data de nascimento: %s", nascimento);
          printf("\n\n Objetivo Profissional: %s", ob_prof);
          printf("\n\n Experiencias Profissionais: %s", ex_prof);
          printf("\n\n Qualificações: %s", qualific);
          printf("\n\n Idioma Complementar: %s", idioma_comp);
          printf("\n\n Disponiblidade movél: %s", disponib_mud);
          printf("\n\n Pretenção Salarial: %f", prent_sal);
          printf("\n\n cargo: Tecnico em Segurança no Trabalho \n\n");
          break;

        case 4:
          printf("\n\n Parabéns o cargo de Tecnico em Administração foi escolhido, verifique agora os seus dados: ");
          printf("\n\n nome: %s", nome);
          printf("\n\n CPF: %s", CPF);
          printf("\n\n Idade: %i", idade);
          printf("\n\n Email: %s", email);
          printf("\n\n Número: %s", numero);
          printf("\n\n Data de nascimento: %s", nascimento);
          printf("\n\n Objetivo Profissional: %s", ob_prof);
          printf("\n\n Experiencias Profissionais: %s", ex_prof);
          printf("\n\n Qualificações: %s", qualific);
          printf("\n\n Idioma Complementar: %s", idioma_comp);
          printf("\n\n Disponiblidade movél: %s", disponib_mud);
          printf("\n\n Pretenção Salarial: %f", prent_sal);
          printf("\n\n cargo: Tecnico em Administração \n\n");
          break;

        case 5:
          printf("\n\n Parabéns o cargo de Tecnico em Recursos Humanos foi escolhido, verifique agora os seus dados: ");
          printf("\n\n nome: %s", nome);
          printf("\n\n CPF: %s", CPF);
          printf("\n\n Idade: %i", idade);
          printf("\n\n Email: %s", email);
          printf("\n\n Número: %s", numero);
          printf("\n\n Data de nascimento: %s", nascimento);
          printf("\n\n Objetivo Profissional: %s", ob_prof);
          printf("\n\n Experiencias Profissionais: %s", ex_prof);
          printf("\n\n Qualificações: %s", qualific);
          printf("\n\n Idioma Complementar: %s", idioma_comp);
          printf("\n\n Disponiblidade movél: %s", disponib_mud);
          printf("\n\n Pretenção Salarial: %f", prent_sal);
          printf("\n\n cargo: Tecnico em Recursos Humanos \n\n");
          break;

        case 6:
          printf("\n\n Parabéns o cargo de Serviços Gerais foi escolhido, verifique agora os seus dados: ");
          printf("\n\n nome: %s", nome);
          printf("\n\n CPF: %s", CPF);
          printf("\n\n Idade: %i", idade);
          printf("\n\n Email: %s", email);
          printf("\n\n Número: %s", numero);
          printf("\n\n Data de nascimento: %s", nascimento);
          printf("\n\n Objetivo Profissional: %s", ob_prof);
          printf("\n\n Experiencias Profissionais: %s", ex_prof);
          printf("\n\n Qualificações: %s", qualific);
          printf("\n\n Idioma Complementar: %s", idioma_comp);
          printf("\n\n Disponiblidade movél: %s", disponib_mud);
          printf("\n\n Pretenção Salarial: %f", prent_sal);
          printf("\n\n cargo: Serviços Gerais \n\n");
          break;
         }

        }

    else
    printf("\n\n idade não permitida \n\n"); // maior ou igual a 18 anos, terminará de preencher o curriculo. O comando else significa senão, então, se menor que 18 anos, o usuário não poderá preencher o curriculo.

    printf("\n\n você deseja continuar?(0-não, 1-sim): \n\n");
    scanf("%d", &inicio);

    curriculo++;
    }

    printf("\n\n %i curriculos foram preenchidos \n\n", curriculo);

  }



return 0;
}
