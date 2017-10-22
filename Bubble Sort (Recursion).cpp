#include<iostream>

using namespace std;

void bubbleSort(int a[],int n){
    
    if(n==1){
        return;
    }
    
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    
    bubbleSort(a,n-1);
}

int main() {
    
    int a[100000],n;
    cout<<"Enter size of Array\n";
    cin>>n;

    cout<<"Enter Elements of Array\n";    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    bubbleSort(a,n);
    
    cout<<"Arrray after Sorting\n";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
	return 0;
}