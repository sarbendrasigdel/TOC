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
		if(str[i]=='0')
		state =  'A';
		else if (str[i]=='1')
		state = 'B';
		break;

		case 'B':
		if(str[i]=='0')
		state =  'C';
		else if (str[i]=='1')
		state = 'B';
		break;

		case 'C':
		if(str[i]=='0')
		state =  'C';
		else if (str[i]=='1')
		state = 'D';
		break;

		case 'D':
		if(str[i]=='0')
		state =  'D';
		else if (str[i]=='1')
		state = 'D';
		break;

	}
}

if(state =='C' || state == 'B' || state == 'A')
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








