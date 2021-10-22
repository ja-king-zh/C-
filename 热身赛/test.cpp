#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<utility>
#include<math.h>
int main() {
	int t,count=0;
	scanf("%d", &t);
	while (t--) {
		char arr[15][15] = { 0 }, dst[10010] = { 0 };
		int a,i=0;
		count = 0;
		scanf("%d", &a);
		while (a--) {
			scanf("%s", arr[i]);
			i++;
		}
		scanf("%s", dst);
		int j = 0;
		for (;j < i;j++) {
			int k = 0,c=0,d;
			d = c;
			while (dst[c] != '\0') {
				if (arr[j][k] == dst[c]) {
					k++;
					c++;
				}
				else {
					c++;
					d = c;
					k = 0;
				}
				if (arr[j][k] == '\0') {
					k = 0;
					count++;
					if (dst[c] == '\0')
						break;
					c = d + 1;
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}



//
//typedef long long ll;
//using namespace std;
//const int N = 1e5;
//
//
//
//int main()
//{
//	long long t;
//	int c[N];
//	long long num = 0;
//	int cnt = 0;
//	scanf("%lld", &t);
//	
//
//	while (t--)
//	{
//		cnt = 0;
//		scanf("%lld", &num);
//	    for (int i = 0;i <= num;i++)
//			c[i] = i;
//		for(int i=0;i<=sqrt(num);i++)
//			for (int j = sqrt(num);j >= 0;j--)
//			{
//				if (i * j == num - c[i])
//					cnt++;
//			}
//		cout << cnt << endl;
//	}
//
//	return 0;
//}



//int main() {
//	int t;
//	long long a, b, c;
//	cin >> t;
//	while (t--) {
//		scanf("%lld%lld%lld", &a, &b, &c);
//		printf("%lld", a + b + c);
//	}
//}