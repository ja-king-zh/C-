#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<iostream>
using namespace std;
int main() {
	
	return 0;
}




//int main() {
//	int n, m, arr1[100000], arr2[100000] = { 0 }, l, r, w;
//	scanf("%d %d", &n, &m);
//	for (int i = 0;i < n;i++)
//		scanf("%d", &arr1[i]);
//	for (int i = 0;i < m;i++) {
//		scanf("%d %d %d", &l, &r, &w);
//		arr2[l-1] += w;
//		arr2[r] += -w;
//	}
//	int tmp = 0;
//	for (int i = 0;i < n;i++) {
//		tmp += arr2[i];
//		arr1[i] = arr1[i] + tmp;
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}




//
//int n, q, l, r, val, a[1000000], diff[1000000];
//int main() {
//    scanf("%d%d", &n, &q);
//    for (int i = 1; i <= n; i++)
//        scanf("%d", &a[i]);
//    for (int i = 1; i <= q; i++) {
//        scanf("%d%d%d", &l, &r, &val);
//        diff[l] += val; 
//        diff[r + 1] -= val;
//    }
//    int Min = 1000, tmp = 0;
//    for (int i = 1; i <= n; i++) {
//        tmp += diff[i];
//        if (a[i] + tmp < Min) 
//            Min = a[i] + tmp;
//    }
//    printf("%d\n", Min);
//    return 0;
//}

//int main() {
//	int n, p,arr[100000],x=0,y=0,z=0,min=1000;
//	scanf("%d %d", &n, &p);
//	for (int i = 0;i < n;i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0;i < p;i++) {
//		scanf("%d %d %d", &x, &y, &z);
//		for (int j = x;j <= y/4;j++) {
//			arr[j - 1] += z;
//		}
//		for (int j = y/4;j <= y/2 ;j++) {
//			arr[j - 1] += z;
//		}
//		for (int j = y / 4;j <= y;j++) {
//			arr[j - 1] += z;
//		}
//	}
//	for (int i = 0;i < n;i++) {
//		if (min > arr[i]) {
//			min = arr[i];
//		}
//	}
//	cout << min;
//	return 0;
//}
//
//
//
//
////อฌำเ
//int main() {
//	long long z, p, num=0,i,flag=0,j=0,a;
//	scanf("%lld %lld", &z, &p);
//	for (i = 0;i < 1000;i++) {
//		num += pow(10,i);
//		if ((num -z )%p==0) {
//			flag = 1;
//			break;
//		}
//	}
//	if (flag)
//		printf("%lld", i + 1);
//	else {
//		num = pow(z, p);
//		while (num) {
//			a = num % 10;
//			num /= 10;
//			if (a == 1)
//				j++;
//		}
//		printf("%lld", j);
//	}
//	/*int num, z=1010, p=1,j=0,a;
//	num = pow(z, p);
//	while (num) {
//		a = num % 10;
//		num /= 10;
//		if (a == 1)
//			j++;
//	}
//	cout << j;*/
//	return 0;
//}





//int main() {
//	long long n,arr1[200000],arr2[200000],c,count=0;
//	scanf("%lld", &n);
//	for (int i = 0;i < n;i++) {
//		scanf("%lld", &arr1[i]);
//	}
//	scanf("%lld", &c);
//	for (int i = 0;i < n;i++) {
//		arr2[i] = arr1[i] + c;
//	}
//	sort(arr2, arr2 + n);
//	for (int i = 0;i < n;i++) {
//		if (binary_search(arr2, arr2 + n, arr1[i]))
//			count++;
//	}
//	printf("%lld", count);
//	return 0;
//}

















//struct dis {
//    int x, y;
//}dd[1000000];
//bool cmp(dis a, dis b) {
//    return a.x < b.x;
//}
//int main() {
//    int n;
//    cin >> n;
//    for (int i = 0;i < n;i++) {
//        cin >> dd[i].x >> dd[i].y;
//    }
//    int ans = 1;
//    sort(dd, dd + n, cmp);
//    int xx = 0, yy = dd[0].y;
//    for (int i = 1;i < n;i++) {
//        if (yy > dd[i].x) {
//            yy = min(yy, dd[i].y);
//        }
//        else {
//            ans++;
//            yy = dd[i].y;
//        }
//    }
//    cout << ans << endl;
//    return 0;
//}





//int main() {
//	long long arr[1000], k1, k2,n,a[1000],b[1000],max=0;
//	scanf("%lld %lld %lld", &n,&k1,&k2);
//	long long k = k1 + k2;
//	for (int i = 0;i < n;i++) {
//		scanf("%lld", &a[i]);
//	}
//	for (int i = 0;i < n;i++) {
//		scanf("%lld", &b[i]);
//	}
//	for (int i = 0;i < n;i++) {
//		if (a[i] > b[i])
//			arr[i] = a[i] - b[i];
//		else
//			arr[i] = b[i] - a[i];
//	}
//	while (k) {
//		max = 0;
//		for (int i = 0;i < n;i++) {
//			if (arr[i] > max) {
//				max = arr[i];
//			}
//		}
//		for (int i = 0;i < n;i++) {
//			if (arr[i] == max) {
//				if (arr[i] > 0)
//					arr[i]--;
//				else
//					arr[i]++;
//				break;
//			}
//		}
//		k--;
//	}
//	long long sum = 0;
//	for (int i = 0;i < n;i++) {
//		sum += pow(arr[i], 2);
//	}
//	printf("%lld", sum);
//	return 0;
//}





