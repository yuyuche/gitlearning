#include<stdio.h>
int n;
int a[20000];
int b[20000];
void merge_sort(int l,int r)
{
	if(l==r) return;
	merge_sort((l+r)/2+1,r);
	merge_sort(l,(l+r)/2);
	int i,j,k;
	i=l;j=(l+r)/2+1;k=l;
	while(i<=(l+r)/2||j<=r)
	{
		if((i<=(l+r)/2 &&a[i]<a[j])||j>r) {b[k]=a[i];k++;
		i++;
		} 
		else{
			b[k]=a[j];k++;
			j++ ;
		}
 		
	}  
	for(int i=l;i<=r;i++)
	{
		a[i]=b[i];
	}
	return ;
}
int main() 
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	scanf("%d",&a[i]);
	merge_sort(1,n);
	for(int i=1;i<=n;i++)
	printf("%d  ",a[i]);
	return 0;
}
