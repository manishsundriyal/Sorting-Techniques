#include <iostream>
#include <conio.h>

using namespace std;

int divide(int a[],int p,int r){
    int piv=a[r];		
    int i=p-1;
			
    for(int j=p;j<=r-1;j++){
		if(a[j]<=piv){
            i++;
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
		}
    }
            
    int temp=a[i+1];
    a[i+1]=a[r];
    a[r]=temp;
			
return i+1;
}

void sort(int a[],int p,int r){
			
    if(p<r){
		int pi=divide(a,p,r);
				
		sort(a,p,pi-1);
		sort(a,pi+1,r);
  	}		
}
	
int main(){
		
    int a[]={2,9,30,3,7,52};
    int n=6;
    sort(a,0,5);
		
    for(int i=0;i<n;i++){
		cout<<a[i]<<",";
    }

getch();
return 0;	
}