#include <stdio.h>

int main(void){
  // Sales Tax Calculator
  double amount = 0;
  char month[16];
  int count = 1;
  double total_tax;
  double county_tax;
  double state_tax;

  printf("%s", "\nEnter total amount collected (-1 to quit): $");
  scanf("%lf", &amount);
  while(amount != -1){

    printf("%s", "Enter name of month:");
    scanf("%s", month);

    county_tax = .05 * amount;
    state_tax = .04 * amount;
    total_tax = county_tax + state_tax;
    count++;

    // Infinite loop without this check for some reason.
    if(count > 12) break;

    printf("%s%.2lf", "Total Collection: $", amount);
    printf("%s%.2lf", "\nSales: $", amount - total_tax);
    printf("%s%.2lf", "\nCounty Sales Tax: $", county_tax);
    printf("%s%.2lf", "\nState Sales Tax: $", state_tax);
    printf("%s%.2lf", "\nTotal Sales Tax Collected: $", total_tax);
    puts("\n");
    printf("%s", "Enter total amount collected (-1 to quit): $");
    scanf("%lf", &amount);
  }

  return 0;
}
