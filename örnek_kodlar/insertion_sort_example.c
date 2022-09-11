/*Design an algorithm to find all the common elements in two sorted lists of
numbers. For example, for the lists 2, 5, 5, 5 and 2, 2, 3, 5, 5, 7, the output
should be 2, 5, 5.What is the maximum number of comparisons your algorithm
makes if the lengths of the two given lists are m and n, respectively?
#include<stdio.h>*/

int main() {
	
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



