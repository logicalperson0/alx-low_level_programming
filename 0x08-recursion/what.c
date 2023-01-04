#include<stdio.h>
#include<math.h>

double squareRoot(double a) {
	    
	  double i = 0;
	    double j = a / 2;

	      while (j != i) {
		          i = j;
			      j = (a / i + i) / 2;
			        }
	        
	        return j;
		  
}

int main() {
	    
	  double a;

	    printf("Enter a non-negative number: ");
	      scanf("%lf", & a);

	        double ans = squareRoot(a);
		  printf("The square root of %.4lf: %.4lf", a, ans);

		    return 0;
}

