#include <stdio.h>

main(){
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
	int a, b;
	float c;
	
	printf("������� ����� ������ � ���� \n \n");
	scanf("%d %d", &a, &b);
	
	if (a<1000){
		printf("\n �������� ������ �����������:");
		printf("\n ����� ������ �� ����� ���� ������ 1000 ������.");
		if (b>365){
			printf("\n ���� ������ �� ����� ���� ������ 365 ����.");	
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
		printf("������ ������ = %f", c);
	}
}
