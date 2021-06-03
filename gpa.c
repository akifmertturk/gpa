#include <stdio.h>
#include <stdlib.h>

/*************GLOBAL VARIABLES*************/

int courseNumber;
char** courseName;
char** harf; 
double sum, dev, cGPA;
int kredi[30];
struct course {
	char courseName[8];
	char harf[2]; 
	int kredi;
};
	struct course Course[45];
/******************************************/


 /*INITIALIZE G.V.*/

int courseNumber = 0;

		/**********/




double harfConverter(char harf){
	switch(harf){
		case 'A':
			return 2.0;
		case 'B':
			return 1.5;
		case 'C':
			return 1.0;
		case 'D':
			return 0.5;
		case 'F':
			return 0.0;
		default :
			return -1.0;
	}
}

void printTable(int var){
	int i = 0;
	if(var == 1){
		printf("\n");
		for(i = 0; i < 24; i++)	printf("*");
		printf("\n*By Miraç Akif Merttürk*\n");
		for(i = 0; i < 24; i++)	printf("*");
		printf("\n");
		printf("*Lütfen inputları şu   *\n*şekilde giriniz :     *\n");
		printf("*CourseName :          *\n*kredi_sayısı harfNotu,*\n");
		printf("* ':' ve ',' unutmayın *\n*en sona ise ',' yerine*\n");
		printf("* '.' (nokta) koyunuz  *\n");
		for(i = 0; i < 23; i++)	printf("*");
	}
	else {
		for(i = 0; i < 2; i++){
			printf("*");
			for(i = 0; i < 22; i++) printf(" ");
			printf("*\n");
		}
		for(i = 0; i < courseNumber; i++){
			printf("*%s : %c%c - %d kredi*\n", Course[i].courseName, Course[i].harf[0], Course[i].harf[1], Course[i].kredi);
		}
	
		if(cGPA >= 2.00) {
			printf("\n");
			for(i = 0; i < 24; i++) {printf("*");}
			printf("\n*");
			for(i = 0; i < 22; i++){printf(" ");}
			printf("*\n");
			printf("*     cGPA = %.2f !    *\n*", cGPA);
			for(i = 0; i < 22; i++){printf(" ");}
			printf("*\n");
			printf("******* AŞMIŞSIN *******\n");
			printf("\n");
			printf("           ~~           \n\n");
		}
		else {
 			printf("\n");
			for(i = 0; i < 24; i++) {printf("*");}
			printf("\n*");
			for(i = 0; i < 22; i++){printf(" ");}
			printf("*\n");
			printf("*------- LOOSER -------*\n");
			printf("*     cGPA = %.2f !    *\n*", cGPA);
			for(i = 0; i < 22; i++){printf(" ");}
			printf("*\n");
			printf("*Hayat kısa keyfine bak*\n");
			printf("\n");
		}
	}
}

int main() {
	int i = 0, j = 0;
	char temp = 'i';
	sum = 0;
	dev = 0;
	printTable(1);
	while(temp != '.'){
		scanf(" %c", &temp);
		for(j = 0; 1; j++){
			if((temp != ':') && (temp != '.')) {
					if(temp == ',') {
						scanf(" %c", &temp);
					}
					else ;
					Course[i].courseName[j] = temp;
					scanf(" %c", &temp);
			}
			else if(temp == ':'){
					for(; j < 7; j++) {Course[i].courseName[j] = ' ';}
					Course[i].courseName[j] = '\0';
					scanf(" %d %c %c %c", &Course[i].kredi, &Course[i].harf[0], &Course[i].harf[1], &temp);
		 			dev = dev + Course[i].kredi;
					sum = sum + Course[i].kredi * (harfConverter(Course[i].harf[0]) + harfConverter(Course[i].harf[1]));
					courseNumber++;
	   			i++;
					break;
			}
			else break;
		}
	}
	cGPA = sum / dev;
	printTable(4);
	return 0;
}