//int main() {
//	int a, b, c, d, k,i,j,n;
//	scanf("%d", &n);
//	for (int m = 0;m < n;m++) {
//		scanf("%d %d %d %d %d", &a, &b, &c, &d, &k);
//		for (i = 0;c * i < a;i++) {
//			;
//		}
//		for (j = 0;d * j < b;j++) {
//			;
//		}
//		if (i + j <= k) {
//			printf("%d %d\n", k-j, j);
//		}
//		else
//			printf("-1\n");
//	}
//	return 0;
//}






//int panduan(char* arr) {
//	int a=0, b=0, c=0,i=0;
//	int flag = 1, count = 0;
//	while (arr[i] != 'P') {
//		a++;
//		i++;
//	}
//	i++;
//	while (arr[i] != 'T') {
//		b++;
//		i++;
//	}
//	i++;
//	while (arr[i] != '\0') {
//		c++;
//		i++;
//	}
//	if ((a * b) == c)
//		flag = 1;
//	else
//		flag = 0;
//	i = 0;
//	/*char arr1[20] = "PAT";
//	char arr2[20] = "PAAT";
//	char arr3[20] = " P T ";
//	char arr4[20] = "P AT";
//	if (strstr(arr, arr1) != NULL || strstr(arr, arr2) != NULL || strstr(arr, arr3) != NULL || strstr(arr, arr4) != NULL) {
//		flag = 1;
//	}
//	else {
//		flag = 0;
//	}*/
//	while (arr[i] != '\0') {
//		if (arr[i] != ' ' && arr[i] != 'P' && arr[i] != 'A' && arr[i] != 'T')
//			flag = 0;
//		if (arr[i] == 'T' || arr[i] == 'P')
//			count++;
//		i++;
//	}
//	if (count > 2)
//		flag = 0;
//	if (b == 0)
//		flag = 0;
//	return flag;
//}
//int main() {
//	int n,flag=1;
//	scanf("%d", &n);
//	char arr[101];
//	for (int i = 0;i < n;i++) {
//		scanf("%s", arr);
//		flag=panduan(arr);
//		if (flag)
//			printf("YES\n");
//		else
//			printf("NO\n");
//	}
//	return 0;
//}




//int main() {
//	int n, w, a[10000] = { 0 }, j, k, i = 0, count = 0, flag = 1,cao=1,cnm=1;
//	scanf("%d %d", &n, &w);
//	
//	for (i = 0;i < n;i++) {
//		scanf("%d", &a[i]);
//		
//	}
//	for (i = 0;i < n;i++) {
//		if (a[i] < 0)
//			cao = 0;
//		if (a[i] > 0)
//			cnm = 0;
//	}
//	if (cnm == 1) {
//		for (int m = 0;m < n;m++) {
//			w = w + a[m];
//		}
//		count = w + 1;
//		goto a;
//	}
//	if (cao == 1) {
//		for (int m = 0;m < n;m++) {
//			w = w - a[m];
//		}
//		count = w+1;
//		goto a;
//	}
//	if (n == 1) {
//		count = w + a[i] + 1;
//		goto a;
//	}
//	for (j = 0;j <= w;j++) {
//		flag = 1;
//		k = j;
//		for (i = 0;i < n;i++) {
//			k += a[i];
//			if (k < 0 || k>w)
//				flag = 0;
//		}
//		if (flag==1)
//			count++;
//	}
//a:
//	if (count <= 0)
//		printf("0");
//	else
//		printf("%d", count);
//	return 0;
//}


//int find() {
//	char arr[1000000];
//	int n, i = 0;
//	scanf("%d", &n);
//	scanf("%s", arr);
//	if (n == 1 && arr[0] == '0')
//		return 0;
//	if (n != 1 && arr[0] == '0' && arr[1] == '0')
//		return 0;
//	while (arr[i] != '\0') {
//		i++;
//	}
//	if (arr[i - 1] == '0' && arr[i - 2] == '0' && n != 1)
//		return 0;
//	char arr1[3] = "11";
//	char arr2[4] = "000";
//	if (strstr(arr, arr1) == NULL && strstr(arr, arr2) == NULL) {
//		return 1;
//	}
//	else
//		return 0;
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	for (int i = 0;i < n;i++) {
//		if (find()==1)
//			printf("Yes\n");
//		else
//			printf("No\n");
//	}
//	return 0;
//}