/*******************************************************************
 * 
 * Income slab                            tax
 * <2.5L                                  0
 * 2.5 - 5L                                 5%
 * 5 - 10L                                20%
 * >10L                                    30%
 * ************************************************************************/

 #include <stdio.h>
 #define slab1 2.5*(5/100)
 #define slab2 2.5*(5/100) + 5*(20/100)

 void main()
 {
      float income, tax;
      printf("Enter the Income of the person(in lakhs):");
      scanf("%f", &income);

      if(income<=2.5)
      {
         printf("This person has to pay no tax");
      }

      else if(income>2.5 && income<=5)
      {
         tax = (income-2.5)*5/100;
         printf("The Income tax which this person has to pay for his income %f L is %f rupee", income, tax);
      }

      else if(income >5 && income<=10)
      {
         tax = (income - 5)*20/100 + slab1;
         printf("The Income tax which this person has to pay for his income %f L is %f L rupee", income, tax); 
      }

      else if(income>10)
      {
         tax = (income - 10)*30/100 + slab2;
         printf("The Income tax which this person has to pay for his income %f L is %f L ruppee", income, tax);
      }

 } 