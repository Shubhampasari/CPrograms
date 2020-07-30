//Employee Name and ID: Shubham Pasari 138658

void quad(int A[], int n, int sum) 
{  
  for (int i = 0; i < n-3; i++) 
  { 
    for (int j = i+1; j < n-2; j++) 
    { 
      for (int k = j+1; k < n-1; k++) 
      { 
        for (int l = k+1; l < n; l++) 
           if (A[i] + A[j] + A[k] + A[l] == sum) 
              printf("%d, %d, %d, %d", A[i], A[j], A[k], A[l]); 
      } 
    } 
  } 
} 
  
int main() 
{ 
    int A[] = {10, 20, 30, 40, 1, 2}; 
    int n = sizeof(A) / sizeof(A[0]); 
    int sum;
    scanf("%d",&sum); 
    quad(A, n, sum); 
    return 0; 
} 