#include <stdio.h>
int BSearchR(int arr[], int l, int r, int n)
{
	if (r >= l) {
		int mid = (l + r)/2;
		if (arr[mid] == n)
			return 1;
		if (arr[mid] > n)
			return BSearchR(arr, l, mid - 1, n);
		return BSearchR(arr, mid + 1, r, n);
	}
	return 0;
}

void main(){
    int l[6]={1,5,6,9,15,25};
    int n,mid,L=0,U=6;
    if(BSearchR(l,0,6,150)){
        printf("Found");
    }
    else{
        printf("Not Found");
    };
}