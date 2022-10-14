//Em desenvolvimento
//neemias Patrocinio
//c++

#include <stdio.h>
#include <string.h>
 
struct Livro {
   char  titulo[50];
   char  autor[50];
   char  assunto[100];
   int   livro_id;
};
 struct Livro entrada(struct Livro x[]){
   int i;
 
 printf ("Digite o nome do livro");
   scanf( "%c",&x[i].titulo);
printf ( "Digite o nome do Autor ");
   scanf( "%c",&x[i].autor); 
printf ( "Digite o Assunto , %c");
   scanf( "%c",&x[i].assunto);
printf ( "Digite o ID, %c");
  scanf( "%d",&x[i].livro_id);
  i++;}
  


void imprimir(struct Livro x[] ){
int i;	
   printf( "Titulo : %c\n", &x[i].titulo);
   printf( "Autor : %c\n", &x[i].autor);
   printf( "Assunto : %c\n", &x[i].assunto);
   printf( "ID do Livro : %d\n", &x[i].livro_id);
   
};
int main( ) {

   struct Livro L[];    /* Declare Livro1 of type Livro */
    int op=0,i=0 ; 		     /* contador */
   void imprimir(struct Livro x[]);    /* Saida de Dados*/
 struct Livro entrada(struct Livro x[]);	   /* Entrada de Dados*/
 
    do{
	printf (" MENU DE OPÇOES ");
	printf (" Digite 1 Para Adicionar ");
	printf (" Digite 2 Para Exibir ");
	printf ("Digite 0 Para Sair ");
	printf ("Digite 999 Para Fechar ");
	scanf("%d",&op);
   
  if (op==1){
  
    L[0] = entrada(struct Livro L[0]);
    L[1] = entrada(struct Livro L[1]);
   
	else
  		if (op==2)
    		printf( "Livro 1 : \n", imprimir(struct Livro L[0]));
   			printf( "Livro 2 : \n", imprimir(struct Livro L[1]));
  
   			else
			   if(op==0)
				break;
	
				else(op!=0,1,2)
					Printf ("Invalido");
				}
   
while(op==999)}
return 0;
}
