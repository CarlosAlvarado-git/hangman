#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h> 
const char *palabras[23] = {"pronostico", "podio", "marineros","gradas",
        "cepo","sardina","hombros","agitar","revuleto","oveja","limosna","espiral","debut","cartero","desafiar",
        "supermercado","castor","terminal","chimenea","abecedario","amenaza","olas","panorama"};
        
            int opor = 0;
            int acir = 0;
            int gan = 0;
            int largo = 0;
int main(void)
{

    int R = -1;
    while(R != 4)
    {
        printf("1. Start Game | 2. Instructions | 3. About | 4. Exit \n");
        printf("Ingrese una opción del menú: ");
        scanf("%d", &R);
        printf("\n");
        if( R == 1)
        {
            char Name[] = "";
            printf("Ingrese su nombre:   ");
            scanf("%s", Name);
            printf("\n");
            srand(time(0)); 
            int rn = (rand() %23);
            largo = 0; 
            largo = strlen(palabras[rn]); 
            char pal[largo];
            char palfin[largo];
            strcat(pal, palabras[rn]);
            for(int i = 0; i < largo; i++)
            {
              palfin[i] = '_';
            }
            acir = 0;
            opor = 0;
            while (1)
            {
              if(opor == 10 || acir == largo)
              {
                if(acir == largo)
                {
                  gan = 1;
                }
                else if(opor == 10 && acir == largo)
                {
                  gan = 1;
                }
                else {
                  gan = 0;
                }
                if(gan == 1)
                {
                  printf("Haz ganado! en %d intentos, Felicidades\n \n", opor);
                }
                else{
                  printf("Haz perdido :(\n\n!");
                }
                break;
              }
              else 
              {
                printf("Nombre: %s\n", Name);
                printf("Intentos: %i/10\n", opor);
                printf("Aciertos: %i\n", acir);
                printf("Largo %d\n", largo);
                printf("Palabra: ");
                for(int i = 0; i < largo; i++)
                {
                  printf("%c ", palfin[i]);
                }
                printf("\n");
                printf("Ingese una letra o palabra: ");
                char letra[] = ""; 
                scanf("%s", letra);
                int Ldletra = strlen(letra);
                if(Ldletra == 1)
                {
                  printf("Letra: %s\n", letra);
                    for(int i = 0; i < largo; i++)
                    {
                        if(letra[0] == pal[i])
                        {
                            palfin[i] = pal[i];
                            acir++; 
                        }
                    }
                }
                else
                {
                    if(*letra == *pal)
                    {
                        acir = largo;
                      for(int i = 0; i < largo; i++)
                      {
                        if(letra[i] == pal[i])
                        {
                            palfin[i] = pal[i]; 
                        }
                      }
                    }
                }
                opor++;
              }
            }
        }
        else if (R == 2)
        {
            printf("Bienvenido a HangMan, como jugador tendrá 10 intentos \n para tratar de adivina una palabra aleatoria. \n * Podrá ingresar letras o texto.\n * Se le contarán como intento si vuelve a poner la misma letra dos veces.\n * No puede ingresar número. \n * Si ingresa una palabra y no es la correcta, \n perderá automáticamente. \n\n\n");
        }
        else if (R == 3)
        {
            printf("Carlos Manuel Alvarado Andrade 20200118\n");
            printf("Cmalvarado@ufm.edu\n");
            printf("HangMan Carlos Alvarado\n\n\n");
        }
        else
        {
            break;
        }
    }
    

    return 0;
}