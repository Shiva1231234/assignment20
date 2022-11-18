///

Question =1
/*
#include<stdio.h>

void swap(int, int);

int main()
{
    int a, b;

    printf("Enter values for a and b\n");
    scanf("%d%d", &a, &b);

    printf("\n\nBefore swapping: a = %d and b = %d\n", a, b);

    swap(a, b);

    return 0;
}

void swap(int x, int y)
{
    int temp;

    temp = x;
    x    = y;
    y    = temp;

    printf("\nAfter swapping: a = %d and b = %d\n", x, y);
}
*\
*\
/// Question =2

#include<stdio.h>
#include<conio.h>
void swap(char *str1,char*str2)
{

    int i;
    for(i=0;*(str2+i);i++)
    {
        char temp=str1[i];
        str1[i]=str2[i];
        str2[i]=temp;
    }
}
int main()
{

    char str1[10];
    char str2[10];
    printf("enter your strings");
    fgets(str1,10,stdin);
    printf("enter your strings");
    fgets(str2,10,stdin);
    printf("%s : %s\n",str1,str2);
    swap(str1,str2);
    printf("%s : %s\n",str1,str2);
}

///
Question =3
#include<stdio.h>
int main()
{
int a[10],i;
printf("enter your number\n");

for(i=0;i<=9;i++)

scanf("%d",&a[i]);
sorted(a);
}

void sorted(int *ptr)
{
int i,j,temp;
for(i=0;i<=9;i++)
{
for(j=i+1;j<10;j++)
{
if(*(ptr+i)<*(ptr+j))
{
temp=*(ptr+i);
*(ptr+i)=*(ptr+j);
*(ptr+j)=temp;
}
}
}
for(i=0;i<=9;i++)
printf("the sorted element is %d",*(ptr+i));
}




///Question = 5

#include<stdio.h>
int main()
{
int no1,no2;
int *ptr1, *ptr2;
printf("enter first number:\n");
scanf("%d",&no1);
printf("enter second number:\n");
scanf("%d",&no2);
ptr1=&no1;
ptr2=&no2;
if(*ptr1=*ptr2)
{
printf("maximum number is %d",*ptr1);
}
else
{
printf("maximum number is %d",*ptr2);
}
}
*\
*\
////Question =6
#include <stdio.h>
int calculateLength(char*);

void main()
{
   char str1[25];
   int l;
	printf("\n\n Pointer : Calculate the length of the string :\n");
	printf("---------------------------------------------------\n");

   printf(" Input a string : ");
   fgets(str1, sizeof str1, stdin);

   l = calculateLength(str1);
   printf(" The length of the given string %s is : %d ", str1, l-1);
   printf("\n\n");

}

int calculateLength(char* ch) // ch = base address of array str1 ( &str1[0]  )
{
   int ctr = 0;
   while (*ch != '\0')
   {
      ctr++;
      ch++;
   }
   return ctr;
}

///Question=7

#include<stdio.h>
#include<string.h>
int main()
{

    char str[100],i;
    char *p;
    int vcount=0,ccount=0;
    printf("enter your string ");
    fgets(str,100,stdin);
    p=str;

while(*p!='\0')
{
    if(*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U'||*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u')

    vcount++;


else


    ccount++;
    p++;

}
printf("total vowel in the string is %d",vcount);
printf("total constraints in the string is %d",ccount-1);
}
///Question=8
#include<stdio.h>
int main()
{

    int a[1000];
    int *p;
    int i,sum=0,size;
    printf("enter the size of the array");
    scanf("%d",&size);
    printf("enter your array numbers :");
    p=a;
    for(i=0;i<size;i++)

{

        scanf("%d",&p[i]);
}
    for(i=0;i<size;i++)
    {

        sum=sum+*(p+i);
    }
    printf("total sum of the array element is %d",sum);
}
///
Question=9
#include<stdio.h>
int main()
{

    int a[]={1,2,3,4,5};
    int *p;
    int i;
    p=a;
    int length = sizeof(a)/sizeof(a[0]);

    printf("print the orignal array : \n");
    for(i=0;i<length;i++)
    {

        printf(" %d",*(p+i));
    }
    printf("print the array in reverse order :\n");
    for(i=length-1;i>=0;i--)
    {
        printf("%d",*(p+i));
    }

}

///
Question =10


#include<stdio.h>
int main()
{

    int a[]={1,2,3,4,5};
    int *p;
    int i;
    p=a;
    int length = sizeof(a)/sizeof(a[0]);

    printf("print the orignal array : \n");
    for(i=0;i<length;i++)
    {

        printf(" %d",*(p+i));
    }
    printf("print the array in reverse order :\n");
    for(i=length-1;i>=0;i--)
    {
        printf("%d",*(p+i));
    }

}
