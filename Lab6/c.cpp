#include<bits/stdc++.h>
using namespace std;
void swap(int arr[] , int pos1, int pos2){
	int temp;
	temp = arr[pos1];
	arr[pos1] = arr[pos2];
	arr[pos2] = temp;
}

int partition(int arr[], int low, int high, int pivot){
	int i = low;
	int j = low;
	while( i <= high){
		if(arr[i] > pivot){
			i++;
		}
		else{
			swap(arr,i,j);
			i++;
			j++;
		}
	}
	return j-1;
}

void quickSort(int arr[], int low, int high){
	if(low < high){
	int pivot = arr[high];
	int pos = partition(arr, low, high, pivot);
	
	quickSort(arr, low, pos-1);
	quickSort(arr, pos+1, high);
	}
}
   int main(){
	int n ;
	cin>>n;
	int a[n];
	for( int i = 0 ; i < n; i++){
		cin>> a[i];
	}
	quickSort(a, 0 , n-1);
	int min=100000000;
    vector<int> v;
    
	for( int i = 0 ; i < n-1; i++){
		if(abs(a[i]-a[i+1])<=min){
            min=abs(a[i]-a[i+1]);
        }
	}

	for( int i = 0 ; i < n-1; i++){
		if(abs(a[i]-a[i+1])==min){
            min=abs(a[i]-a[i+1]);
            v.push_back(a[i]);
            v.push_back(a[i+1]);
        }
	}
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
	
}
 