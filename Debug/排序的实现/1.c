#include <stdio.h>
#include <math.h>


int main() {
    int n = 10;
    int m;
    int a[10];
    int i;

    // 读入给定的数字
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

 
	int temp= 0; //中间变量
 
	//冒泡法排序实现从小到大排序
	for (int i = 0; i < 10; i++)	{
		for (int j = i + 1; j < 10; j++) {
			if (a[i] < a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
 
	for (int i = 0; i < 10; i++) {
		printf("%d ", a[i]);
	}
 	return 0;

} 

