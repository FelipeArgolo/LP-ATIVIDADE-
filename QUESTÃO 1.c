#include <stdint.h>
#include <stdio.h>

int main (){

int clima;

printf("|ikarus| como esta o clima hoje ? \n");
printf("Voce:");
scanf ("%d",&clima);

if (clima > 25)
{
    printf("\n");
    printf("|ikarus| O clima esta ensolarado. Vamos as masmorras!!");
}
else if (clima < 15)
{
  printf("\n");
  printf("|ikarus| O clima esta um pouco chuvoso. infelizmente teremos que deixar nossa aventura para proxima");
}
else
{
printf("\n");
printf("|ikarus| o clima parece um pouco melancolico, mas nada ira impedir nossa aventura");

}

return 0;
}