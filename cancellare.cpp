//HANOI CON GRAFICA
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
int stampa(char T[][10],int A[],int B[],int C[],int dischi,int di);
int sposta(int a, int b[],int d);
int individua(int a[],int dischi);
int hanoi(char T[][10],int A[],int B[],int C[],int dischi,int di);
int disegno(char T[][10],int A[],int B[],int C[],int dischi);
int controllohanoi(char T[][10],int A[],int B[],int C[],int d,int dischi);

int main(){
char T[59][10];
int dischi=0;
scanf("%d",&dischi);
int *A;
A=(int *)malloc(sizeof(int)*dischi);
int *B;
B=(int *)malloc(sizeof(int)*dischi);
int *C;
C=(int *)malloc(sizeof(int)*dischi);
int i,pos,j;

//SCAFFA NUMERI NEGLI ARRAY
for(i=0;i<dischi;i++){
A[i]=i+1;
B[i]=C[i]=0;
}
//STAMPA
printf("\n\n");
disegno(T,A,B,C,dischi);
//SPOSTIAMO
controllohanoi(T,A,B,C,dischi,dischi);

return(0);
}


int sposta(int a, int b[],int d){
int i,n;
n=-1;
for(i=d-1;i>-1&&n!=0;i--){
n=b[i];}
i++;
b[i]=a;
return(0);
}


int stampa(char T[][10],int A[],int B[],int C[],int dischi,int di){
int i;
int *APP;
APP=(int *)malloc(sizeof(int)*dischi);
for(i=0;i<dischi;i++){
printf("%d  %d  %d\n",A[i],B[i],C[i]);
}
printf("\n\n");
disegno(T,A,B,C,dischi);
return(0);

}

int individua(int a[],int dischi){
int i,n;
for(i=0,n=0;i<dischi&&n==0;i++){	
n=a[i];	
}
i--;
return(i);
}

int hanoi(char T[][10],int A[],int B[],int C[],int dischi,int di){
int pos;
int *APP;
APP=(int *)malloc(sizeof(int)*dischi);
if((di%2)==0)
	{
		for(int i=dischi;i!=0;i--){
			APP[i]=B[i];
			B[i]=C[i];
			C[i]=APP[i];
		}
	}

pos=individua(A,dischi);
sposta(A[pos],C,dischi);
A[pos]=0;
if((di%2)==0)
	{
		for(int i=dischi;i!=0;i--){
			APP[i]=B[i];
			B[i]=C[i];
			C[i]=APP[i];
		}
	}
stampa(T,A,B,C,dischi,di);


if((di%2)==0)
	{
		for(int i=dischi;i!=0;i--){
			APP[i]=B[i];
			B[i]=C[i];
			C[i]=APP[i];
		}
	}
pos=individua(A,dischi);
sposta(A[pos],B,dischi);
A[pos]=0;
if((di%2)==0)
	{
		for(int i=dischi;i!=0;i--){
			APP[i]=B[i];
			B[i]=C[i];
			C[i]=APP[i];
		}
	}
stampa(T,A,B,C,dischi,di);


if((di%2)==0)
	{
		for(int i=dischi;i!=0;i--){
			APP[i]=B[i];
			B[i]=C[i];
			C[i]=APP[i];
		}
	}
pos=individua(C,dischi);
sposta(C[pos],B,dischi);
C[pos]=0;
if((di%2)==0)
	{
		for(int i=dischi;i!=0;i--){
			APP[i]=B[i];
			B[i]=C[i];
			C[i]=APP[i];
		}
	}
stampa(T,A,B,C,dischi,di);


if((di%2)==0)
	{
		for(int i=dischi;i!=0;i--){
			APP[i]=B[i];
			B[i]=C[i];
			C[i]=APP[i];
		}
	}
pos=individua(A,dischi);
sposta(A[pos],C,dischi);
A[pos]=0;
if((di%2)==0)
	{
		for(int i=dischi;i!=0;i--){
			APP[i]=B[i];
			B[i]=C[i];
			C[i]=APP[i];
		}
	}
stampa(T,A,B,C,dischi,di);


if((di%2)==0)
	{
		for(int i=dischi;i!=0;i--){
			APP[i]=B[i];
			B[i]=C[i];
			C[i]=APP[i];
		}
	}
pos=individua(B,dischi);
sposta(B[pos],A,dischi);
B[pos]=0;
if((di%2)==0)
	{
		for(int i=dischi;i!=0;i--){
			APP[i]=B[i];
			B[i]=C[i];
			C[i]=APP[i];
		}
	}
stampa(T,A,B,C,dischi,di);


if((di%2)==0)
	{
		for(int i=dischi;i!=0;i--){
			APP[i]=B[i];
			B[i]=C[i];
			C[i]=APP[i];
		}
	}
pos=individua(B,dischi);
sposta(B[pos],C,dischi);
B[pos]=0;
if((di%2)==0)
	{
		for(int i=dischi;i!=0;i--){
			APP[i]=B[i];
			B[i]=C[i];
			C[i]=APP[i];
		}
	}
stampa(T,A,B,C,dischi,di);


if((di%2)==0)
	{
		for(int i=dischi;i!=0;i--){
			APP[i]=B[i];
			B[i]=C[i];
			C[i]=APP[i];
		}
	}
pos=individua(A,dischi);
sposta(A[pos],C,dischi);
A[pos]=0;
if((di%2)==0)
	{
		for(int i=dischi;i!=0;i--){
			APP[i]=B[i];
			B[i]=C[i];
			C[i]=APP[i];
		}
	}
stampa(T,A,B,C,dischi,di);

individua(A,dischi);
if((di%2)==0)
	{
		sposta(A[pos],C,dischi);
	}
	else{
		sposta(A[pos],B,dischi);
	}

return (0);
}












