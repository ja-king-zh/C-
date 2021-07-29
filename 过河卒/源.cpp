#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a[100][100], xm, ym, xb, yb, i, j;
	scanf("%d %d %d %d", &xb, &yb, &xm, &ym);
	for (int i = 0;i < 100;i++) {
		for (int j = 0;j < 100;j++) {
			a[i][j] = 1;
		}
		j = 0;
	}
	if(xm>=0&&ym>=0)
		a[xm][ym] = 0;
	if(xm-2>=0&&ym-1>=0)
		a[xm - 2][ym - 1] = 0;
	if(xm-2>=0&&ym+1>0)
		a[xm - 2][ym + 1] = 0;
	if(ym-1>=0&&xm+2>0)
		a[xm + 2][ym - 1] = 0;
	if(xm+2>0&&ym+1>0)
		a[xm + 2][ym + 1] = 0;
	if(xm-1>=0&&ym-2>=0)
		a[xm - 1][ym - 2] = 0;
	if(xm-1>=0&&ym+2>0)
		a[xm - 1][ym + 2] = 0;
	if(ym-1>=0&&xm+1>0)
		a[xm + 1][ym - 2] = 0;
	if(xm+1>0&&ym+2>0)
		a[xm + 1][ym + 2] = 0;
	for (i = 0;i < xb+1;i++) {
		for (j = 0;j < yb+1;j++) {
			if (i == 0) {
				if(a[i][j + 1]!=0)
					a[i][j + 1] = a[i][j];
			}
			if (j == 0) {
				if(a[i + 1][j]!=0)
					a[i + 1][j] = a[i][j];
			}
			if (i != 0 && j != 0) {
				if(a[i][j]!=0)
					a[i][j] = a[i - 1][j] + a[i][j - 1];
			}
		}
	}
	printf("%d", a[xb][yb]);
	return 0;
}