#include<stdio.h>

main(){

	int c=0;
	char ch,s[100];

	printf("input a string : ");
	gets(s);

	while(s[c]!='\0'){

		ch=s[c];
		if(ch>='A' && ch<='Z')

			s[c]=s[c]+32;
		else if(ch>='a' && ch<='z')

			s[c]=s[c]-32;
		c++;
	}

	printf("%s\n",s);
	

return 0;

}