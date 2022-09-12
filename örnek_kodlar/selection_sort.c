#include <stdio.h>

int main(){
	
	int array[6]={65,43,2,76,3,8};
	
	int temp;
	
	
	for (int i=0;i<6;i++){
		
		int min=i;
		
		for (int j=i+1;j<6;j++){
			
			if (array[min]>array[j]){
				
				min=j;
				
			}
			
		}
		
		temp =array[min];
		array[min]=array[i];
		array[i]=temp;
		
		/* (or) //swap 
		
		temp=array[i];
		array[i]=array[min];
		array[min]=temp;

		*/
		
		
	}
for (int n=0;n<6;n++){
	
	printf("%d ",array[n]);
}		

}
