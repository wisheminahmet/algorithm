#include<stdio.h>

int main() {
	//2,5,5
	int array1[4]={2,5,5,5};
	int array2[6]={2,2,3,5,5,7};
	int deger;
	
	
	for (int i=0;i<4;i++)
	{
		deger=array1[i];
		
		for (int j=i;j<6;j++)
		{
			
			if (deger==array2[j])
			{
				printf("%d\n",deger);
				
				break;
				
			}
				
		}
		
	}
	
}



