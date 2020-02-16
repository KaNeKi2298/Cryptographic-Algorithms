#include<stdio.h>


int main(){
 int p,q,r,s,w,h;
 int n;
 scanf("%d",&n);

 int prcl[2][2];

 for(int i=0;i<2;i++)
 	for(int j=0;j<2;j++)
 		 scanf("%d",&prcl[i][j]);

  if(prcl[0][0]>prcl[1][0]){
  	 p=n/prcl[1][1];
  	 r=prcl[1][1];
  	 w=prcl[1][0];
  	 q=n/prcl[0][1];
  	 s=prcl[0][1];
  	 h=prcl[0][0];
  }
  else{
  	p=n/prcl[0][1];
  	r=prcl[0][1];
  	w=prcl[0][0];
  	 q=n/prcl[1][1];
  	 s=prcl[1][1];
  	 h=prcl[1][0];
  } 	
int cost=1000000;  
int x=0;
int y=0;
  for(int i=p;i>=0;i--)
  	for(int j=q;j>=0;j--){
        
        if(i*r+j*s==n && (i*w+j*h)<cost){
         if(p==n/prcl[0][1]){
           x=i;
           y=j;     
         }
         else{
           x=j;
           y=i;     
         }
        cost= i*w+j*h;
        }

  
}

if(cost==1000000)
printf("failure");
else
 printf("%d %d",x,y);


}