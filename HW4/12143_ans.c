#include "function.h"

int BS(int input[], int q, int n){
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (input[mid] == q)
        {
            return mid;
        }
        else if (input[mid] > q)
        {
            high = mid - 1;
        }
        else if (input[mid] < q)
        {
            low = mid + 1;
        }
    }

    return -1;
}
