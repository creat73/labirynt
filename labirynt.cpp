#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void print_matrix(int * arr, int n)
{
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<*(arr+i*n+j)<<" ";
		}
		cout<<"\n";	
	}
}

void spiral_count(int * arr, int n)
{	
	for(int x=0;x<n-1;x++)
	{	
		for(int i=x;i<n-x;i++){
			cout<<*(arr+x*n+i)<<" ";	
		}
		cout<<"\n";	
		
		for(int i=x+1;i<n-x;i++){
			cout<<*(arr+i*n+n-1-x)<<" ";	
		}
		cout<<"\n";	
		
		for(int i=n-(x+1);i>x;i--){
			cout<<*(arr+(n-1-x)*n+i-1)<<" ";	
		}
		cout<<"\n";	
		
		for(int i=n-(x+2);i>x;i--){
			cout<<*(arr+i*n+x)<<" ";	
		}
		cout<<"\n";		
	}
}

int main()
{
	int n;
	srand(time(0));
	
	cout<<"Podaj wymiary tablicy: ";
	cin>>n;
	int arr[n][n];
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			//Random number from -100 to 100
			arr[i][j] =-100 + (rand()%200)+1; 
		}
	}
	
	cout<<"Wylosowana macierz: \n";
	print_matrix((int*)arr,n);
	cout<<"\nSpiral matrix:\n\n";
	spiral_count((int*)arr,n);
}
