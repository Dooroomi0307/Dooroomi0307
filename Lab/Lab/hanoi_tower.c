#include <stdio.h>

void hanoi(int n, char from, char middle, char to);

int main() {
	int n;
	printf("원판의 갯수를 입력하시오: ");
	scanf_s("%d", &n);

	hanoi(n, 'A', 'B', 'C');
}

void hanoi(int n, char from, char middle, char to) {
	if (n == 1) {
		printf("%d번 원판을 %c에서 %c로 이동\n", n, from, to);
	}
	else {
		hanoi(n - 1, 'A', 'C', 'B'); 
		printf("%d번 원판을 %c에서 %c로 이동\n", n, from, to);
		hanoi(n - 1, 'C', 'A', 'B');
	}
}
