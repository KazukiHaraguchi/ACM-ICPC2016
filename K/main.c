#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	int n,i,max_i,k=1;
	int max=0;
	int ans=0;

	scanf("%d",&n);
	while(n!=0){
		int *m;
		int *b;
		ans=0;
		m=(int *)malloc(sizeof(int)*n);
		b=(int *)malloc(sizeof(int)*n);
		for(i=0;i<n;i++){
			scanf("%d",&m[i]);
		}

		for(i=1;i<n-1;i++){
			b[i]=m[i]-m[i-1];
			if(b[i]<0){
				b[i]=abs(b[i]);
			}
		}

		while(k==1){
			max=0;
			max_i=0;
			for(i=1;i<n;i++){
				if(b[i]==0||b[i]==1){
					if(max<(m[i]+m[i-1])){
						max=m[i]+m[i-1];
						max_i=i-1;
					}
				}else{
					max=0;
				}
			}
			if(max==0){
				printf("%d\n",ans);
				k=0;
			}else{
				for(i=max_i;i<n-2;i++){
					m[i]=m[i+2];
				}
				ans+=2;
			}
		}
		scanf("%d",&n);
	}

}
