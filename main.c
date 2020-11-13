#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h> 
#include <locale.h>
#define SIZE 100

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  char nome[SIZE][50];
  char email[SIZE] [50];
  int cpf[SIZE];
  int op, op1;
  int assento[10] [10];
  int linha;
  int cadastro, pesquisa, cpfPesquisa, i, f, c, lin, col;
    
  system("cls"); 

  printf("\t\t\t\t________________________________________\n");
  printf("\t\t\t\t      |                         |\n");
  printf("\t\t\t\t      |          PALCO          |\n");
  printf("\t\t\t\t      |_________________________|\n\n");
  

    
  for(f=0 ; f<10; f++)
  {
    printf("\t ");
		printf("Fileira %d ->",f);
      for(c=0 ; c<10 ; c++)
      {
        printf("|-| ");
        }
          



          printf("\n");
          }
          printf("\t              |   |   |   |   |   |   |   |   |   |\n");
          printf("\t     Coluna   0   1   2   3   4   5   6   7   8   9 \n");
          printf("\t_____________________________________________________\n\n");
          printf("\n\n");
          
          
          for(f=0 ; f<10; f++)
          {
            for(c=0 ; c<10 ; c++)
            {
              assento [f] [c]=0;
              }
              }
              
do{//system permite executar o prompt dentro do programa
	    printf("\n--menu--\n[1]-Cadastrar\n[2]-Pesquisar \n[3]-Sair\n->");
	    scanf("%d", &op);
	    switch(op){

	    	case 1:
        do
          {
            printf("\n[1]-Se for professor.  \n[2]-Se for convidado do palestrante. \n[3]-Se for portador de necessidades especiais. \n[4]-Outros, digite 4. \n");
            scanf("%d", &op1);
            printf("\n\n");
            
            if (op1==4){
              printf("AS 2 PRIMEIRAS FILEIRAS SÃO RESERVADOS PARA PROFESSORES E CONVIDADOS DO PALESTRANTE! E AS FILEIRAS 2, 3, 4, 5 E 6 SÃO PARA PESSOAS COM NECESSIDADES ESPECIAIS.\n");
              printf("\nFileira: ");
              scanf("%d", &lin);
              printf("Coluna: ");
              scanf("%d",&col);
              
            if  (lin>1 & lin<10 && col<10)
            {
              if (assento [lin] [col]==0)
              {
                assento [lin] [col]=1;
                printf("\nDigite o nome: ");
		            scanf("%s", &nome[linha]);
		            printf("\ndigite o cpf:");
		            scanf("%d", &cpf[linha]);
                printf("");              
                printf("\nDados gravados com sucesso!");
                }            
						else
						{
							printf("******ATENÇÃO! CADEIRA OCUPADA!******\n\n");
						}
            
            }
					else
					{
						printf("\n******CADEIRA NÃO DISPONÍVEL!******");
					}
					printf("\n");
          printf("------------------------------------------------\n");






           printf("\t\t\t\t________________________________________\n");
  printf("\t\t\t\t      |                         |\n");
  printf("\t\t\t\t      |          PALCO          |\n");
  printf("\t\t\t\t      |_________________________|\n\n");

          		for(f=0 ; f<10; f++){
									printf("\t ");
									printf("Fileira %d ->",f);
                  for(c=0 ; c<10 ; c++){
									if(assento[f] [c]==0){
                    printf("|-| ");
                    }else
                    printf("|X| ");
                    }
                  
                  
                  printf("\n");
              }
          printf("\t              |   |   |   |   |   |   |   |   |   |\n");
          printf("\t     Coluna   0   1   2   3   4   5   6   7   8   9 \n");
          printf("\t_____________________________________________________\n\n");
          printf("\n\n");
          }

          if (op1==1){
              printf("\nFileira: ");
              scanf("%d", &lin);
              printf("\nColuna: ");
              scanf("%d",&col);
            if  (lin>=0 & lin<2 && col<10)
            {
              if (assento [lin] [col]==0)
              {
                assento [lin] [col]=1;
                printf("\nDigite o nome: ");
		            scanf("%s", &nome[linha]);
		            printf("\ndigite o cpf:");
		            scanf("%d", &cpf[linha]);
                printf("");              
                printf("\nDados gravados com sucesso!");
                }            
						else
						{
							printf("******ATENÇÃO! CADEIRA OCUPADA!******\n\n");
						}
            }
					else
					{
						printf("******CADEIRA INEXISTENTE!******");
					}
					printf("\n");
          printf("------------------------------------------------\n");






           printf("\t\t\t\t________________________________________\n");
  printf("\t\t\t\t      |                         |\n");
  printf("\t\t\t\t      |          PALCO          |\n");
  printf("\t\t\t\t      |_________________________|\n\n");

          		for(f=0 ; f<10; f++){
									printf("\t ");
									printf("Fileira %d ->",f);
                  for(c=0 ; c<10 ; c++){
									if(assento[f] [c]==0){
                    printf("|-| ");
                    }else
                    printf("|X| ");
                    }
                  
                  
                  printf("\n");
              }
          printf("\t              |   |   |   |   |   |   |   |   |   |\n");
          printf("\t     Coluna   0   1   2   3   4   5   6   7   8   9 \n");
          printf("\t_____________________________________________________\n\n");
          printf("\n\n");
          }





		printf("\nDigite 1 para continuar cadastrando, ou 0 para voltar ao menu.\n");
		scanf("%d",&op);
		linha++; //proxima execição muda para proxima linha ou (linha=linha+1)
	}while(op==1);
	    		break;

	    	case 2:
        printf("\nDigite o CPF:");
				scanf("%d", &cpfPesquisa);

				for(i=0;i<SIZE;i++)
					if(cpf[i]==cpfPesquisa) {
						printf("\nNome: %s\nCPF: %d", nome[i], cpf[i]);
						}

				break;

        
	    		//pesquisa;
	    		break;
	    	case 3:
	    		system("exit");
	    		break;
	    	default:
	    		printf("Opção Inválida.");
	    		break;
		}
	    
	}while(op!=3); 
}


