#include <iostream>
using namespace std;
int main (){
    int i, A[20], c;

	for (i=0; i<5;i++){
		cin >> A[i];
    }
    for (i=0; i<5;i++){
		cout<<A[i];
    }
    for (i=0; i<5;i++){
        if (A[i]<=0){
            A[i]=A[i+1];
        }

    }
     for (i; i<5;i++){
		cout<<A[i];
    }
   std::cout << "\n >>> Normal ... \n\n";
	//return EXIT_SUCCESS;

}
