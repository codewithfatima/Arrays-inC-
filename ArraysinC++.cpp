//Basic of array and intialization Of 2D Array
#include<iostream>
using namespace std;

int main()
{
	//datatypes
	int myarray[5][5];  //declaration
	int myarray1[2][2] = {1,2,3,4};  //declaration & initialization
	int myarray2[3][3] ={{1,1,1},{2,2,2},{3,3,3}} ;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout << myarray2[i][j] << "   " ;
		}
		cout << endl;
	}
	int c[2][2],d[2][2],addition[2][2],subtraction[2][2];
	cout << "Enter Values For 2d - Array  A : " << endl;
	for(int i=0; i<2; i++){
		for(int j=0;j<2;j++){
			cin  >> c[i][j];
		}
	}
	cout << endl << "Enter Values For 2-D Array B : " << endl;
    	for(int i=0; i<2; i++){
		for(int j=0;j<2;j++){
			cin  >> d[i][j];
		}
	}
		for(int i=0; i<2; i++){
		for(int j=0;j<2;j++){
	    addition[i][j]=c[i][j] +d[i][j];  
		}
	}
		for(int i=0; i<2; i++){
		for(int j=0;j<2;j++){
	    subtraction[i][j]=c[i][j] +d[i][j];  
		}
	}
	cout << " Values For  Addition is  : " << endl;
	for(int i=0; i<2; i++){
		for(int j=0;j<2;j++){
			cout << addition[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << " Values For Subtraction is  : " << endl;
   	for(int i=0; i<2; i++){
		for(int j=0;j<2;j++){
			cout << subtraction[i][j] << " ";
		}
		cout << endl;
	}
}
		

