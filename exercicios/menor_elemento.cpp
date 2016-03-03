#include <iostream>
using namespace std;
int main (){
    int i, vet[20],menor;

	for (i=0; i<5;i++){
		cin >> vet[i];
    }
    for (i=0; i<5;i++){
		cout<<vet[i];
    }
    for (i=0; i<5;i++){
        menor = vet[0];
		if (vet[i]< menor){
            menor = vet[i];
		}
    }
    cout << "\n" << menor;
   std::cout << "\n >>> Normal ... \n\n";
	//return EXIT_SUCCESS;

}
