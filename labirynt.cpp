#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


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
}
