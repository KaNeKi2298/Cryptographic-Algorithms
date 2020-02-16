#include<stdio.h>
#include<string.h>
int k=0;
int w;
void additto(int a[],int x){

  int y[4];

  for(int i=0;i<4;i++){
  	 y[i]=x%2;
  	 x=x/2;
}

 for(int i=3;i>=0;i--)
    a[w++]=y[i];
   

}
void printit(char a[]){
 
 for(int i=0;i<=44;i=i+4){
 	int sum=8*(a[i]-48) + 4*(a[i+1]-48) + 2*(a[i+2]-48)+ 1*(a[i+3]-48);

    if(sum==10)
    	printf("A");
    else if(sum==11)
    	printf("B");
    else if(sum==12)
    	printf("C");
    else if(sum==13)
    	printf("D");
    else if(sum==14)
    	printf("E");
    else if(sum==15)
    	printf("F");
    else
    	printf("%d",sum);
}

printf("\n");
}
void printit2(int a[]){
 
 for(int i=0;i<=28;i=i+4){
 	int sum=8*(a[i]) + 4*(a[i+1]) + 2*(a[i+2])+ 1*(a[i+3]);

    if(sum==10)
    	printf("A");
    else if(sum==11)
    	printf("B");
    else if(sum==12)
    	printf("C");
    else if(sum==13)
    	printf("D");
    else if(sum==14)
    	printf("E");
    else if(sum==15)
    	printf("F");
    else
    	printf("%d",sum);
}

}
void printit3(char a[]){
 
 for(int i=0;i<=28;i=i+4){
 	int sum=8*(a[i]-48) + 4*(a[i+1]-48) + 2*(a[i+2]-48)+ 1*(a[i+3]-48);

    if(sum==10)
    	printf("A");
    else if(sum==11)
    	printf("B");
    else if(sum==12)
    	printf("C");
    else if(sum==13)
    	printf("D");
    else if(sum==14)
    	printf("E");
    else if(sum==15)
    	printf("F");
    else
    	printf("%d",sum);
}

}
void addit(char a[],char b[]){

  for(int i=0;i<4;i++)
  	 a[k++]=b[i];

}
int ptb[70];

