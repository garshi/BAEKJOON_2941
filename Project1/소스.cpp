#include<stdio.h>
#include<string.h>
int main(void) {

	int result = 0;
	char A[110];
	fgets(A, sizeof(A), stdin);


	for (int i = 0; i < strlen(A) - 1; i++) {



		if (A[i] == 'c' && A[i + 1] == '=') {									//c=
			result++;
			i++;

		}
		else if (A[i] == 'c' && A[i + 1] == '-') {

			result++;
			i++;
		}
		else if ((A[i] == 'd' && A[i + 1] == 'z') && A[i + 2] == '=') {

			result++;
			i += 2;

		}
		else if (A[i] == 'd' && A[i + 1] == '-') {

			result++;
			i++;

		}
		else if (A[i] == 'l' && A[i + 1] == 'j') {
			result++;
			i++;

		}
		else if (A[i] == 'n' && A[i + 1] == 'j') {
			result++;
			i++;

		}
		else if (A[i] == 's' && A[i + 1] == '=') {
			result++;
			i++;

		}
		else if (A[i] == 'z' && A[i + 1] == '=')
		{
			result++;
			i++;


		}
		else {
			result++;

		}



	}


	printf("%d", result);



}