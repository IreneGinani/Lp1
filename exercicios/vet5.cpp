#include <iostream>
#include <math.h>
using namespace std;
int main (){
    int A[30], B[30], i,x, j, l;
    for (i=0; i<10;i++){
		cin >> x;
		if (x%2==0){
            A[i]=x;
                if (sizeof(A)== 4){
                    for (j=0; j<5;j++){
                        cout << A[j];
                    }
                }
		}else if (x%2!=0){
                B[i]=x;
                if (sizeof(B)==4){
                    for (l=0; l<5;l++){
                        cout << B[l];
                    }
                }
		}
    }

    std::cout << "\n >>> Normal ... \n\n";
	//return EXIT_SUCCESS;

}
