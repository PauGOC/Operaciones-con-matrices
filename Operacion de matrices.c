#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	int i,j,k,n,a,temporal,suma;
	
	srand (time(NULL));
	printf("Ingrese la longitud de la matriz:\n" );
	scanf("%d", &n);
	int A [n][n], B[n][n], C[n][n];
	
	printf("Matriz A:\n");
	for (i=0;i<n; i++){
		for (j=0; j<n; j++){
			A[i][j]= rand ()%(9+1-1)+1;
			printf("  %d", A[i][j]);
		}
		printf(" \n");
	}
	
	printf("Matriz B:\n");
	for (i=0;i<n; i++){
		for (j=0; j<n; j++){
			B[i][j]= rand ()%(9+1-1)+1;
			printf("  %d", B[i][j]);
		}
		printf(" \n");
	}
	
	printf("\n\n\nIngrese que operacion desea realizar:\n");
	printf("1:Suma\n2:Resta\n3:Multiplicacion\n4:Obtener la diagonal de matriz A\n5:Obtener la diagonal de la matriz B\n6:Suma triangular superior de matriz A\n7:Suma triangular de la matriz superior B\n8:Terminar programa\n");
	scanf("%d", &a);
	
	
	switch (a){
		
		case 1:
		printf("\n1:Suma\n");
		for (i=0;i<n;i++){
		for(j=0; j<n;j++){
			temporal=0;
			for (k=0; k<n;k++){
				temporal= A[i][j]+ B [i][j];
			}
			
			C[i][j]= temporal;
			printf("    %d", C[i][j]);
		}
		
		printf("   \n");
	}
		break;
		
/////////////////////////////////////////////////////////////////////////////////		
		case 2:
		printf("\n2:Resta\n");
		for (i=0;i<n;i++){
		for(j=0; j<n;j++){
			temporal=0;
			for (k=0; k<n;k++){
				temporal= A[i][j]- B [i][j];
			}
			
			C[i][j]= temporal;
			printf("    %d", C[i][j]);
		}
		
		printf("   \n");
	}
		break;
		
//////////////////////////////////////////////////////////////////////////////		
		case 3: 
		printf("\n3:Multiplicacion\n");
		for (i=0;i<n;i++){
		for(j=0; j<n;j++){
			temporal=0;
			for (k=0; k<n;k++){
				temporal += A[i][k]* B [k][j];
			}
			
			C[i][j]= temporal;
			printf("    %d", C[i][j]);
		}
		
		printf("   \n");
	}
			
		break;
		
///////////////////////////////////////////////////////////////////////////////////////
		case 4:
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("  %d", A[i][j]);
			if(i==j)
			suma+=A[i][j];
			}
			printf("  \n");
		}
		printf("\nLa suma de la diagonal es %d", suma);
		
		break;
/////////////////////////////////////////////////////////////////////
	case 5:
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				printf("  %d", B[i][j]);
			if(i==j)
			suma+=B[i][j];
			}
			printf("  \n");
		}
		printf("\nLa suma de la diagonal es %d", suma);
	break;	

////////////////////////////////////////////////////////////////////
	case 6:
		printf("Suma del triangular superior de la matriz A:\n");
		for(i=0;i<n;i++){
			for(j=i;j<n;j++){
				printf("  %d", A[i][j]);
			suma+=A[i][j];
			}
			printf("  \n");
		}
		printf("\nLa suma del triangular superior de la matriz A es %d", suma);
	break;
	
///////////////////////////////////////////////////////////////////////
	case 7:
		printf("Suma del triangular superior de la matriz B:\n");
		for(i=0;i<n;i++){
			for(j=i;j<n;j++){
				printf("  %d", B[i][j]);
			suma+=B[i][j];
			}
			printf("  \n");
		}
		printf("\nLa suma del triangular superior de la matriz B es %d", suma);
	break;
	
	case 8:
		printf("Termino el programa");
}

	
/////////////////////////////////////////////////////////////////
	
	return 0;
} 
