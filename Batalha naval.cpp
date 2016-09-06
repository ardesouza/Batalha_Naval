#include<stdio.h>
#include<stdlib.h>

int main(){
    	printf("*******************************************************\n");        
        printf("***          JOGO DE BATALHA NAVAL                  ***\n");
        printf("***                                                 ***\n");
        printf("***  Aluno: Aleksandro R. de Souza  R.A.13607.15    ***\n");
        printf("*******************************************************\n\n");
		printf("  ~ = Mar                   \n");
	    printf("  * = Navio Explodido       \n");
	    printf("  . = Espaço Vazio          \n");
	    printf(" -1 = Para Sair do Jogo     \n\n");
	      
    char inimigo[5][5] =  {{0, 0, 0, 0, 0,}, 
                           {0, 1, 1, 0, 0,},
                           {0, 0, 0, 1, 0,},
                           {1, 0, 0, 0, 0,},
                           {0, 0, 1, 0, 0,}};
    char tabuleiro[5][5];
    int x, y;
    
    for(x=1; x<=5; x++){
        for(y=1; y<=5; y++){
            tabuleiro[x][y] = '~';
              printf("%c", tabuleiro[x][y]);
       }
             printf("\n");
    }
    
    printf("Informe as coordenadas do tiro (linha| 1 ao 5): ");
    scanf("%d", &x);
    
	printf("Informe as coordenadas do tiro (coluna| 1 ao 5): ");
    scanf("%d",&y);
    
    while(x>-1 && y>-1){
          if(inimigo[x][y] == 1){
                  tabuleiro[x][y] = '*';
         }
         else{
                 tabuleiro[x][y] = '.';
         }
         for(x=1; x<=5; x++){ 
             for(y=1; y<=5; y++){
                 printf("%c", tabuleiro[x][y]);
        }
             printf("\n");
        }
   printf("Informe as coordenadas do tiro (linha| 1 ao 5): ");
    scanf("%d", &x);
    
	printf("Informe as coordenadas do tiro (coluna| 1 ao 5): ");
    scanf("%d",&y);
    }
    
    system("pause");
return 0;
}
