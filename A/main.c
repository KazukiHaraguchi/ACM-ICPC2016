/*
 * main.c
 *
 *  Created on: 2016/07/05
 *      Author: student
 */
#include <stdio.h>

int main(void){
	int i,j,n;
	int tmp;
	int min;


	for(;;){
		scanf("%d",&n);
		//0が入力されると終了
		if (n == 0) break;

		//二人いないと差が出ない
		if(n>=2){
			min=10000000;
			int a[n];
			int b[n];

			//読み込んだ数値を配列に入れる
			for(i=0;i<n;i++){
				scanf("%d",&a[i]);
			}

			//単純にソート
			for(i=0;i<n-1;i++){
				for(j=i+1;j<n;j++){
					if(a[i]<a[j]){
						tmp=a[i];
						a[i]=a[j];
						a[j]=tmp;
					}
				}
			}

			//差の最小を求める
			min = a[0] - a[1];
			for(i=1;i<n-1;i++){
				int b = a[i] - a[i+1];
				if (b < min) {
					min = b;
				}
			}

			printf("%d\n",min);
		}

	}

}
