#include<stdio.h>

main(){
char s[80],t;
int i,j,len=0;
printf("Enter a sentance : ");
gets(s);

while(s[len]!='\0')
len++;

for(j=0,i=len-1;j<len/2;i--,j++){
	t=s[i];
	s[i]=s[j];
	s[j]=t;
	}

puts(s);

return 0;


}