#include <stdio.h>

int partition(int arr[],int low,int high){
    int pivot=arr[low];
    int l=low+1;
    while(l<=high){
        while(l <= high && arr[l] <= pivot){
            l++;
        }
        while(high >= low && arr[high] > pivot ){
            high--;
        }
        if(l<high){
            int temp=arr[l];
            arr[l]=arr[high];
            arr[high]=temp;
    }
        
    }
    
            int temp=arr[high];
            arr[high]=arr[low];
            arr[low]=temp;
   
    return high;
}   



void quicksort(int arr[],int low,int high){
    if(low<high){
        int p=partition(arr,low,high);
        quicksort(arr,low,p-1);
        quicksort(arr,p+1,high);
    }
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        int x;
    scanf("%d",&x);
    arr[i]=x;
    }
    
    quicksort(arr,0,n-1);
    
    for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
    }
    return 0;
}

