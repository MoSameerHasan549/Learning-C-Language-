#include<stdio.h>
int kmtomiles(int km)
{
   km= km*0.621;
   return km;
}

int intoft(int ft)
{
   ft= ft*0.0833;
   return ft;
}

int intome(int me)
{
   me= me*0.0254;
   return me;
}

int cmtoin(int in)
{
   in= in*0.394;
   return in;
}

int pdtokg(int kg)
{
   kg= kg*0.454;
   return kg;
}

int main()
{
	char unit;
	int aa,bb;
	do
	{
	  printf("what do you wanna do?\n");
	  printf("For Km to Miles press a\n");  
	  printf("For inches  to foot press b\n");  
	  printf("For inches to meter press c\n");     
	  printf("For cm to inches press d\n");
	  printf("For Pound  to Kg press e\n"); 
	  scanf(" %c",&unit);
	  printf("enter your value \n");
	  scanf(" %d", &aa);
	  
	  
	  if(unit == 'a')
	  {
	      printf("your ans is %f\n",kmtomiles(aa));
	      }
	   else if(unit == 'b')
	  {
	      printf("your ans is %f\n",intoft(aa));
	      }
	   else if(unit == 'c')
	  {
	      printf("your ans is %f\n",intome(aa));
	      }
	   else if(unit == 'd')
	  {
	      printf("your ans is %f\n",cmtoin(aa));
	      }
	   else if(unit == 'e')
	  {
	      printf("your ans is %f\n",pdtokg(aa));
	      }
	   else 
	  {
	       printf("You enter a wrong alphabet!"); 
	  }
	   
	   printf("\nLets Calculate Again  :)\n\n"); 
	   
	  
     }while(1);
}