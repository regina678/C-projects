#include<stdio.h>
float shares[10],deposit[10],interest[10],totalsavings[10];
int i;
main()
{
  for(i=0;i<10;i++)	
  {
	printf("enter shares and deposit for member%d:\n",i+1);
	scanf("%f%f",&shares[i],&deposit[i]);
	if(shares[i]>100000)
	   interest[i]=0.05*shares[i];
	else
	    interest[i]=0.03*shares[i];
	totalsavings[i]=deposit[i]+interest[10];
	printf("your interest is %2f and savings is %2f\n",interest[i],totalsavings[i]);
  }
return 0;
} 