int disegno(char T[][10],int A[],int B[],int C[],int dischi){
	int c,sesso,antonio,veglie;
	int grafica=0;
	if(grafica==0){
		//AZZERO LA MATRICE
	for(int i=0;i<10;i++){
		for(int l=0;l<59;l++){
			T[l][i]=' ';
		}
	}
/*	printf("Quanti cerchi vuoi? :  ");
	scanf("%d",&c);
	if(c>7||c<dischi){
		return 2;
	}*/
	int temp=c;
	int x=0,y=9;
	//RIEMPO LA BASE DELLA MATRICE
	for(int oppai=5;x!=59;x++,oppai++){
		if(oppai>4){
		
		T[x][y]=219;
		if(oppai==21){
			oppai=0;
		}}
	}
	x=0;y=9;
	//INSERISCO I PIOLI
	for(int i=0;i<9;i++){
		for(int l=0;l<59;l++){
			if(l==8||l==29||l==50){
				T[l][i]=186;
			}
		}
	}
	x=1;y=8;
	antonio=15;
/*	for(;c!=0;c--,y--,x++){
		sesso=x;
		veglie=antonio;
		for(;veglie!=0;veglie--,sesso++){
			T[sesso][y]=176;		
		}
		antonio-=2;
	}*/
	}
	//INSERISCO I CERCHI CONTROLLANDO GLI ARRAY
	for(int i=0;i<dischi;i++){
		if(A[i]==1){
			for(int contatore=7;contatore<10;contatore++){
			T[contatore][(10-dischi)+(i-1)]=176;}
			
		}else{
			if(A[i]==2){
			for(int contatore=6;contatore<11;contatore++){
			T[contatore][(10-dischi)+(i-1)]=176;}
			
		}else{
			if(A[i]==3){
			for(int contatore=5;contatore<12;contatore++){
			T[contatore][(10-dischi)+(i-1)]=176;}
			
		}
		else{
			if(A[i]==4){
			for(int contatore=4;contatore<13;contatore++){
			T[contatore][(10-dischi)+(i-1)]=176;}
			
		}
		else{
			if(A[i]==5){
			for(int contatore=3;contatore<14;contatore++){
			T[contatore][(10-dischi)+(i-1)]=176;}
			
		}
		else{
			if(A[i]==6){
			for(int contatore=2;contatore<15;contatore++){
			T[contatore][(10-dischi)+(i-1)]=176;}
			
		}
		else{
			if(A[i]==7){
			for(int contatore=1;contatore<16;contatore++){
			T[contatore][(10-dischi)+(i-1)]=176;}
			
		}
		}
		}
		}
		}
		}
		}
		if(B[i]==1){
			for(int contatore=28;contatore<31;contatore++){
			T[contatore][(10-dischi)+(i-1)]=176;}
			
		}else{
			if(B[i]==2){
			for(int contatore=27;contatore<32;contatore++){
			T[contatore][(10-dischi)+(i-1)]=176;}
			
		}else{
			if(B[i]==3){
			for(int contatore=26;contatore<33;contatore++){
			T[contatore][(10-dischi)+(i-1)]=176;}
			
		}
		else{
			if(B[i]==4){
			for(int contatore=25;contatore<34;contatore++){
			T[contatore][(10-dischi)+(i-1)]=176;}
			
		}
		else{
			if(B[i]==5){
			for(int contatore=24;contatore<35;contatore++){
			T[contatore][(10-dischi)+(i-1)]=176;}
			
		}
		else{
			if(B[i]==6){
			for(int contatore=23;contatore<36;contatore++){
			T[contatore][(10-dischi)+(i-1)]=176;}
			
		}
		else{
			if(B[i]==7){
			for(int contatore=22;contatore<37;contatore++){
			T[contatore][(10-dischi)+(i-1)]=176;}
			
		}
		}
		}
		}
		}
		}
		}
		if(C[i]==1){
			for(int contatore=49;contatore<52;contatore++){
			T[contatore][(10-dischi)+(i-1)]=176;}
			
		}else{
			if(C[i]==2){
			for(int contatore=48;contatore<53;contatore++){
			T[contatore][(10-dischi)+(i-1)]=176;}
			
		}else{
			if(C[i]==3){
			for(int contatore=47;contatore<54;contatore++){
			T[contatore][(10-dischi)+(i-1)]=176;}
			
		}
		else{
			if(C[i]==4){
			for(int contatore=46;contatore<55;contatore++){
			T[contatore][(10-dischi)+(i-1)]=176;}
			
		}
		else{
			if(C[i]==5){
			for(int contatore=45;contatore<56;contatore++){
			T[contatore][(10-dischi)+(i-1)]=176;}
			
		}
		else{
			if(C[i]==6){
			for(int contatore=44;contatore<57;contatore++){
			T[contatore][(10-dischi)+(i-1)]=176;}
			
		}
		else{
			if(C[i]==7){
			for(int contatore=43;contatore<58;contatore++){
			T[contatore][(10-dischi)+(i-1)]=176;}
			
		}
		}
		}
		}
		}
		}
		}
	}
	for(int i=0;i<10;i++){
		for(int contatore=0;contatore<59;contatore++){
			printf("%c",T[contatore][i]);
		}
		printf("\n");
	}
	system("pause");
	system("cls");
	return 0;
	}
	
int controllohanoi(char T[][10],int A[],int B[],int C[],int d,int dischi){
	for(;d!=2;d--){
		hanoi(T,A,B,C,dischi,d);
	}
}
