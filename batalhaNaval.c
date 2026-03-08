#include <stdio.h>



int main() {
   int i,j;
    char matriz[10][10];
    //preenchendo matriz
      for (i=0; i<10; i++)
      {
        for (j=0; j<10; j++)
        {
          matriz[i][j]= '0';

        }
       
      } 
//mudando a primeira linha
      for (j=0; j<10; j++)
      {
        matriz[0][j]= 'A'+j;
      }
//mudando a primeira coluna
      for (i=1; i<10; i++)
      {
        matriz[i][0]= '0'+i;
      }
//posicao barco vertical
      for(i = 2; i < 5; i++)
     {
      matriz[i][2] = '3';
     }
      // posicao barco horizontal
        for(j = 2; j < 5; j++)
      {
        matriz[5][j] = '3';
      }
      
      
// imprimindo matriz
      for (i=0; i<10; i++)
      {
       for (j=0; j<10; j++){

        printf("%c",matriz[i][j]);

       }
       printf("\n");
      }

    return 0;
}
