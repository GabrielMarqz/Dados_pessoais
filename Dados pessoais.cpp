#include <iostream>
#include <cstdio> 

using namespace std;

int main() {
char nome, profissao, cidade, uf;
printf ("Qual seu nome? ");
scanf ("%s",&nome);
printf ("Qual sua profissao?");
scanf ("%s",&profissao);
printf ("Qual sua Cidade? ");
scanf ("%s",&cidade);
printf ("Qual seu Estado? ");
scanf ("%s",&uf);
printf ("Nome: %s",nome);
printf ("\nProfissao: %s",profissao);
printf ("\nCidade: %s",cidade);
printf ("\nUF: %s",uf);
return 0;
}