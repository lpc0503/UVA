/*******************************************************************************************************
* UVa 10591 - Happy Number                                                                             *
* https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1532              *
* https://www.udebug.com/UVa/10591                                                                   *
*******************************************************************************************************/
#include<cstdio>

int main(void){

	int n;//the number of the test
	scanf("%d", &n);

	for(int i = 0 ; i < n ; i++){//i+1 is the number of case
		
		int input = 0;//store the input;
		int tmp = 0;//store the input temporarily
		int sum = 0;//the sum of square of the digits
		int remainder = 0;// the digit of input;

		scanf("%d", &input);//start input
		tmp = input;//store the input
		sum = 0;

		while(1){//start finding the happy number

			if(input <= 9){//if input <10, then we find the answer

				sum = input;
				break;//break the loop
			}

			while(input != 0){//start comput the sum of the digits

				remainder = input % 10;
				sum = sum + (remainder*remainder);
				input = input / 10;
			}

			input = sum;//store the sum in the input to start the next loop
			sum = 0;//clear the sum
		}

		if(sum == 1 || sum == 7)//the solution < 10 is 1 or 7
			printf("Case #%d: %d is a Happy number.\n", i+1, tmp);
		else
			printf("Case #%d: %d is an Unhappy number.\n", i+1, tmp);
	}
}