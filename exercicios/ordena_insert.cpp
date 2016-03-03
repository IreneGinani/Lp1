#include <iostream>
using namespace std;
int main (){
    int v[30];
    int i, j;
    for (i=0;i<20; i++){
        cin>>v[i];
    }
    for (i=0;i<20; i++){
            for (j=0; j<20 ; j++){
                if (v[i]<v[i+j]){
                    v[i]=v[i+j];
        }
            }
        cout << v[i];
    }
     for (i=1;i<=10; i++){
        cin>>v[i+20];
    }
   std::cout << "\n >>> Normal ... \n\n";
	//return EXIT_SUCCESS;

}
