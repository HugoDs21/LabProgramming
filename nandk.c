#include <stdio.h>
#include <stdlib.h>

int binarySearch(int vec[], int start, int end, int x){
	if (end >= start) {
		int mid = start + (end - start)/2;
		if (vec[mid] == x) {
			return mid; //EXISTE
		}
		if (vec[mid] > x) {
			return binarySearch(vec, start, mid-1, x);
		}
		return binarySearch(vec, mid+1, end, x);
	}
	return -1; //NAO EXISTE
}

void nandk() {
  int n, k;
  scanf("%d %d", &n, &k);
  int arr[k];
  while (n-- > 0) {

    n--;
  }
}




int main(int argc, char const *argv[]) {
  nandk();
  return 0;
}
