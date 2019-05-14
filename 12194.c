#include <stdio.h>
int n, q, ans;
unsigned long int a[1000000], tmp;
int bin (int n, unsigned long int tmp, unsigned long int a[]){
    int low = 0, high = n-1;
    while (low<=high){
        int mid = (low+high)/2;
        if (a[mid]==tmp){
            return 0;
        }
        else if (a[mid]>tmp){
            high = mid-1;
        }
        else if (a[mid]<tmp){
            low = mid+1;
        }
    }
    return -1;
}
int main (void) {
    scanf("%d%d", &n, &q);
    for (int i=0; i<n; i++){
        scanf("%ld", &a[i]);
    }
    while (q--) {
        scanf("%ld", &tmp);
        ans = bin(n, tmp, a);
        if (ans==0) printf("I know de way to your home.\n");
        else printf("Wake up, you homeless poor.\n");
    }
    return 0;
}