void shift(char a[]){

 char x=a[0];

 for(int i=0;i<=26;i++)
 	a[i]=a[i+1];
 a[27]=x;

 x=a[28];

 for(int i=28;i<=54;i++)
 	 a[i]=a[i+1];

 a[55]=x; 	


}
int main(){
 int IP[64] = {
    58, 50, 42, 34, 26, 18, 10,  2,
    60, 52, 44, 36, 28, 20, 12,  4,
    62, 54, 46, 38, 30, 22, 14,  6,
    64, 56, 48, 40, 32, 24, 16,  8,
    57, 49, 41, 33, 25, 17,  9,  1,
    59, 51, 43, 35, 27, 19, 11,  3,
    61, 53, 45, 37, 29, 21, 13,  5,
    63, 55, 47, 39, 31, 23, 15,  7};
 
  int Expansion[48] = {
    32,  1,  2,  3,  4,  5,  4,  5,
     6,  7,  8,  9,  8,  9, 10, 11,
    12, 13, 12, 13, 14, 15, 16, 17,
    16, 17, 18, 19, 20, 21, 20, 21,
    22, 23, 24, 25, 24, 25, 26, 27,
    28, 29, 28, 29, 30, 31, 32,  1};
 
  int SBox[8][4][16] = {
     {
     {14,  4, 13,  1,  2, 15, 11,  8,  3, 10,  6, 12,  5,  9,  0,  7},
     { 0, 15,  7,  4, 14,  2, 13,  1, 10,  6, 12, 11,  9,  5,  3,  8},
     { 4,  1, 14,  8, 13,  6,  2, 11, 15, 12,  9,  7,  3, 10,  5,  0},
     {15, 12,  8,  2,  4,  9,  1,  7,  5, 11,  3, 14, 10,  0,  6, 13},
     },
 
     {
     {15,  1,  8, 14,  6, 11,  3,  4,  9,  7,  2, 13, 12,  0,  5, 10},
     { 3, 13,  4,  7, 15,  2,  8, 14, 12,  0,  1, 10,  6,  9, 11,  5},
     { 0, 14,  7, 11, 10,  4, 13,  1,  5,  8, 12,  6,  9,  3,  2, 15},
     {13,  8, 10,  1,  3, 15,  4,  2, 11,  6,  7, 12,  0,  5, 14,  9},
     },
 
     {
     {10,  0,  9, 14,  6,  3, 15,  5,  1, 13, 12,  7, 11,  4,  2,  8},
     {13,  7,  0,  9,  3,  4,  6, 10,  2,  8,  5, 14, 12, 11, 15,  1},
     {13,  6,  4,  9,  8, 15,  3,  0, 11,  1,  2, 12,  5, 10, 14,  7},
     { 1, 10, 13,  0,  6,  9,  8,  7,  4, 15, 14,  3, 11,  5,  2, 12},
     },
 
     {
     { 7, 13, 14,  3,  0,  6,  9, 10,  1,  2,  8,  5, 11, 12,  4, 15},
     {13,  8, 11,  5,  6, 15,  0,  3,  4,  7,  2, 12,  1, 10, 14,  9},
     {10,  6,  9,  0, 12, 11,  7, 13, 15,  1,  3, 14,  5,  2,  8,  4},
     { 3, 15,  0,  6, 10,  1, 13,  8,  9,  4,  5, 11, 12,  7,  2, 14},
     },
 
     {
     { 2, 12,  4,  1,  7, 10, 11,  6,  8,  5,  3, 15, 13,  0, 14,  9},
     {14, 11,  2, 12,  4,  7, 13,  1,  5,  0, 15, 10,  3,  9,  8,  6},
     { 4,  2,  1, 11, 10, 13,  7,  8, 15,  9, 12,  5,  6,  3,  0, 14},
     {11,  8, 12,  7,  1, 14,  2, 13,  6, 15,  0,  9, 10,  4,  5,  3},
     },
 
     {
     {12,  1, 10, 15,  9,  2,  6,  8,  0, 13,  3,  4, 14,  7,  5, 11},
     {10, 15,  4,  2,  7, 12,  9,  5,  6,  1, 13, 14,  0, 11,  3,  8},
     { 9, 14, 15,  5,  2,  8, 12,  3,  7,  0,  4, 10,  1, 13, 11,  6},
     { 4,  3,  2, 12,  9,  5, 15, 10, 11, 14,  1,  7,  6,  0,  8, 13},
     },
 
     {
     { 4, 11,  2, 14, 15,  0,  8, 13,  3, 12,  9,  7,  5, 10,  6,  1},
     {13,  0, 11,  7,  4,  9,  1, 10, 14,  3,  5, 12,  2, 15,  8,  6},
     { 1,  4, 11, 13, 12,  3,  7, 14, 10, 15,  6,  8,  0,  5,  9,  2},
     { 6, 11, 13,  8,  1,  4, 10,  7,  9,  5,  0, 15, 14,  2,  3, 12},
     },
 
     {
     {13,  2,  8,  4,  6, 15, 11,  1, 10,  9,  3, 14,  5,  0, 12,  7},
     { 1, 15, 13,  8, 10,  3,  7,  4, 12,  5,  6, 11,  0, 14,  9,  2},
     { 7, 11,  4,  1,  9, 12, 14,  2,  0,  6, 10, 13, 15,  3,  5,  8},
     { 2,  1, 14,  7,  4, 10,  8, 13, 15, 12,  9,  0,  3,  5,  6, 11},
     },};
 
  int PBox[32] = {
      16,  7, 20, 21, 29, 12, 28, 17,
       1, 15, 23, 26,  5, 18, 31, 10,
       2,  8, 24, 14, 32, 27,  3,  9,
      19, 13, 30,  6, 22, 11,  4, 25
  };

  char ptxt[70];
  char keyb[70];
  char key[20];
  char ptxtb[70];
  gets(ptxt);
  gets(key);

  for(int i=0;i<16;i++){
       switch(key[i]){
             case '0': addit(keyb,"0000"); break;
             case '1': addit(keyb,"0001"); break;
             case '2': addit(keyb,"0010"); break;
             case '3': addit(keyb,"0011"); break;
             case '4': addit(keyb,"0100"); break;
             case '5': addit(keyb,"0101"); break;
             case '6': addit(keyb,"0110"); break;
             case '7': addit(keyb,"0111"); break;
             case '8': addit(keyb,"1000"); break;
             case '9': addit(keyb,"1001"); break;
             case 'A': addit(keyb,"1010"); break;
             case 'B': addit(keyb,"1011"); break;
             case 'C': addit(keyb,"1100"); break;
             case 'D': addit(keyb,"1101"); break;
             case 'E': addit(keyb,"1110"); break;
             case 'F': addit(keyb,"1111"); break;
             
      }
}
k=0;
for(int i=0;i<16;i++){
       switch(ptxt[i]){
             case '0': addit(ptxtb,"0000"); break;
             case '1': addit(ptxtb,"0001"); break;
             case '2': addit(ptxtb,"0010"); break;
             case '3': addit(ptxtb,"0011"); break;
             case '4': addit(ptxtb,"0100"); break;
             case '5': addit(ptxtb,"0101"); break;
             case '6': addit(ptxtb,"0110"); break;
             case '7': addit(ptxtb,"0111"); break;
             case '8': addit(ptxtb,"1000"); break;
             case '9': addit(ptxtb,"1001"); break;
             case 'A': addit(ptxtb,"1010"); break;
             case 'B': addit(ptxtb,"1011"); break;
             case 'C': addit(ptxtb,"1100"); break;
             case 'D': addit(ptxtb,"1101"); break;
             case 'E': addit(ptxtb,"1110"); break;
             case 'F': addit(ptxtb,"1111"); break;
             
      }
}
  int PC1[56] = {
   57, 49, 41, 33, 25, 17,  9,
    1, 58, 50, 42, 34, 26, 18,
   10,  2, 59, 51, 43, 35, 27,
   19, 11,  3, 60, 52, 44, 36,
   63, 55, 47, 39, 31, 23, 15,
    7, 62, 54, 46, 38, 30, 22,
   14,  6, 61, 53, 45, 37, 29,
   21, 13,  5, 28, 20, 12,  4
  };
 
  int PC2[48] = {
    14, 17, 11, 24,  1,  5,
    3, 28, 15,  6, 21, 10,
    23, 19, 12,  4, 26,  8,
    16,  7, 27, 20, 13,  2,
    41, 52, 31, 37, 47, 55,
    30, 40, 51, 45, 33, 48,
    44, 49, 39, 56, 34, 53,
    46, 42, 50, 36, 29, 32
  };
  
  int shift1[16]={1,1,2,2,2,2,2,2,1,2,2,2,2,2,2,1};

  char keyb2[64];
  char keyf[48];

  for(int i=0;i<56;i++)
  	 keyb2[i]=keyb[PC1[i]-1];
  
  for(int i=0;i<16;i++){
   	
   for(int j=0;j<shift1[i];j++)
   shift(keyb2);

   char keyb3[48];

   for(int j=0;j<48;j++){
   	 keyb3[j]=keyb2[PC2[j]-1];
   }

   printit(keyb3);

   if(i==0){
       for(int j=0;j<48;j++)
       	   keyf[j]=keyb3[j];
   }
}


char part1[32];
char part2[32];

for(int i=0;i<64;i++){
	if(i<32)
		part1[i]=ptxtb[IP[i]-1];
	else
		part2[i-32]=ptxtb[IP[i]-1];
}


char part2e[48];

for(int i=0;i<48;i++)
	 part2e[i]=part2[Expansion[i]-1];


char xor[48];

for(int i=0;i<48;i++)
   if(part2e[i]==keyf[i])
   	   xor[i]='0';
   	else
   		xor[i]='1';


int dif[32];
int cnt=0;
  for(int i=0;i<43;i=i+6){
     
   int row=2*(xor[i]-48)+(xor[i+5]-48);
   int col= 8*(xor[i+1]-48) + 4*(xor[i+2]-48) + 2*(xor[i+3]-48)+ 1*(xor[i+4]-48);
   int x;
   x=SBox[cnt++][row][col];
   additto(dif,x);

} 
int finally[32];
for(int i=0;i<32;i++)
   finally[i]=dif[PBox[i]-1];

for(int i=0;i<32;i++)
	if((part1[i]=='0' && finally[i]==0) ||(part1[i]=='1' && finally[i]==1))
		finally[i]=0;
	else
		finally[i]=1;



printit3(part2);
printit2(finally);

}