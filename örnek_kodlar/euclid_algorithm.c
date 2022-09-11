//question? = Find gcd(31415, 14142) by applying Euclid’s algorithm


#include <stdio.h>

int main(){
	
	int m=31415;
	
	int n=14142;
	
	int r;
	
	while(n!=0)
	{
		
		r=m%n;
		
		m=n;
		
		n=r;
			
		
		
	}
	printf("%d",m);
	
	
	
}
