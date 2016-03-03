#include <iostream>
using namespace std;
int main (){
	int x=0,y=1, L, seq=0;
	cin >> L;
	cout<<y;
	while ( (seq < L) && (x+y<L) ) {
        seq=x+y;
        x=y;
        y=seq;
		cout << seq;

    }
   std::cout << "\n >>> Normal ... \n\n";
	//return EXIT_SUCCESS;

}
