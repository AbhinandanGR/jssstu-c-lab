/* Part : B4

To generate an electricity bill by accepting meter number of the consumer,
number of units consumed and print out the detail charges for the below scenario:
An electricity board charges the following rates for the use of electricity:
	 for the first 200 units 80 paise per unit
	 for the next 100 units 90 paise per unit
	 beyond 300 units Rs 1 per unit
All users are charged a minimum of Rs. 100 as meter charge. If the total amount
is more than Rs. 400, then an additional surcharge of 15% of total amount is
charged.   */


#define MIN_CHRG 100 

#include <stdio.h>
#include <stdlib.h>

int main()
{
   unsigned int meter_number, units_consumed; 
   float total_amount, total, surcharge, net_bill;
   
   system("clear");
   
   printf("Enter the Consumer Meter Number: ");
   scanf("%u", &meter_number);   //%u for Unsigned Integer Number
   printf("Enter the Units Consumed: ");
   scanf("%u", &units_consumed);   //%u for Unsigned Integer Number

   printf("***********Detail Charges as follow: **************\n");   
   printf("\nMinimum Meter charge: Rs. 100/-");   
   
   if(units_consumed <= 200)
   {
      total_amount = units_consumed * 0.80 ;
      printf("\n@Rs. 80paise for first 200 units: Rs. %.2f",total_amount);   
   }
   else if(units_consumed <= 300)
        {
         total_amount = (units_consumed-200) * 0.90 + 160;
         printf("\n@Rs. 80paise for first 200 units: Rs. 160.00");   
         printf("\n@Rs. 90paise for next 100 units: Rs. %.2f", (units_consumed-200) * 0.90);   
        }
        else 
        { 
         total_amount = (units_consumed-(200+100)) * 1.00 + 160 + 90;        
         printf("\n@Rs. 80paise for first 200 units: Rs. 160.00");   
         printf("\n@Rs. 90paise for next  100 units: Rs.  90.00");
         printf("\n@Rs. 01.00  for  above 300 units: Rs. %d", ((units_consumed-300)*1));
        }


   total_amount += MIN_CHRG;
   printf("\n>>>>>>>Total Amount Rs. %.2f", total_amount);
   
   if(total_amount > 400)
   {
      surcharge = total_amount * 0.15 ;
      printf("\n\nAn additional surcharge of 15%% on total amount, in case of total amount is more than Rs. 400/- i.e.    Rs. %.2f", surcharge);
      net_bill = total_amount + surcharge ;
   }
   else
   {
      net_bill = total_amount;
   }
        
   printf("\n\n******************Billed Amount: Rs. %.2f******************\n", net_bill);
   
   return 0;
}


