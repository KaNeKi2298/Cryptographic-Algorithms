#include<stdio.h>
#include<string.h>
int x1,y1,x2,y2;
int present(char a[],int h,char b){

	for(int i=0;i<h;i++)
		if(a[i]==b)
			return -1;
	return 1;	
}
int present2(char a,char b,char keyf[][6]){
  
   for(int i=0;i<6;i++)
   	  for(int j=0;j<6;j++){
         if(keyf[i][j]==a){
         	 x1=i;
         	  y1=j;}
         if(keyf[i][j]==b){
         	x2=i;
         	y2=j;
          	  }
         }

   if(x1==x2)
   	  return 1;
   	if(y1==y2)
   		return -1;
   	else
   		return 0;
}

int main(){
     char msg3[1000];

	char msg1[1000];

	gets(msg1);

	char msg2[1000];
    int h;
    h=0;

	for(int i=0;i<strlen(msg1);i++)
		if(msg1[i]!=' ')
			if(msg1[i]>=97 && msg1[i]<=122)
			    msg2[h++]=msg1[i]-32;
			else
			msg2[h++]=msg1[i];

    int issue=h;		

	char key[1000];

	gets(key);

	char msg[36];
	char keyf[6][6];

	char key2[1000];
	h=0;
    int len=0;
	for(int i=0;i<strlen(key);i++)
		if(key[i]!=' '){
			if(key[i]>=97 && key[i]<=122)
				key2[h++]=key[i]-32;
			else
			key2[h++]=key[i];
		}

   for(int i=0;i<h;i++)
   	   if(present(msg,len,key2[i])==1)
   	   	   msg[len++]=key2[i];


   	for(int i=48;i<58;i++){
   		if(present(msg,len,i)==1)
   			msg[len++]=i;
   	}

   	
   for(int i=65;i<91;i++){
   		if(present(msg,len,i)==1)
   			msg[len++]=i;
   	}

  h=0;

  for(int i=0;i<6;i++)
  	 for(int j=0;j<6;j++)
  	 	  keyf[i][j]=msg[h++];

  
  for(int i=0;i<issue;i=i+2){
  	if(msg2[i]==msg2[i+1]){
          for(int j=issue;j>=i+2;j--){
                msg2[j]=msg2[j-1];

          }
          issue++;
         msg2[i+1]='X';
         continue;
}
}

if(issue%2!=0){
	msg2[issue]='X';
	issue++;
}


h=0;



for(int i=0;i<issue-1;i=i+2){
    
   if(present2(msg2[i],msg2[i+1],keyf)==1){
              if(y1==5)
                msg3[h++]=keyf[x1][0];   	
   	          else
              msg3[h++]=keyf[x1][y1+1];
             if(y2==5)
                msg3[h++]=keyf[x1][0];   	
   	          else
              msg3[h++]=keyf[x1][y2+1];
   }
   if(present2(msg2[i],msg2[i+1],keyf)==-1){
   	          if(x1==5)
                msg3[h++]=keyf[0][y1];   	
   	          else
              msg3[h++]=keyf[x1+1][y1];
             if(x2==5)
                msg3[h++]=keyf[0][y1];   	
   	          else
              msg3[h++]=keyf[x2+1][y1];
   }

if(present2(msg2[i],msg2[i+1],keyf)==0){
   	          
              msg3[h++]=keyf[x1][y2];
              
              msg3[h++]=keyf[x2][y1];
   }





}


for(int i=0;i<h;i++)
	printf("%c",msg3[i]);

  






}

