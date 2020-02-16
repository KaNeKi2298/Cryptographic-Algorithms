#include<bits/stdc++.h>
using namespace std;
string fix;
void xorit(string dummy){
   int x=dummy.length();
   if(x<=16){
 
   	for(int i=0;i<(16-x);i++)
   		 dummy='0'+dummy;
   }
 
   for(int i=0;i<16;i++)
   	if(fix[i]==dummy[i])
   		fix[i]='0';
   	else
   		fix[i]='1';
 
 
}
int main(){
  fix="0000000000000000";
  string pl1,pl2,mod;
  
  cin>>pl1>>pl2>>mod;
 
  for(int i=0;i<pl2.length();i++){
       string dummy=pl1;
 
       if(pl2[i]!='0'){
              //shifting 
       	     for(int j=0;j<pl2.length()-i-1;j++)
       	     	dummy=dummy+'0';
       	     //xoring	
       	    xorit(dummy);	
       }
       
}
int len=0;
 
for(int i=0;i<16;i++)
  if(fix[i]=='1'){
     len=16-i;
     break;
  }
 if(len<mod.length()){
    if(len==0)
      cout<<'0';
      else{
          for(int i=16-len;i<16;i++)
            cout<<fix[i];
          }
   return 0;        
 }
      
 if(len==mod.length()){
     
     xorit(mod);
     len=0;
     for(int i=0;i<16;i++)
         if(fix[i]=='1'){
           len=16-i;
             break;
       }
       
       if(len==0)
      cout<<'0';
      else{
          for(int i=16-len;i<16;i++)
            cout<<fix[i];
          }
  return 0;   
 }
 
 while(len>mod.length()){
     int shift=len-mod.length();
     string dummy=mod;
     for(int i=0;i<shift;i++)
       dummy=dummy+'0';
     
     xorit(dummy);
     len=0;
     for(int i=0;i<16;i++)
         if(fix[i]=='1'){
           len=16-i;
             break;
       }
       
       if(len==mod.length()){
     
       xorit(mod);
       len=0;
     for(int i=0;i<16;i++)
         if(fix[i]=='1'){
           len=16-i;
             break;
       }
       if(len==0)
      cout<<'0';
      else{
          for(int i=16-len;i<16;i++)
            cout<<fix[i];
          }
   return 0;  
 }
 
  }
  len=0;
 for(int i=0;i<16;i++)
         if(fix[i]=='1'){
           len=16-i;
             break;
       }
       if(len==0)
      cout<<'0';
      else{
          for(int i=16-len;i<16;i++)
            cout<<fix[i];
          } 
 
 return 0;
 
 
 
 
}