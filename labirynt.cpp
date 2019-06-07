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


//Goes through the array in spiral, clockwise order
//prints elements and calculates their sum and product
void spiral_count(int * arr, int n)
{	
	int value;
	int sum = 0;
	int product = 1;
	for(int x=0;x<n-1;x++)
	{	
		for(int i=x;i<n-x;i++){
			value = *(arr+x*n+i);
			sum+=value;
			product*=value;
			cout<<value<<" ";	
		}
		
		for(int i=x+1;i<n-x;i++){
			value=*(arr+i*n+n-1-x);
			sum+=value;
			product*=value;
			cout<<value<<" ";
		}
		
		for(int i=n-(x+1);i>x;i--){
			value=*(arr+(n-1-x)*n+i-1);
			sum+=value;
			product*=value;
			cout<<value<<" ";	
		}
		
		for(int i=n-(x+2);i>x;i--){
			value=*(arr+i*n+x);
			sum+=value;
			product*=value;
			cout<<value<<" ";	
		}	
	}
	cout<<"\nSuma elementow = " << sum << "\nIloczyn elementow = " << product;
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
