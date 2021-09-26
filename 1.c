#include <stdio.h>
#include <stdlib.h>
int menu(void);
void mostrar(int[],int[],int[],int[],int[]);
int a[30],b[30],c[30],d[30],e[30];
void begin(void);
void asteriscos(int);

  void asteriscos(int a){
    int i;
    for (i=0;i<a;i++){
      printf("* ");
    }
  }

  void mostrar(int a[],int b[], int c[],int d[],int e[]){
      int sumaA,sumaB,sumaC,sumaD,sumaE,j;
      
        for(j=0;j<=30;j++){
          sumaA+=a[j];
          sumaB+=b[j];
          sumaC+=c[j];
          sumaD+=d[j];
          sumaE+=e[j];
          
        }
        printf("a: %d   a:", sumaA);
        asteriscos(sumaA);
        printf("\n");

        printf("b: %d   b:", sumaB);
        asteriscos(sumaB);
        printf("\n");

        printf("c: %d   c:", sumaC);
        asteriscos(sumaC);
        printf("\n");

        printf("d: %d   d:", sumaD);
        asteriscos(sumaD);
        printf("\n");

        printf("e: %d   e:", sumaE);
        asteriscos(sumaE);
        printf("\n");


        
        
  }
  
  void begin(){
    int j;
    for(j=0;j<=30;j++){
        a[j]=0;
        b[j]=0;
        c[j]=0;
        d[j]=0;
        e[j]=0;
        }
  }

  
  int menu(){
    
    char option;
    int flag=0,i=0;
    while (flag==0){
      system("cls");

      
      system("clear");
    
      printf( "\n   OPINION DEL GOBIERNO " );
      printf( "\n   a) MUY BUENA: " );
      printf( "\n   b) BUENA: " );
      printf( "\n   c) MAL: " );
      printf( "\n   d) MUY MAL: " );
      printf( "\n   e) RECONTRA MAL: " );
      printf( "\n   f) SALIR: \n" );
      printf("Digite opcion: ");
      scanf( " %c", &option );

      switch ( option )
      {
          case 'a' : a[i]=1;
                     
                  break;
          case 'b' : b[i]=1;
                    
                  break;
          case 'c' : c[i]=1;
                     
                  break;
          case 'd' : d[i]=1;
                     
                  break;
          case 'e' : e[i]=1;
                     
                  break;
          case 'f' : mostrar(a,b,c,d,e);return 0;
                  break;
          
      default : menu();
    }
    i+=1;
    }
    return 1;
  }

int main(void) {
  int fin;
  begin();
  fin=menu();
  if (fin==0){
    printf("fin de programa");
  }
  

  
  
  return 0;
}