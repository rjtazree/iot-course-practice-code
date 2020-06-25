
    #include <stdio.h>

    int main(void) {
    	// your code goes here
    	int n,i,sum=0;
    	n=28;
    	for(i=1;i<n;i++){
    		if(n%i==0)
    		sum=sum+i;

    	}

    	if(sum==n)
    	printf("%d perfect number",sum);

    	else
    	printf("%d not perfect number",sum);






    	return 0;
    }
