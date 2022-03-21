#include <stdio.h>

void hanoi (int n, char from, char middle, char to);

int main(){
	int n;
	printf("%d번 : ");
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
}

void hanoi (int n, char from, char middle, char to){
	if(n == 1){
		printf("%d번 원판을 %c에서 %c로 이동", n, from, to); 
	}else{
		hanoi(n-1,'A','C','B' ); //
		  printf("%d번 원판을 %c에서 %c로 이동", n, from, to);
		hanoi(n-1, 'C', 'A', 'B');
	}
}
