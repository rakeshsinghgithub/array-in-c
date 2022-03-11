//Find greatest number in 5 into 5 Matrix arrays in C
#include<stdio.h>
int main(){
	 int a[5][5],i,j,k,A,B,C,D,E;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
	}
     for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			for(k=j+1;k<5;k++){
				if(a[i][j]>a[i][k]){
					if(i=0)
					A=a[i][j];
					if(i=1)
					B=a[i][j];
					if(i=2)
					C=a[i][j];
					if(i=3)
					D=a[i][j];
					if(i=4)
					E=a[i][j];
					
	
				}
				break;
			}
			
		}
	}
     if(A>B&&A>C&&A>D&&A>E)
	printf("Greatest number in array is %d",A);
	if(A<B&&B>C&&B>D&&B>E)
	printf("Greatest number in array is %d",B);  
	if(C>B&&A<C&&C>D&&C>E)
	printf("Greatest number in array is %d",C);  
	if(D>B&&D>C&&A<D&&D>E)
	printf("Greatest number in array is %d",D);  
	if(E>B&&E>C&&E>D&&A<E)
	printf("Greatest number in array is %d",E);    
	
	return 0;
}
