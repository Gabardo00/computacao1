#include <stdio.h>
#include <math.h>

int qtd_raiz(float a, float b, float c, float *x1, float *x2)
{
  float delta;
  int qtd;
  delta = pow(b, 2)- 4 * a * c;

  printf ("Valor de delta = %f",delta);

  if(delta < 0){
    qtd = 0;

  }else if(delta == 0){
  qtd = 1;

   *x1 = -b / (2 * a );

  } else {
  qtd = 2;
  *x1 = (sqrt(delta) -b) / (2 * a );
  *x2 = (-sqrt(delta) -b) / (2 * a );
  }




    int quantidade_de_raizes;


    return qtd;

}

int main()
{

    float x1, x2;
    float a = 1, b = 4, c = 4;

    printf("Valor de x1 = %f\nvalor de x2 = %f\n\n",x1, x2);





    printf("Dada a funcao: a = %f, b = %f, c = %f", a, b, c);

    printf("\nTem %d raiz(es)", qtd_raiz(a, b ,c, &x1, &x2));

    printf("\nValor de x1 = %f\nValor de x2 = %f", x1, x2);
    return 0;

}
