
#include <stdio.h>

int main(void)
{

	char s[8],t[80],st[80];
	char *p,*q,*r;
printf("Enter the two string :\n");

gets(s);
gets(t);
p=s;q=t;
r=st;

while(*p!='\0' && *q!='\0'){

	*r++=*p++;
	*r++=*q++;
}

while(*p)
*r++=*p++;

while(*q)
*r++=*q++;
*r='\0';
puts(st);

return 0;
}