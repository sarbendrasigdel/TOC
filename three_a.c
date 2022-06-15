#include<stdio.h>
#define MAX 50

int main()
{
	char str[MAX], state ='A';
int i;
printf("\n enter the string : ");
scanf("%s",str);
printf("\n__________________________\n");

for (i=0; str[i]!='\0'; i++)
{
	switch(state)
	{
		case 'A':
		if(str[i]=='a')
		state =  'B';
		else if (str[i]=='b')
		state = 'A';
		break;

		case 'B':
		if(str[i]=='a')
		state =  'C';
		else if (str[i]=='b')
		state = 'A';
		break;

		case 'C':
		if(str[i]=='a')
		state =  'D';
		else if (str[i]=='b')
		state = 'A';
		break;

		case 'D':
		if(str[i]=='a')
		state =  'D';
		else if (str[i]=='b')
		state = 'A';
		break;

	}
}

if(state =='D')
{
	printf("\n input string accepted as reached to final state %c \n",state);
}

else
{
printf("\n input string rejected\n");
}
printf("\n__________________________\n");
return 0;

}








