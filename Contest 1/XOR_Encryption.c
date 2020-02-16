#include<stdio.h>
#include<string.h>

int main(){

   char msg[1000];
   gets(msg);
   char ans[1000];
   
   int l=strlen(msg);

   for(int i=0;i<l;i++){
   	   if(msg[i]>=97 && msg[i]<=102)
   	   	  msg[i]=msg[i]-87;

   	   	if(msg[i]>=48 && msg[i]<=57)
   	   		msg[i]=msg[i]-48;
   }
  char x;
  char y;
  int h=0;

   for(int i=l-1;i>(l/2)-1;i--){
     if(i==l-1){
     	x=msg[i];
     	y=msg[i];
     	if(y>=10 && y<=15)
   	   	  y=y+87;

   	   	if(y>=0 && y<=9)
   	   		y=y+48;
   	   	ans[h++]=y;
     	
     }
     else{
     	y=x^msg[i];
     	x=x^y;
     	if(y>=10 && y<=15)
   	   	  y=y+87;

   	   	if(y>=0 && y<=9)
   	   		y=y+48;
     ans[h++]=y;
     }

 

   }


   for(int i=h-1;i>=0;i--)
   	  printf("%c",ans[i]);





}