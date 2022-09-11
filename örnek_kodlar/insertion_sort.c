//Apply this algorithm to sorting the list 60, 35, 81, 98, 14, 47
#include <stdio.h>

int main(){
	
	int array[6]={60,35,81,98,14,47};
	
	int j,i,value;
	
	for ( i=1 ;i<6 ;i++ ){
		
		value = array[i];
		j=i-1;
		
		while (j>=0 && array[j]>value){
			
			array[j+1]=array[j];
			j--;
		}
		
			array[j+1]=value;
		
	}
	
	for (int a;a<6;a++){
		printf("%d\n",array[a]);
	}
	
	
	
	
}
