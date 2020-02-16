#include<stdio.h>
#include<string.h>

int asc(char arr[],char a){

    for(int i=0;i<26;i++)
    	if(arr[i]==a)
    		return i;

}

int inverse(int a){

	for(int i=1;i<26;i++)
		 if((i*a)%26==1)
		 	return i;
}
int mod(int a){
   if(a>=0)
   	 return a%26;
   	else{
   		int b=-a;
   		int c=b%26;
   		return 26-c;
   	}


}


int main(){
  char arr[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  char msg[100000];
  gets(msg);

  char msg2[100000];
  int h=0;
  for(int i=0;i<strlen(msg);i++)
  	 if(msg[i]!=' ')
			if(msg[i]>=97 && msg[i]<=122)
			    msg2[h++]=msg[i]-32;
			else
			msg2[h++]=msg[i];

  int l=h;

  char known[100000];
  gets(known);

  int part[2][2];
  int part2[2][2];

  part[0][0]=4;
  part[0][1]=19;
  part[1][0]=19;
  part[1][1]=19;

  char known2[100000];
   h=0; 
  for(int i=0;i<5;i++)
     if(known[i]!=' ')
        if(known[i]>=97 && known[i]<=122)
			    known2[h++]=known[i]-32;
			else
			known2[h++]=known[i];
     
  h=0;
  for(int i=0;i<2;i++)
    for(int j=0;j<2;j++)
        part2[i][j]=asc(arr,known2[h++]);




   int mul[2][2]={0};

   for(int i=0;i<2;i++)
   	 for(int j=0;j<2;j++){
   	 	 for(int k=0;k<2;k++){
   	 	 	mul[i][j]+=part[i][k]*part2[k][j];
   	 	 }
   	 }

   	 for(int i=0;i<2;i++)
    for(int j=0;j<2;j++)
        mul[i][j]=mod(mul[i][j]);

    

    if(l%2!=0){
    	msg2[l]='Z';
    	l++;
    }

    int det=mul[0][0]*mul[1][1]-mul[0][1]*mul[1][0];
    det=mod(det);
    det=inverse(det);
    

    mul[0][1]=-mul[0][1];
    mul[1][0]=-mul[1][0];
    int a=mul[0][0];
    mul[0][0]=mul[1][1];
    mul[1][1]=a;

    for(int i=0;i<2;i++)
    	for(int j=0;j<2;j++)
    		mul[i][j]=mod(mul[i][j]);

    
   for(int i=0;i<2;i++)
    	for(int j=0;j<2;j++)
    		mul[i][j]=mod(det*mul[i][j]);

   
    	
    	

for(int i=0;i<l-1;i=i+2){
     
      int temp[1][2];
      temp[0][0]=asc(arr,msg2[i]);
      temp[0][1]=asc(arr,msg2[i+1]);
      int temp2[1][2]={0};

     for(int j=0;j<1;j++)
   	 for(int k=0;k<2;k++){
   	 	 for(int l=0;l<2;l++){
   	 	 	temp2[j][k]+=temp[j][l]*mul[l][k];
   	 	 }
   	 }

     for(int j=0;j<1;j++)
    for(int k=0;k<2;k++)
        temp2[j][k]=mod(temp2[j][k]);

    for(int j=0;j<1;j++)
    for(int k=0;k<2;k++)
        printf("%c",arr[temp2[j][k]]);


   }




}