// EvolableAsiaTest.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "conio.h"
#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h"
#define EXSERCISE 1
int _tmain(int argc, _TCHAR* argv[])
{

#if( EXSERCISE==1)


    unsigned int NumberTestCase, NumberElement;// TestCase and number of element for each test case
	unsigned int i =0,j =0;//Couter;
	char *p,*p1;
	double *Result;// the output
	int temp;
label1: // input NumberTestCase
	fflush(stdin); // clear data in buffer
	scanf("%d",&NumberTestCase);
	if((NumberTestCase >100) || (NumberTestCase <=0)){
		goto label1;
	}
	Result = (double *) calloc(NumberTestCase, sizeof(double));

label4:
	if(i< NumberTestCase){

label2: // input NumberElement
		fflush(stdin); // clear data in buffer
		scanf("%d",&NumberElement);
		if((NumberElement >100) || (NumberElement <=0)){
			goto label2;
		}

		p = (char*)calloc((NumberElement*7), sizeof( char));// allocated memory for NumberElements
		

		fflush(stdin);
		scanf("%[^\n]",p);
		//printf("%s\n",p);
		p1=strtok(p," ");
label3:
		if(p1!=NULL){
			//printf("%s\n",p1);
			temp = atoi(p1);
			if(temp>0){

				*(Result +i) = *(Result+i) + (temp)*(temp);

			}
			p1 = strtok(NULL," ");
			goto label3;
		}
		//printf("%d",Result[i]);
		i++;
		free(p);
		goto label4;
	}

label5:

	if(j< NumberTestCase){
		//printf("%d\n",Result[j]);
		printf("%.f\n",*(Result+j));
		j++;
		goto label5;

	}
	free(Result);
	getch();
	return 0;


#elif(EXSERCISE ==2)

	char line[1100]; 
	char line2[10] = {'1','2','3','4','5'};/*  */
	char s[]="-12345";
	char *p= line;
	char *p1;
	char i = 0;
			
	/*scanf("%d %d %d", &line[0],&line[1],&line[2] );
	printf("%d %d %d ",line[0], line[1], line[2]);*/

	scanf("%[^\n]",line);
	printf("%s", line );
	printf("\r\n");
	printf("%d",strlen(line) );
	printf("\r\n");
	//printf("%d",(strchr(p,' ')-p) );
	//printf("%s", s);
	//printf("%d", atoi(s));
	//if(atoi(s)< 0)
		//printf("hello");
	p1=strtok(line," ");
	i = strlen(line);
	label1:
	if(p1!=NULL){
	    printf("%s\n",p1);
		p1 = strtok(NULL," ");
		goto label1;
	}
	printf("%s", line );


	/*printf("%s",p1);
	printf("\r\n");
	printf("%s", line );
	printf("\r\n");

	p1 = strtok(NULL," ") ;
	printf("%s",p1);
	printf("\r\n");
	printf("%s", line );
	printf("\r\n");

	p1 = strtok(NULL," ") ;
	printf("%s",p1);
	printf("\r\n");
	printf("%s", line );
	 printf("%s", line );
	printf("%s", line );*/



	/*scanf("%s",line2);
	printf("%s", line2 );*/

			
	getch();
	return 0;

#endif

	

}

