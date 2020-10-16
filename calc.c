#include <stdio.h>

main(){
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
	int a, b;
	float c;
	
	printf("¬ведите сумму вклада и срок \n \n");
	scanf("%d %d", &a, &b);
	
	if (a<1000){
		printf("\n ¬ведЄнные данные некорректны:");
		printf("\n —умма вклада не может быть меньше 1000 рублей.");
		if (b>365){
			printf("\n —рок вклада не может быть больше 365 дней.");	
		}
	}
}
