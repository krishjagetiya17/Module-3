/*Accept monthly salary from the user and deduct 10%
insurance premium,10% loan installment find out of
remaining salary*/
#include<stdio.h>
int main(){
	double ms,rs,ip,li;
	
	printf("\n Enter your Monthly salary :");
	scanf("%lf",&ms);
	
//	printf("\n there will be a deduction of 10% from insurance premium");
//	printf("\n there will be a deduction of 10% from loan installment");
//	printf("\n monthly salry : %lf",ms);
	ip= (0.10*ms);
	li= (0.10*ms);
//	printf("\n ip : %lf  li : %lf",ip,li);
	rs = (ms-ip)-li;
	
	printf("\n Your Remaining Salary is : %lf",rs);
}
