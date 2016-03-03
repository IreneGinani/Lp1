#include <iostream>
using namespace std;
int main (){
    int i, A[20],aux,j;

	for (i=0; i<20;i++){
		cin >> A[i];
    }
    for (i=0; i<20;i++){
		cout<<A[i];
    }
    for (i=0; i<10;i++){
        j=20-i-1;
        aux = A[i];
        A[i] = A[j];
        A[j] = aux;
    }
     for (i=0; i<20;i++){
		cout<<A[i];
    }
   std::cout << "\n >>> Normal ... \n\n";
	//return EXIT_SUCCESS;

}
