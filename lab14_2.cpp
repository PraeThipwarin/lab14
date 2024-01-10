#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void showMatrix(const bool matr[N][N]){
	for(int i = 0;i < N;i++){
		for(int j = 0;j < N;j++){
			cout<< matr[i][j]<<" ";
		}
		cout<< endl;
	}
}

void inputMatrix(double Matr[N][N]){
	for(int i = 0;i < N;i++){
	cout<<"Row "<<i+1<<": ";
		for(int j = 0;j < N;j++){
			cin>> Matr[i][j];
		}
	}
}

void findLocalMax(const double A[N][N], bool B[N][N]){
	for(int i = 0;i < N;i++){
        for(int j = 0;j < N;j++){
            if(i-1 >= 0 && i+1 < N && j-1 >= 0 && j+1 < N){
				if(A[i][j] >= A[i-1][j] && A[i][j] >= A[i+1][j] && A[i][j] >= A[i][j-1] && A[i][j] >= A[i][j+1])
        			B[i][j] = 1;
				else B[i][j] = 0;
			}
			else B[i][j] = 0;
        }
    }
}