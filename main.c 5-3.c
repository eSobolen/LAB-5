
#include <stdio.h>
#include <stdlib.h>



int main() {
	const int N =3;
	const int M =3;
	int n,m,A[N][M],s;
	printf("Vvedite matritsy s kontsa\n");
	for(n=N-1;n>=0;n--){
	
	  for(m=M-1;m>=0;m--){
	  	printf("A[%d][%d]=",n,m);
	    scanf("%d",&A[n][m]);}} 
	 for(n=0;n<N;n++){
	     printf("\n");
	  for(m=0;m<M;m++)
	  	printf("%5.d",A[n][m]);}    
	    
	
	for(n=0;n<N;n++){
		
	      s=0;
	  for(m=0;m<M;m++)
	   if(A[n][m]>0)
	   
	   s+=A[n][m];}
	   printf("\ns=%5.d\n",s);
	   printf("\n");
	  for(n=0;n<N;n++){
	     printf("\n");
	   for(m=0;m<M;m++)
	   
	  
	   printf("%5.d",A[n][m]-s); }
	   
	   
	return 0;
}
