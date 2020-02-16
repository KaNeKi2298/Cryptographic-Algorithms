

#include<stdio.h>
#include<string.h>

int main(){
	char msg[1000];
	gets(msg);

	char key[1000];
	gets(key);
   int t;
   scanf("%d",&t);

   
   int l2=strlen(key);
   int l1=0;
   for(int i=0;i<strlen(msg);i++)
   	 if(msg[i]!=' ')
   	 	 l1++;
   int rows;
   int r=l1%l2;
   
   if(r==0)
     rows=l1/l2;
   else{
   r=l2-r;
   	 rows=(l1/l2) +1;}
   int y=strlen(msg);

   

   for(int i=y;i<y+r;i++){
   	   msg[i]='*';
   }

   

  char msg1[1000][1000];

  int h=0;

  for(int i=0;i<rows;i++)
  	 for(int j=0;j<l2;j++)
  	 	if(msg[h]!=' '){

  	 		msg1[i][j]=msg[h++];

  	 	}
  	 	else{
  	 		h++;
  	 		j--;
  	 	}

 
int place[l2];
int u=0;

	for(int i=0;i<l2;i++){
           int max=0;
		for(int j=0;j<l2;j++)
			if(key[j]!='*')
				 max=j;

	    for(int j=0;j<l2;j++)
	       if(key[j]!='*' && key[j]<key[max])
	          max=j;

	    key[max]='*';
        place[u++]=max;
	          		
	}

while(t+1){
   int q=0;
	for(int i=0;i<u;i++)
		for(int j=0;j<rows;j++)
		msg[q++]=msg1[j][place[i]];
     
     if(t+1==1)
     	for(int i=0;i<rows;i++)
     		for(int j=0;j<l2;j++)
     			printf("%c",msg1[i][j]);
	
      h=0;
    for(int i=0;i<rows;i++)
  	 for(int j=0;j<l2;j++)
           msg1[i][j]=msg[h++];

  t--;
} 	


	





}