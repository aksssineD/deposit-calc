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
	}
}
