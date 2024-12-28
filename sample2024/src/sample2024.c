/*
 ============================================================================
 Name        : sample2024.c
 Author      : Sony Sunny
 Version     :
 Copyright   : Your copyright notice
 Description : Palindrome example
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i,num1, num2, result;
int is_palindrome(char str[]);



int main(void) {

/*	printf("Enter the first number\n");
	scanf("%d", &num1);
	printf("Enter the second number\n");
	scanf("%d", &num2);
	result= num1+num2;
	printf("The result is: %d", result);
	*/

//	int num, fact,i;
//	printf("Enter the number: \n");
//	scanf("%d", &num);
//	for(i=1;i<num;i++){
//		fact=fact*i;
//	}
//	printf("The factorial of the entered number is: %d", fact);


//	int i;
//	float f;
//	char c;
//	double d;
//	signed int si;
//	unsigned int usi;
//	printf("The size of int: %d\n", sizeof(i));
//	printf("The size of float: %d\n", sizeof(f));
//	printf("The size of char: %d\n", sizeof(c));
//	printf("The size of signed int: %d\n", sizeof(si));
//	printf("The size of unsigned int: %d\n", sizeof(usi));


//	int num1,num2,swap;
//	num1 =10, num2=20;
//	swap=num1;
//	num1=num2;
//	num2=swap;
//	printf("num1=%d num2=%d",num1, num2);

//	int num1, num2, result;
//	char input[100];
//	char addition[]="addition";
//	char subsratcion[]="substraction";
//	printf("Enter two numbers saperated with comma\n");
//	scanf("%d, %d", &num1, &num2);
//	printf("Enter the operation preffered (Operations: addition, substraction)\n");
//	scanf("%99s", input);
//	printf("%s", input);
//	if (strcmp(input, addition) == 0) {
//	        result=num1+num2;
//			printf("The result (addition): %d", result);
//	    }else if(strcmp(input, subsratcion)==0){
//	    	result=num1-num2;
//	    	printf("The result (substraction): %d", result);
//	    }else {
//	        printf("Invalid operation.\n");
//	    }
//	return 0;


//	printf("Enter a number:");
//	scanf("%d", &num1);
//	if(num1!=0 && (num1%2==0)){
//		printf("The given number is a even number");
//		}else{
//			printf("The given number is not an even number");
//		}

//		int flag=0;
//	printf("Enter a number");
//	scanf("%d", &num1);
//	if(num1<=1)
//		flag=1;
//	printf("%d\n", num1);
//	for(i=2; i<=num1/2; i++){
//		if(num1 % i == 0){
//			flag=1;
//		}else{
//			flag=0;
//		}
//	}
//		if(flag==0)
//			printf("The given number is a prime number");
//		else if(flag==1)
//			printf("The given number is a not a prime number");

//	int a[5];
//	printf("Enter a string");
//	for(i=0;i<5;i++)
//		scanf("%d", &a[i]);
//	for(i=0;i<5;i++)
//		printf("%d",a[i]);


//	char a[]="sonysunnnyyyyy";
//	int limit=strlen(a);
//	printf("%d\n", limit);
////	printf("Enter the string");
////	for(i=0;i<5;i++){
////		scanf("%c",&a[i]);}
//		for(i=0;i<limit;i++){
//		printf("%c",a[i]);
//	}


	char str[100];
	printf("Enter a string");
	gets(str);
	if(is_palindrome(str)==1)
		printf("The string is palindrome");
	else
		printf("The string is not a palindrome");

	return 0;
}


	int is_palindrome(char str[])
	{
		int low=0;
		int high=strlen(str)-1;

		while(low<high){
			if(str[low] != str[high]){
				return 0;
			}
			low++;
			high--;
		}
		return 1;
	}




