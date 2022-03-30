#include<stdio.h>
int input_size()
{
  int n;
  printf("Enter n?");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  for(int i=0; i<n; i+=1)
    scanf("%d", &a[i]);
}
int find_largest(int n,int a[n])
{
  int mx = a[0];
  for(int i=1; i<n; i+=1)
    {
      if(mx < a[i])
        mx = a[i];
    }
return mx;
  }
void output(int n,int a[n],int largest)
{
  printf("\nMax between ");
  for(int i=0; i<n; i+=1)
    printf("%d,",a[i]);
  printf("is %d\n", largest);
}
int main()
{
  
}