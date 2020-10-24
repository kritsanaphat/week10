#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string>
#include<windows.h>


void gotoxy(int x, int y)
{
	COORD c = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void six(int m, int n) {
	gotoxy(m, n++); 
	printf("=====\n");
	gotoxy(m, n++); 
	printf("||\n");
	gotoxy(m, n++);
	printf("||\n");
	gotoxy(m, n++); 
	printf("||\n");
	gotoxy(m, n++); 
	printf("=====\n");
	gotoxy(m, n++); 
	printf("||  ||\n");
	gotoxy(m, n++); 
	printf("||  ||\n");
	gotoxy(m, n++); 
	printf("=====\n");
}
void one(int m, int n) {
	gotoxy(m, n++);
	printf("==== \n");
	gotoxy(m, n++);
	printf("  ||\n");
	gotoxy(m, n++);
	printf("  ||\n");
	gotoxy(m, n++);
	printf("  ||\n");
	gotoxy(m, n++);
	printf("  ||\n");
	gotoxy(m, n++);
	printf("  ||\n");
	gotoxy(m, n++);
	printf("  ||\n");
	gotoxy(m, n++);
	printf("  ||\n");
}
void three(int m, int n) {
	gotoxy(m, n++);
	printf("=====\n");
	gotoxy(m, n++);
	printf("   ||\n");
	gotoxy(m, n++);
	printf("   ||\n");
	gotoxy(m, n++);
	printf("   ||\n");
	gotoxy(m, n++);
	printf("=====\n");
	gotoxy(m, n++);
	printf("   ||\n");
	gotoxy(m, n++);
	printf("   ||\n");
	gotoxy(m, n++);
	printf("=====\n");
}
void four(int m, int n) {
	gotoxy(m, n++);
	printf("|| ||\n");
	gotoxy(m, n++);
	printf("|| ||\n");
	gotoxy(m, n++);
	printf("|| ||\n");
	gotoxy(m, n++);
	printf("|| ||\n");
	gotoxy(m, n++);
	printf("=====\n");
	gotoxy(m, n++);
	printf("   ||\n");
	gotoxy(m, n++);
	printf("   ||\n");
	gotoxy(m, n++);
	printf("   ||\n");
	
}
void five(int m, int n) {
	gotoxy(m, n++);
	printf("=====\n");
	gotoxy(m, n++);
	printf("||   \n");
	gotoxy(m, n++);
	printf("||   \n");
	gotoxy(m, n++);
	printf("||   \n");
	gotoxy(m, n++);
	printf("=====\n");
	gotoxy(m, n++);
	printf("   ||\n");
	gotoxy(m, n++);
	printf("   ||\n");
	gotoxy(m, n++);
	printf("===||\n");
}
void saven(int m, int n) {
	gotoxy(m, n++);
	printf("=====\n");
	gotoxy(m, n++);
	printf("   ||\n");
	gotoxy(m, n++);
	printf("   ||\n");
	gotoxy(m, n++);
	printf("   ||\n");
	gotoxy(m, n++);
	printf("   ||\n");
	gotoxy(m, n++);
	printf("   ||\n");
	gotoxy(m, n++);
	printf("   ||\n");
	gotoxy(m, n++);
	printf("   ||\n");
}
void eight(int m, int n) {
	gotoxy(m, n++);
	printf("=====\n");
	gotoxy(m, n++);
	printf("|| ||\n");
	gotoxy(m, n++);
	printf("|| ||\n");
	gotoxy(m, n++);
	printf("|| ||\n");
	gotoxy(m, n++);
	printf("=====\n");
	gotoxy(m, n++);
	printf("|| ||\n");
	gotoxy(m, n++);
	printf("|| ||\n");
	gotoxy(m, n++);
	printf("=====\n");
}
void nine(int m, int n) {
	gotoxy(m, n++);
	printf("=====\n");
	gotoxy(m, n++);
	printf("|| ||\n");
	gotoxy(m, n++);
	printf("|| ||\n");
	gotoxy(m, n++);
	printf("|| ||\n");
	gotoxy(m, n++);
	printf("=====\n");
	gotoxy(m, n++);
	printf("   ||\n");
	gotoxy(m, n++);
	printf("   ||\n");
	gotoxy(m, n++);
	printf("=====\n");
}
void zero(int m, int n) {
	gotoxy(m, n++);
	printf("=====\n");
	gotoxy(m, n++);
	printf("|| ||\n");
	gotoxy(m, n++);
	printf("|| ||\n");
	gotoxy(m, n++);
	printf("|| ||\n");
	gotoxy(m, n++);
	printf("|| ||\n");
	gotoxy(m, n++);
	printf("|| ||\n");
	gotoxy(m, n++);
	printf("|| ||\n");
	gotoxy(m, n++);
	printf("=====\n");
}
void two(int m, int n) {
	gotoxy(m, n++);
	printf("=====\n");
	gotoxy(m, n++);
	printf("   ||\n");
	gotoxy(m, n++);
	printf("   ||\n");
	gotoxy(m, n++);
	printf("   ||\n");
	gotoxy(m, n++);
	printf("=====\n");
	gotoxy(m, n++);
	printf("||   \n");
	gotoxy(m, n++);
	printf("||   \n");
	gotoxy(m, n++);
	printf("=====\n");
}

int main() {
	int m = 0, n = 0;
	char x[100];
	int y, i, chk = 0;
	scanf("%s", x);
	y = strlen(x);
	for (i = 0; i < y; i++) {
		if (x[i] >= 48 && x[i] <= 57) {
			chk++;
		}
		else chk--;
	}
	if (chk == 8) {
		for (i = 0; i < 8; i++) {
			m = (i * 10 )+ 5;
			n = 2;
			if (x[i] == 48) {
				zero(m, n);
			}
			else if (x[i] == 49) {
				one(m, n);
			}
			else if (x[i] == 50) {
				two(m, n);
			}
			else if (x[i] == 51) {
				three(m, n);
			}
			else if (x[i] == 52) {
				four(m, n);
			}
			else if (x[i] == 53) {
				five(m, n);
			}
			else if (x[i] == 54) {
				six(m, n);
			}
			else if (x[i] == 55) {
				saven(m, n);
			}
			else if (x[i] == 56) {
				eight(m, n);
			}
			else if (x[i] == 57) {
				nine(m, n);
			}

		}

	}
	else printf("ERROR");
}