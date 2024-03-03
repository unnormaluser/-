#include<>
void quicksort(int * a,int low,int high)
{
	if(low< high)
	{
		int pivot = partition(a,low,high);
		quicksort(a,low,pivot-1);
		quicksort(a,pivot+1,high);
		
	}
}
int partition(int *a ,int low ,int high)
{
	int mid = a[low];
	while(low<high)
	{
	while( low < high && a[high] >= mid)
	high--;
	a[low] = a[high];
	while( low < high && a[low] <= mid)
	low++;
	a[high] = a[low];
    }
	a[low] = mid;
	return low; 
    
}
int main(void){
	
}
