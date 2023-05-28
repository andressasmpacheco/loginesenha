#include <stdio.h>
int main()
{
    int login, senha;
    printf("Ola, digite seu CPF: \n\n");
    scanf("%d",&login);
    printf("Ola, digite sua senha de 4 numeros: \n\n ");
    scanf("%d",&senha);
 
    if ((login==11122233344) || (senha==1234))
    {                     
    printf("Seja bem vindo. ");
    } 
    else {
        printf("Acesso negado" );
        }
  
  
}
