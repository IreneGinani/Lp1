#include <iostream>
using namespace std;
int main (){
    int i, B[20],aux,j;

	for (i=0; i<5;i++){
		cin >> B[i];
    }
    for (i=0; i<5;i++){
		cout<<B[i];
    }
    for (i=0; i<5;i++){
        //j=20-i-1;
        if (i%2!=0){
        aux = B[i];
        B[i] = B[i+1];
        B[i+1] = aux;
        }
    }
     for (i=0; i<5;i++){
		cout<<B[i];
    }
   std::cout << "\n >>> Normal ... \n\n";
	//return EXIT_SUCCESS;

}
