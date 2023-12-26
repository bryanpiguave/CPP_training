#include <iostream>
int *sortAsc(int *arr, int n) {
    int i,j;
    for(i=0; i<n; i++)
        for(j=i+1; j<n; j++)
            if(*(arr+j)<*(arr+i))
            {
                int temp=*(arr+j);
                *(arr+j)=*(arr+i);
                *(arr+i)=temp;
            }
    return arr;
}

int main(){
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int *sortedArr = sortAsc(arr, n);
    for (int i = 0; i < n; i++) {
        printf("%d ", sortedArr[i]);
    }
    printf("\n");
    std::cout <<sortedArr[1];

    return 0;

}