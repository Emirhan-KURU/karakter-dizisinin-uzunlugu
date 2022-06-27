#include<stdio.h>
 int main(void)
{
   start:
   char s[20];
   int  k = 0;
   printf("Klavyeden giris: ");
   gets(s);
	
   while( s[k]!='\0' )    
     k++;
  
   printf("Dizinin uzunlugu : %d\n",k);
   k=0;
   goto start;
}
	
	
