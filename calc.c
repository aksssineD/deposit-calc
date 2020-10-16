#include <stdio.h>

main(){
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
	int a, b;
	float c;
	
	printf("Введите сумму вклада и срок \n \n");
	scanf("%d %d", &a, &b);
	
	if (a<1000){
		printf("\n Введённые данные некорректны:");
		printf("\n Сумма вклада не может быть меньше 1000 рублей.");
		if (b>365){
			printf("\n Срок вклада не может быть больше 365 дней.");	
		}
	} else {
		if (b<=30){
			c=a-(a*10/100);
		}
		if (b>=31&&b<=120){
			c=a+(a*2/100);
		}
		if (b>=121&&b<=240){
			c=a+(a*6/100);
		}
		if (b>=241&&b<=365){
			c=a+(a*12/100);
		}
		printf("Размер дохода = %f", c);
	}
}
