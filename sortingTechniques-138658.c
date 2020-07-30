//Employee Name and ID: Shubham Pasari 138658

#include <stdio.h> 
  
void swap(int *x, int *y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 
  
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
    {
       for (j = 0; j <= n-i-2; j++)  
           {
		if (arr[j] > arr[j+1]) 
              	swap(&arr[j], &arr[j+1]);
	   } 
    }
} 

void selectionSort(int arr[], int n) 
{ 
    int i, j, min;
    for (i = 0; i < n-1; i++) 
    { 
        min = i; 
        for (j = i+1; j < n; j++) 
          if (arr[j] < arr[min_idx]) 
            min = j; 

        swap(&arr[min], &arr[i]); 
    } 
} 

void insertionSort(int arr[], int n) 
{ 
    int i, temp, j; 
    for (i = 1; i < n; i++) { 
        temp = arr[i]; 
        j = i - 1; 
        while (j >= 0 && arr[j] > temp) 
	{ 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = temp; 
    } 
} 

void merge(int arr[], int a, int b, int r) 
{ 
    int i, j, k; 
    int n1 = b - a + 1; 
    int n2 = r - b; 
    int L[n1], R[n2]; 
    for (i = 0; i < n1; i++) 
        L[i] = arr[a + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[b + 1 + j]; 
    i = 0; 
    j = 0; 
    k = a;  
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
void mergeSort(int arr[], int l, int r) 
{ 
    if (l < r) 
    { 
        int m = (l+r) / 2; 
        mergeSort(arr, l, m); 
        mergeSort(arr, m + 1, r); 
  
        merge(arr, l, m, r); 
    } 
} 

void printArray(int arr[], int size) 
{ 
    for (int i=0; i < size; i++) 
    printf("%d ", arr[i]); 
    printf("\n"); 
} 


int main() 
{ 
    int arr[] = {5,8,2,1,15,8,9,0}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    bubbleSort(arr, n);  
    printArray(arr, n);
    selectionSort(arr,n);
    printArray(arr, n); 
    insertionSort(arr, n);
    printArray(arr,n);
    mergeSort(arr,0,n-1);
    printArray(arr,n);
    return 0; 
} 