#include <stdio.h>
#include <string.h>

int main(void){
	int x,i;
	char str[100000];
	scanf("%d",&x);

	for(i=0;i<x+1;i++){
		if(i==0){
			gets(str);
		}else{
			gets(str);
			printf("%d\n",(int)strlen(str));
		}
	}

}
