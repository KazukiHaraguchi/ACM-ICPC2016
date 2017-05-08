/*
 * main.c
 *
 *  Created on: 2016/07/12
 *      Author: student
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	int n,i;
	char ch;
	int a[26];

	while(1){
		scanf("%d",&n);

		//0が入力されると終了
		if(n==0){
			break;
		}

		//票数を入れる配列a[i]を0にする
		for(i=0;i<26;i++){
			a[i]=0;
		}

		int max=0;
		char max_ch;
		int j;
		int flag=0;

		//入力及び処理開始
		for(i=1;i<n+1;i++){
			ch=getchar();
			scanf("%c",&ch);
			a[ch-'A']++;
			if(a[ch-'A']>max){
				max=a[ch-'A'];
				max_ch=ch;
			}

			for(j=0;j<26;j++){
				if(j!=max_ch-'A'){
					if(max<=(n-i)+a[j]){
						break;
					}
				}

				if(j==25){
					flag=1;
					printf("%c %d\n",max_ch,i);
				}
			}

			if(flag==1){
				for(j=i;j<n;j++){
					ch=getchar();
					scanf("%c",&ch);
				}
				break;
			}

		}

		if(flag==0){
			printf("TIE\n");
		}

	}
}
