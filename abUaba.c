#include<stdio.h>
#define MAX 50

int main()
{
	char str[MAX], state ='A';
int i;
printf("\n enter the string : ");
scanf("%s",str);
printf("\n\n__________________________\n");

for (i=0; str[i]!='\0'; i++)
{
	switch(state)
	{
		case 'A':
		if(str[i]=='a')
		state =  'B';
		else if (str[i]=='b')
		state = 'E';
		break;

		case 'B':
		if(str[i]=='a')
		state =  'E';
		else if (str[i]=='b')
		state = 'C';
		break;

		case 'C':
		if(str[i]=='a')
		state =  'D';
		else if (str[i]=='b')
		state = 'E';
		break;

		case 'D':
		if(str[i]=='a')
		state =  'B';
		else if (str[i]=='b')
		state = 'C';
		break;

    	case 'E':
		if(str[i]=='a')
		state =  'E';
		else if (str[i]=='b')
		state = 'E';
		break;

	}
}

if(state =='C' || state == 'D')
{
	printf("\n input string accepted as reached to final state %c \n",state);
}

else
{
printf("\n input string rejected\n");
}
printf("\n\n__________________________\n");
return 0;

}








