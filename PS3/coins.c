/* Making change */

#include <stdio.h>
#define OCTANOL 4
#define BUTANOL 3
#define ETHANOL 2
#define METHANOL 1

int value(int coin){
  if(coin == OCTANOL){
    return 8;
  } else if(coin == BUTANOL ){
    return 4;
  } else if(coin == ETHANOL){
    return 2;
  } else{
    return 1;
  }
}

int count(int amount, int maxCoin)
{
    /* TODO: Count the number of ways to make change for 'amount' using coins with value <= the value of 'maxCoin' */
    // base case
    if(amount==0)
    {
        return 1;
    }
    // base case
    if(amount<0)
    {
        return 0;     // 0 ways to do this
    }
    // base case
    if(maxCoin==1)      // the k = 1
    {
        return count(amount-value(maxCoin), maxCoin);
    }
    else
    {
        return count(amount-value(maxCoin), maxCoin) + count(amount, maxCoin -1);
    }
    
}

int main(int argc, char* argv[]){
  int amount;
  printf("Enter amount: ");
  scanf("%d", &amount);
  printf("Number of ways to make %d cents: %d\n", amount, count(amount, OCTANOL));
}