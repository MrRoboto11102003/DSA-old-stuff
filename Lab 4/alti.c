#include<stdio.h>
int findGCD(int a, int b){
    if(b == 0)
      return a;
    return findGCD(b, a%b);
}
int main()
{
   
  int n;
  scanf("%d",&n);
   
   int arr[n];

  for(int i=0; i<n; i++)
 {

   scanf("%d",&arr[i]);


 }
 int gcd = arr[0];

 for(int i=1; i<n; i++){
      gcd = findGCD(arr[i], gcd);
    }

    
 for(int i  =0; i<n; i++)
 {
    int gcd2 = arr[0];
    for(int j=0; j<n; j++)
    {
        if(i-j==0)
        {
            continue;
        }
        gcd2= findGCD(arr[j], gcd2);
        printf("%d ", j);
        

    }
    if(gcd2>gcd)
        {
            gcd = gcd2;
        }
    printf("\n");
 }
 

 printf("%d", gcd);
}