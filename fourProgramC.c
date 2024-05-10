#include <stdio.h>

int main()
{

	float nota;
	printf("digite a nota: ");
	scanf("%f", &nota);
	printf("%f\n",nota);
	if (nota >= 5)
		printf("Parabens voce foi aprovado\n");
	if (nota < 5)
		print("Nao deu desta vez , mas nao desista! ");
	
	return 0;

}
