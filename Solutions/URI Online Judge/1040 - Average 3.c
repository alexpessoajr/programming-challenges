
#include <stdio.h>

int main (void) {
	float n[4], avg, e;

	scanf("%f %f %f %f", &n[0], &n[1], &n[2], &n[3]);
	avg = (2*n[0] + 3*n[1] + 4*n[2] + n[3]) / 10;

	printf("Media: %.1f\n", avg);

	if (avg >= 7) {
		printf("Aluno aprovado.\n");
	} else if (avg < 5) {
		printf("Aluno reprovado.\n");
	} else {
		printf("Aluno em exame.\n");
		scanf("%f", &e);
		avg = (avg + e) / 2;
		
		printf("Nota do exame: %.1f\n", e);
		printf("Aluno %s.\n", (avg >= 5 ? "aprovado" : "reprovado"));	
		printf("Media final: %.1f\n", avg);
	}

	return 0;
}

