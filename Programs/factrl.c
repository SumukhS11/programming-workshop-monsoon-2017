//factorial of a number 'n'
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int fact = 1;
	for(i=1;i<=n;i++){
		fact *= i;
	}
	printf("%d\n", fact);
}