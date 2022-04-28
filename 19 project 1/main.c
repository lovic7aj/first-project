#include <stdio.h>
#include <stdlib.h>
void nice(int num);
void dev3no5(int num);
void palendrome(int num);
int main()
{
int num;
char x;
printf("please enter a four digits number. but does not have zeros on right\n");
scanf("%d",&num);
if (num%10==0||(num/100)%10==0||(num/1000)%10==0||(num/10000)%10!=0)
{
    printf("this number is not valid please try another one\n");
    return 0;
}
else
{
    printf("please choose between these options\n1)write a to check if the number is nice or not\n2)write b to check if the number is devidble by 3 but not 5\n3) write c to check the number if its palendrome\n ");
    scanf(" %c",&x);
  switch (x)
  {
  case 'a': nice(num);
    break;
  case 'b': dev3no5(num);
    break;
  case 'c': palendrome(num);

  }
}
    return 0;
}

void nice(int num)
{
    if (num%10==7||(num/10)%10==7||(num/100)%10==7||(num/1000)%10==7)
      {printf("this number is nice\n");}
    else
       {
           printf("this number is not prime\n");
       }
}
void dev3no5(int num)
{
    if (num%3==0&&num%5!=0)
    {
        printf("this number is devidable by 3 but not 5\n");
    }
else
{
    printf("this number is not devidble by 3 and not 5\n");
}

}
void palendrome(int num)
{
    int rev;
    rev = (((num%10)*1000)+(((num/10)%10)*100)+(((num/100)%10)*10)+((num/1000)%10));
    if (num==rev)
    {
        printf("this number is palendrome\n");
    }
else
{
    printf("this number is not palendrome\n");
}
}


