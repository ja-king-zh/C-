#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stack>
#include<cstring>
#include<algorithm>
using namespace std;

//≤Â»Î≈≈–Ú
void InsertSort(int* a, int n) {
	for (int i = 0;i < n-1;++i) {
		int end = i;
		int x = a[end + 1];
		while (end >= 0) {
			if (a[end] > x) {
				a[end + 1] = a[end];
				end--;
			}
			else {
				break;
			}
		}
		a[end + 1] = x;
	}
}
//œ£∂˚≈≈–Ú
void ShellSort(int* a, int n) {
	int gap = n;
	while (gap > 1) {
		gap = gap / 3 + 1;
		for (int i = 0;i < n - gap;i++) {
			int end = i;
			int x = a[end + gap];
			while (end >= 0) {
				if (a[end] > x) {
					a[end + gap] = a[end];
					end -= gap;
				}
				else {
					break;
				}
			}
			a[end+gap] = x;
		}
	}
}
void Swap(int* x, int* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
//—°‘Ò≈≈–Ú
void SelectSort(int* a, int n) {
	int begin = 0, end = n - 1;
	while (begin < end) {
		int mini = begin, maxi = begin;
		for (int i = begin;i <= end;i++) {
			if (a[i] < a[mini])
				mini = i;
			if (a[i] > a[maxi])
				maxi = i;
		}
		Swap(&a[begin], &a[mini]);
		if (maxi == begin)
			maxi = mini;
		Swap(&a[end], &a[maxi]);
		begin++;
		end--;
	}
}
//∂—≈≈–Ú
void AdjustDown(int *&a, int n ,int parent) {
	int child = 2 * parent + 1;
	while (child < n) {
		if (child + 1 < n && a[child + 1] > a[child]) {
			child++;
		}
		if (a[parent] < a[child]) {
			swap(a[parent], a[child]);
			parent = child;
			child = 2 * parent + 1;
		}
		else {
			break;
		}
	}
}
void HeapSort(int* a, int n) {
	for (int i = (n - 2) / 2;i >= 0;i--) {
		AdjustDown(a, n, i);
	}
	int sz = n-1;
	while(sz>0) {
		swap(a[0], a[sz]);
		AdjustDown(a, sz, 0);
		sz--;
	}
}
//√∞≈›≈≈–Ú
void BubbleSort(int* a, int n) {
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n - i - 1;j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
}
//øÏÀŸ≈≈–Ú
int get(int* a, int l, int r) {
	int mid = (l + r) / 2;
	if (a[mid] > a[l]) {
		if (a[mid] < a[r]) {
			return mid;
		}
		else if (a[l] > a[r]) {
			return l;
		}
		else {
			return r;
		}
	}
	else {
		if (a[mid] > a[r]) {
			return mid;
		}
		else if (a[l] < a[r]) {
			return l;
		}
		else {
			return r;
		}
	}
}
//÷∏’Î∑®
void partion3(int* a, int l, int r) {
	if (l >= r)return;
	int tmp = get(a, l, r);
	swap(a[tmp], a[l]);
	tmp = l;
	int cur = l + 1;
	int prve = l;
	while (cur <= r) {
		if (a[cur] >= a[tmp])
			cur++;
		else {
			prve++;
			swap(a[cur], a[prve]);
			cur++;
		}
	}
	swap(a[prve], a[tmp]);
	partion3(a,l, prve - 1);
	partion3(a, prve + 1, r);
}
//
void partion2(int* a, int l, int r) {
	if (l >= r)return;
	int tmp = get(a, l, r);
	swap(a[tmp], a[l]);
	tmp = l;
	int x = a[tmp];
	int left = l;
	int right = r;
	while (l < r) {
		while (l < r && a[r] >= x)r--;
		swap(a[r], a[tmp]);
		tmp = r;
		while (l < r && a[l] <= x)l++;
		swap(a[l], a[tmp]);
		tmp = l;
	}
	a[tmp] = x;
	partion2(a, left, l - 1);
	partion2(a, l + 1, right);

}
void partion1(int* a, int l, int r) {

	if (l >= r)return;
	int tmp = l;
	/*int tmp = get(a,l,r);
	swap(a[tmp], a[l]);
	tmp = l;*/
	int left = l;
	int right = r;
	while (l < r) {
		while (l < r && a[r] >= a[tmp])r--;
		while (l < r && a[l] <= a[tmp])l++;
		swap(a[l], a[r]);
	}
	swap(a[l], a[tmp]);
	partion1(a,left, l - 1);
	partion1(a,l + 1, right);
}
void QuickSort(int* a, int n) {
	partion1(a, 0, n - 1);
}
//øÏ≈≈µƒ∑«µ›πÈ
int partion(int* a, int l, int r) {
	int tmp = l;
	while (l < r) {
		while (l < r && a[r] >= a[tmp])r--;
		while (l < r && a[l] <= a[tmp])l++;
		if (l < r) {
			swap(a[l], a[r]);
		}
	}
	swap(a[tmp], a[l]);
	return l;
}
void QuickSortNor(int* a, int l, int r) {
	stack<int>s;
	s.push(l);
	s.push(r);
	while (!s.empty()) {
		int end = s.top();
		s.pop();
		int begin = s.top();
		s.pop();
		int keyi=partion(a, begin, end);
		if (begin < keyi) {
			s.push(begin);
			s.push(keyi - 1);
		}
		if (end > keyi) {
			s.push(keyi + 1);
			s.push(end);
		}
	}
}
//πÈ≤¢≈≈–Ú
void _MergeSort(int* a, int left, int right, int* tmp) {
	if (left >= right)return;
	int mid = (left + right) / 2;
	_MergeSort(a, left, mid,tmp);
	_MergeSort(a, mid + 1, right, tmp);
	int begin1 = left, end1 = mid;
	int begin2 = mid + 1, end2 = right;
	int i = left;
	while (begin1 <= end1 && begin2 <= end2) {
		if (a[begin1] < a[begin2]) {
			tmp[i++] = a[begin1++];
		}
		else {
			tmp[i++] = a[begin2++];
		}
	}
	while (begin1 <= end1) {
		tmp[i++] = a[begin1++];
	}
	while (begin2 <= end2) {
		tmp[i++] = a[begin2++];
	}
	for (int j = left;j < i;j++) {
		a[j] = tmp[j];
	}
}
void MergeSort(int* a, int n) {
	int* tmp = (int*)malloc(n * sizeof(int));
	_MergeSort(a, 0, n - 1, tmp);
	free(tmp);
	tmp = NULL;
}
//πÈ≤¢µƒ∑«µ›πÈ
void MergeSortNor(int* a, int n) {
	int* tmp = (int*)malloc(n * sizeof(int));
	int gap = 1;
	while (gap < n) {
		for (int i = 0;i < n;i += 2 * gap) {
			int begin1 = i, end1 = i + gap-1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
			int idx = i;
			if (end1 >= n) {
				//end1 = n - 1;
				break;
			}
			if (begin2 >= n) {
				//begin2 = n ;
				//end2 = n - 1;
				break;
			}
			if (end2 >= n) {
				end2 = n - 1;
			}
			while (begin1 <= end1 && begin2 <= end2) {
				if (a[begin1] < a[begin2]) {
					tmp[idx++] = a[begin1++];
				}
				else {
					tmp[idx++] = a[begin2++];
				}
			}
			
			while (begin1 <= end1) {
				tmp[idx++] = a[begin1++];
			}
			
			
			while (begin2 <= end2) {
				tmp[idx++] = a[begin2++];
			}
			for (int j = i;j <=end2;j++) {
				a[j] = tmp[j];
			}
		}
		
		gap *= 2;
	}
	free(tmp);
	tmp = NULL;
}
//º∆ ˝≈≈–Ú
void CountSort(int* a, int n) {
	int maxi = a[0], mini = a[0];
	for (int i = 1;i < n;i++) {
		if (a[i] > maxi)
			maxi = a[i];
		if (a[i] < mini)
			mini = a[i];
	}
	int count = maxi - mini+1;
	int* C = (int*)malloc(count * sizeof(int));
	memset(C, 0, sizeof(int)*count);
	for (int i = 0;i < n;i++) {
		C[a[i] - mini]++;
	}
	int j = 0;
	for (int i = 0;i < count;i++) {
		while(C[i]--)
			a[j++] = i + mini;
	}
}
int main() {
	int arr[] = { 5,6,2,4,9,8,3,7,6 };
	int sz = sizeof(arr) / sizeof(int);
	//InsertSort(arr, sz);
	//ShellSort(arr, sz);
	//SelectSort(arr, sz);
	//HeapSort(arr, sz);
	//BubbleSort(arr, sz);
	//QuickSort(arr, sz);
	//QuickSortNor(arr, 0, sz - 1);
	//MergeSort(arr, sz);
	//MergeSortNor(arr, sz);
	CountSort(arr, sz);
	for (int i = 0;i < sz;++i)cout << arr[i] << ' ';
	return 0;
}

