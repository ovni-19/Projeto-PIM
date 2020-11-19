#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h> 
#include <locale.h>
#define SIZE 200 //define o tamanho fixo de SIZE em 200.

int main(void) {
  setlocale(LC_ALL, "Portuguese"); //para o programa aceitar caracteres em portugues do Brasil.
  char nome[SIZE][50]; //matriz para nome
  char email[SIZE][50]; 
  int rg[SIZE];
  int op, op1;
  int assento[10] [10]; //matriz para organizar assentos
  int linha;
  int f[SIZE], c[SIZE], rgPesquisa, i, lin, col, condi;
  struct tm *data_hora_atual; //estrutura para
  time_t segundos; // gerar data e hora local,
  time(&segundos); // mas só funciona num programa instalado no computador
  data_hora_atual = localtime(&segundos); 


  do{
		system("cls");
    
          printf("\t\t\t________________________________________\n");
          printf("\t\t\t      |                         |\n");
          printf("\t\t\t      |          PALCO          |\n");
          printf("\t\t\t      |_________________________|\n\n");
                
          for(f[linha]=0 ; f[linha]<10; f[linha]++){
          printf("\t ");
          printf("Fileira %d ->",f[linha]);
          for(c[linha]=0 ; c[linha]<10 ; c[linha]++){
            if(assento[f[linha]] [c[linha]]==0){
              printf("|--| ");
              }else
              printf("|%d%d| ", f[linha], c[linha]);
              }
              printf("\n");
              }
              printf("\t              ||   ||   ||   ||   ||   ||   ||   ||   ||   ||\n");
              printf("\t     Coluna   |0   |1   |2   |3   |4   |5   |6   |7   |8   |9 \n");
              printf("\t___________________________________________________________________\n\n");
              printf("\n\n");


	    printf("\n\t\t---------MENU---------\n\n\t[1] - CADASTRAR PARTICIPANTE\n\t[2] - LISTAR TODOS PARTICIPANTES \n\t[3] - PESQUISAR\n\t[4] - EXCLUIR ASSENTO\n\t[5] - SAIR\n\n\tOPÇÃO: ");
	    scanf("%d", &op);
	    switch(op){
	    	case 1:
        do{

          system("cls");{
          printf("\t\t\t________________________________________\n");
          printf("\t\t\t      |                         |\n");
          printf("\t\t\t      |          PALCO          |\n");
          printf("\t\t\t      |_________________________|\n\n");
                
          for(f[linha]=0 ; f[linha]<10; f[linha]++){
          printf("\t ");
          printf("Fileira %d ->",f[linha]);
          for(c[linha]=0 ; c[linha]<10 ; c[linha]++){
            if(assento[f[linha]] [c[linha]]==0){
              printf("|--| ");
              }else
              printf("|%d%d| ", f[linha], c[linha]);
              }
              printf("\n");
              }
              printf("\t              ||   ||   ||   ||   ||   ||   ||   ||   ||   ||\n");
              printf("\t     Coluna   |0   |1   |2   |3   |4   |5   |6   |7   |8   |9 \n");
              printf("\t___________________________________________________________________\n\n");
              printf("\n\n");
          }


          


          printf("\n\t\t\t\t\t\t\tPOR FAVOR, LEIA ATENTAMENTE\n\nA 1ª FILEIRA ESTÃO RESERVADAS PARA PROFESSORES E A 2ª PARA CONVIDADOS DO PALESTRANTE,\n E AS FILEIRAS 2, 3, 4, 5 E 6 DA COLUNA 0, SÃO PARA PORTADORES DE NECESSIDADES ESPECIAIS.\n");

          printf("\n\n[1]-PARA PROFESSORES.  \n[2]-PARA CONVIDADOS DO PALESTRANTE. \n[3]-PORTADOR DE NECESSIDADE ESPECIAL. \n[4]-PARTICIPANTE. \n");
          scanf("%d", &op1);


          if (op1==1)

          
          
          {
            system("cls");{
          printf("\t\t\t________________________________________\n");
          printf("\t\t\t      |                         |\n");
          printf("\t\t\t      |          PALCO          |\n");
          printf("\t\t\t      |_________________________|\n\n");
                
            for(f[linha]=0 ; f[linha]<1; f[linha]++){
          printf("\t ");
          printf("Fileira %d ->",f[linha]);
          for(c[linha]=0 ; c[linha]<10 ; c[linha]++){
            if(assento[f[linha]] [c[linha]]==0){
              printf("|--| ");
              }else
              printf("|%d%d| ", f[linha], c[linha]);
              }
              printf("\n");
              }
              printf("\t              ||   ||   ||   ||   ||   ||   ||   ||   ||   ||\n");
              printf("\t     Coluna   |0   |1   |2   |3   |4   |5   |6   |7   |8   |9 \n");
              printf("\t___________________________________________________________________\n\n");
              printf("\n\n");
            }
          printf("\nFileira 0 para professores.\n");
          f[linha]=0;
          
          if  (f[linha]==0)
          {
            printf("\nDigite o assento na coluna: ");
            scanf("%d", &c[linha]);
            if  ((c[linha]<10) && (assento [f[linha]] [c[linha]]==0)){
              assento [f[linha]] [c[linha]]=1;
              printf("\nDigite o nome: ");
              scanf("%s", &nome[linha]);
              printf ("Digite o email: ");
              scanf("%s", &email[linha]);
              printf("Digite o RG sem o dígito: ");
              scanf("%d", &rg [linha]);              
              
              system("cls");
              printf("---------------------------------\n");
              printf("\nDADOS GRAVADOS COM SUCESSO!\n");

              printf("\nHora: %d:",data_hora_atual->tm_hour);
              printf("%d:",data_hora_atual->tm_min);
              printf("%d",data_hora_atual->tm_sec);
              printf("\nData: %d/", data_hora_atual->tm_mday);
              printf("%d/",data_hora_atual->tm_mon+1);
              printf("%d\n",data_hora_atual->tm_year+1900);

              printf("\nNOME: %s\nEMAIL: %s\nRG: %d\nASSENTO: %d%d\n", nome[linha], email[linha], rg[linha], f[linha],c[linha]);
              }
              else{
                printf("\n****** NÃO DISPONÍVEL! ******\n");
                }
          }
          
                printf("---------------------------------\n");
          }

          else if (op1==2){
            system("cls");
          printf("\t\t\t________________________________________\n");
          printf("\t\t\t      |                         |\n");
          printf("\t\t\t      |          PALCO          |\n");
          printf("\t\t\t      |_________________________|\n\n");
                
            for(f[linha]=1 ; f[linha]<2; f[linha]++){
          printf("\t ");
          printf("Fileira %d ->",f[linha]);
          for(c[linha]=0 ; c[linha]<10 ; c[linha]++){
            if(assento[f[linha]] [c[linha]]==0){
              printf("|--| ");
              }else
              printf("|%d%d| ", f[linha], c[linha]);
              }
              printf("\n");
              }
              printf("\t              ||   ||   ||   ||   ||   ||   ||   ||   ||   ||\n");
              printf("\t     Coluna   |0   |1   |2   |3   |4   |5   |6   |7   |8   |9 \n");
              printf("\t___________________________________________________________________\n\n");
              printf("\n\n");
          printf("\nFileira 1 para convidados do palestrante.");
          f[linha]=1;
          
          if  (f[linha]==1){
            printf("\nDigite o assento na coluna: ");
            scanf("%d", &c[linha]);
            if  ((c[linha]<10) && (assento [f[linha]] [c[linha]]==0)){
              assento [f[linha]] [c[linha]]=1;
              printf("\nDigite o nome: ");
              scanf("%s", &nome[linha]);
              printf ("\nDigite o email: ");
              scanf("%s", &email[linha]);
              printf("\nDigite o RG sem o dígito: ");
              scanf("%d", &rg [linha]);
              
              system("cls");
              printf("---------------------------------\n");
              printf("\nDADOS GRAVADOS COM SUCESSO!\n");

              printf("\nHora: %d:",data_hora_atual->tm_hour);
              printf("%d:",data_hora_atual->tm_min);
              printf("%d",data_hora_atual->tm_sec);
              printf("\nData: %d/", data_hora_atual->tm_mday);
              printf("%d/",data_hora_atual->tm_mon+1);
              printf("%d\n",data_hora_atual->tm_year+1900);

              printf("\nNOME: %s\nEMAIL: %s\nRG: %d\nASSENTO: %d%d\n", nome[linha], email[linha], rg[linha], f[linha],c[linha]);
              }
              else{
                printf("\n****** NÃO DISPONÍVEL! ******\n");
                }
          }
          
                printf("---------------------------------\n");
          }
          else if (op1==3)
          {
            system("cls");
          printf("\t\t\t________________________________________\n");
          printf("\t\t\t      |                         |\n");
          printf("\t\t\t      |          PALCO          |\n");
          printf("\t\t\t      |_________________________|\n\n");
                
            for(f[linha]=2 ; f[linha]<7; f[linha]++){
          printf("\t ");
          printf("Fileira %d ->",f[linha]);
          for(c[linha]=0 ; c[linha]<1 ; c[linha]++){
            if(assento[f[linha]] [c[linha]]==0){
              printf("|--| ");
              }else
              printf("|%d%d| ", f[linha], c[linha]);
              }
              printf("\n");
              }
              printf("\t              ||   ||   ||   ||   ||   ||   ||   ||   ||   ||\n");
              printf("\t     Coluna   |0   |1   |2   |3   |4   |5   |6   |7   |8   |9 \n");
              printf("\t___________________________________________________________________\n\n");
              printf("\n\n");


          printf("\nFileira 2, 3, 4, 5 e 6 na coluna 0 para portadores de necessidades especiais.\n");
          c[linha]=0;
          
          printf("\nDigite o assento na fileira: ");
            scanf("%d", &f[linha]);
            if  (((f[linha]<7) && f[linha]>1) && (assento [f[linha]] [c[linha]]==0)){
              assento [f[linha]] [c[linha]]=1;
              printf("\nDigite o nome: ");
              scanf("%s", &nome[linha]);
              printf ("Digite o email: ");
              scanf("%s", &email[linha]);
              printf("Digite o RG sem o dígito: ");
              scanf("%d", &rg [linha]);

              system("cls");
              printf("---------------------------------\n");
              printf("\nDADOS GRAVADOS COM SUCESSO!\n");

              printf("\nHora: %d:",data_hora_atual->tm_hour);
              printf("%d:",data_hora_atual->tm_min);
              printf("%d",data_hora_atual->tm_sec);
              printf("\nData: %d/", data_hora_atual->tm_mday);
              printf("%d/",data_hora_atual->tm_mon+1);
              printf("%d\n",data_hora_atual->tm_year+1900);

              printf("\nNOME: %s\nEMAIL: %s\nRG: %d\nASSENTO: %d%d\n", nome[linha], email[linha], rg[linha], f[linha],c[linha]);
              }
              else{
                printf("\n****** NÃO DISPONÍVEL! ******\n");
                }
          
                printf("---------------------------------\n");
          }

          else if (op1==4)
          
          {
            system("cls");
          printf("\t\t\t________________________________________\n");
          printf("\t\t\t      |                         |\n");
          printf("\t\t\t      |          PALCO          |\n");
          printf("\t\t\t      |_________________________|\n\n");
                
            for(f[linha]=2 ; f[linha]<10; f[linha]++){
          printf("\t ");
          printf("Fileira %d ->",f[linha]);
          for(c[linha]=0 ; c[linha]<10 ; c[linha]++){
            if(assento[f[linha]] [c[linha]]==0){
              printf("|--| ");
              }else
              printf("|%d%d| ", f[linha], c[linha]);
              }
              printf("\n");
              }
              printf("\t              ||   ||   ||   ||   ||   ||   ||   ||   ||   ||\n");
              printf("\t     Coluna   |0   |1   |2   |3   |4   |5   |6   |7   |8   |9 \n");
              printf("\t___________________________________________________________________\n\n");
              printf("\n\n");
            printf("\nEXCETO assentos da fileira 2, 3, 4, 5 e 6 na COLUNA 0.\n\n");

          printf("\nEscolha a fileira: ");
          scanf("%d", &f[linha]);
          printf("\nEscolha a coluna: ");
          scanf("%d", &c[linha]);

          if(((f[linha]<7) && f[linha]>1) &&(c[linha]<1)&& (assento [f[linha]] [c[linha]]==0)){
            system("cls");
            printf("\n\nASSENTO RESERVADO PARA PESSOAS COM NECESSIDADES ESPECIAIS!\n\n\n");
          }
            else if (((f[linha]<10) && (f[linha]>1)&&(c[linha]<10)) && (assento [f[linha]] [c[linha]]==0)){
              assento [f[linha]] [c[linha]]=1;

              printf("\nDigite o nome: ");
              scanf("%s", &nome[linha]);
              printf ("Digite o email: ");
              scanf("%s", &email[linha]);
              printf("Digite o RG sem o dígito: ");
              scanf("%d", &rg [linha]);

              system("cls");
              printf("---------------------------------\n");
              printf("\nDADOS GRAVADOS COM SUCESSO!\n");

              printf("\nHora: %d:",data_hora_atual->tm_hour);
              printf("%d:",data_hora_atual->tm_min);
              printf("%d",data_hora_atual->tm_sec);
              printf("\nData: %d/", data_hora_atual->tm_mday);
              printf("%d/",data_hora_atual->tm_mon+1);
              printf("%d\n",data_hora_atual->tm_year+1900);

              printf("\nNOME: %s\nEMAIL: %s\nRG: %d\nASSENTO: %d%d\n", nome[linha], email[linha], rg[linha], f[linha],c[linha]);
              }
              else{
                printf("\n****** NÃO DISPONÍVEL! ******\n");
                }
          }
                printf("---------------------------------\n");
          


          
          printf("\nDigite 1 para continuar, ou 0 para voltar ao menu:\t");
          scanf("%d",&op);
          linha++;
        }while(op==1);
        break;

	    	case 2:
        {
          for(i=0;i<SIZE;i++) {
            if (assento [f[i]] [c[i]]==1){
              if(rg[i]>0){
                system("cls");
                printf("---------------------------------\n");
                printf("\nNome: %s\nemail: %s\nRG: %d\nAssento: %d%d\n", nome[i], email[i], rg[i], f[i],c[i]);
                }else{
               break;
               }
               }
               }
               printf("\n - Pressione enter para voltar ao menu -");
               getchar();
               getchar();
               }
               
        break;

	    	case 3:
        printf("\nDigite o RG sem o dígito: ");
				scanf("%d", &rgPesquisa);

				for(i=0;i<SIZE;i++){
          if (assento [f[i]] [c[i]]==1){
          if (rg[i]>0){
            if(rg[i]==rgPesquisa) {
              system("cls");
              printf("---------------------------------\n");
              printf("\n-----Assentos encontrados com o RG %d-----", rg[i]);
              printf("\nNome: %s\nemail: %s\nRG: %d\nAssento: %d%d\n", nome[i], email[i], rg[i], f[i],c[i]);
                            
            }
            }
            }
            }
              printf("\n- Pressione enter para voltar ao menu -");
              getchar();
              getchar();
              break;

        case 4:
        printf("O que deseja fazer?\n");
					printf("[1] - Cancelar uma cadeira?\n");
					printf("[2] - Cancelar todas as cadeiras?\n");
					scanf("%d",&condi);
						if(condi == 1)
						{
							printf("\nFileira: ");
							scanf("%d", &f[linha]);
							printf("Coluna: ");
							scanf("%d",&c[linha]);

              printf("\nTem certeza que deseja excluir o assento %d%d?\n1-Sim\t|\t2-Não\n", f[linha], c[linha]);
              scanf("%d", &op1);
               if(op1==1){
							if(f[linha]<10 && c[linha]<10)
							{
								assento [f[linha]] [c[linha]]=0;
                i--;
                }
							else
							{
								printf("******CADEIRA INEXISTENTE******\n");
							}
						}else{
              break;
            }
            }
						else{
              printf("Tem certeza que deseja excluir todos assentos?\n1-Sim\t|\t2-Não\n");
              scanf("%d", &op1);
              if(op1==1){
                for(f[linha]=0 ; f[linha]<10; f[linha]++)
                {
                  for(c[linha]=0 ; c[linha]<10 ; c[linha]++)
                  {
                    assento [f[linha]] [c[linha]]=0;
                    }
                    }
                    }else{
                      break;
                    }
                    }
						
					printf("-------------------------------------------------------------\n");
        break;

        case 5:
        break;

	    	default:
	    		printf("opcao invalida");
	    		break;
		}
	    
	}while(op!=5); //Enquanto opção for diferente de 5, o programa vai rodar, caso contrario, ele sai.

}

