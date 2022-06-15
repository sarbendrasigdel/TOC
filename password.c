
//program to validate password

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void check_pass(char str[])
{

if(strlen(str) < 8)
{
printf("\n password must be atleast 8 characters \n");
exit(0);
}

int flag_small = 0 , flag_capital = 0 , flag_num = 0, flag_spc = 0;

for(int i=0; i< strlen(str);i++)
{
    if(str[i] >= 'a' && str[i] <= 'z')
    {
        flag_small = 1;
    }
    else if(str[i] >= 'A' && str[i] <= 'Z')
    {
        flag_capital = 1;
    }
    else if(str[i] >= '0' && str[i] <= '9'
    )
    {
        flag_num = 1;
    }
    else if((str[i]=='@') || (str[i]=='!')||(str[i]=='#')||(str[i]=='$') || (str[i]=='%')               || (str[i]=='^') || (str[i]=='^')
 ||(str[i]=='&') || (str[i]=='*') || (str[i]=='(') || (str[i]==')') || (str[i]=='_') 
|| (str[i]=='+') || (str[i]=='-'))
{
    flag_spc = 1;
}

}

if(flag_capital && flag_small && flag_num && flag_spc)
{
    
    printf("\n password is  valid \n");
}
else{
    
    printf("\n passwowrd invalid\n");

}
}



int main()
{


char pass[15];
printf("\n enter a password :  ");
scanf("%s",pass);


check_pass(pass);




}