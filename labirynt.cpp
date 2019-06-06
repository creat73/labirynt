#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void print_matrix(int * arr, int n){
	cout<<"Wylosowana macierz: \n";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<*(arr+i*n+j)<<" ";
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
	print_matrix((int*)arr,n);
}
