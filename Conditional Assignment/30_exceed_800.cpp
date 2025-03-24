//30. If bill exceeds Rs. 800 then a surcharge of 18% will be 
//charged and the minimum bill should be of Rs. 256/-
#include <stdio.h>

#include <stdio.h>

int main() {
    float b,t,mb=256,sc=0.18,h=800;
    
    // Input the bill amount
    printf("\n\n\t Enter your Bill Amount : ");
    scanf("%f", &b);

    // Calculate total amount with surcharge if bill exceeds Rs. 800
    if (b>h){
        t=b+b*sc;
    } else {
        t=b;
    }

    // Ensure minimum bill amount
    if (t<mb) {
        t=mb;
    }

    // Display the total amount
    printf("\n\n\t Total Bill amount that you have to pay is : Rs. %.2f\n", t);

    return 0;
}

