#include <stdio.h>


void SOMA(float val, float val2){
	
	float resultado;
	resultado = (val + val2);
	printf("o valor da soma e %.2f", resultado);
	
	
}


void SUBTRACAO(float val, float val2){
	
	float resultado;
	resultado = (val - val2);
	printf("o valor da subtracao e %.2f", resultado);
	
    
}


void MULTIPLICACAO(float val, float val2){
    
	float resultado;
    resultado = (val * val2);
    printf("o valor da multiplicacao e %.2f", resultado);
}


void DIVISAO(float val, float val2){
	
	float resultado;
	resultado = (val / val2);
	printf("o valor da divisao e %.2f", resultado);
}






 int main() 
 {

float valor;
float valor2;
float resultado;
char operacao;
int loop = 0;




   printf ("                                             >>>>>>>>>>CALCULADORA<<<<<<<<<<<< \n");
   printf ("\n");
   printf ("obs: para encerrar a calculadora digite 'x' e confirme com 'enter' duas vezes \n");




	   
 
   printf ("\n digite o primeiro valor do calculo \n");
   scanf ("%f", &valor);
   
   while (loop == 0){
   
   printf ("\n digite a operacao que sera realizada ou digite 'x' para encerrar \n");
   scanf ("%s", &operacao);
 
   printf ("\n digite o segundo valor calculo \n");
   scanf ("%f", &valor2);
 
 
 
 
 
  
 
 
 
 
 switch (operacao)
 {
 	
 	// varios testes foram feitos mas não encontrei a melhor forma de denominar resultado = (resultado+valor2) tanto no front como no back
 	
 case 'x':
 loop = 1;
 break;
 
 case '+' :
 SOMA(valor,valor2);
 break;
    
 case '-' :
 SUBTRACAO(valor,valor2);
 break;
 
     
 case '*' :
 MULTIPLICACAO(valor,valor2);
 break;
   
 case '/' :
 DIVISAO(valor,valor2);
 break;
 
 default:
 printf ("digito invalido");
 
 }
 	
	
 }
	
 return 0;
}

