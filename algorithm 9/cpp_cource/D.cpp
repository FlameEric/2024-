#include<iostream>
using namespace std;

int maxSum(int a[], int n){
	
	int sum = 0;
	int b = 0;
	
	for(int i = 0; i < n; i++){
		
		if(b > 0)
			b += a[i];
		else
			b = a[i];
		
		if(b > sum)
			sum = b;
	}
	return sum;	
}

int main(){
	
	int a[10000];
    int n;
    cin>>n;
	for(int i= 0; i < n; i++)
	{
		cin>>a[i];
	}	 
	cout<< maxSum(a, n)<<endl;
    system("pause");
	return 0;
}
