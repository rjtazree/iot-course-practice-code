#include<stdio.h>

main(){

	char s[100],t[100];

	int count[26],i,position,f;

	printf("Enter the string  ");
	gets(s);
	gets(t);

	for(i=0;i<26;i++){
	count[i]=0;

	for(i=0;s[i];i++){
		position=s[i]-'a';

		count[position]++;

	}

	for(i=0;i<26;i++){

		if(count[i]!=0){
			f=1;
			break;

			}
		}

	if(f==1)
	printf("the strings aren't anagram ");
	else
	printf("the strings are anagrams ");	

return 0;

}