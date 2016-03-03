#include <iostream>
#include <math.h>
int raizes (float a, float b, float c, float *x1, float *x2, float *d){
	    float delta;
        delta = (b*b)-(4.0*a*c);
            if (delta>0){
            *x1 = (b - sqrt(delta))/2.0*a;
            *x2 = (b + sqrt(delta))/2.0*a;
            *d=2;
	    } else if (delta=0){
	        *d=1;
            *x1= b/2;
            *x2=*x1;
	    }else if (delta<0){
	        *d=0;
            //cout << "As raízes não são reais";
	    }
	    return 0;
	}
using namespace std;
int main (){
    float delta, x1, x2, a,b,c, d;
    cin>>a;
    cin>>b;
    cin>>c;
    raizes(a, b, c, &x1, &x2, &d);
    cout<<d;
    std::cout << "\n >>> Normal ... \n\n";

	//return EXIT_SUCCESS;

}
