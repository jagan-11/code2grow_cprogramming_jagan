#include <stdio.h>
int main(){
    int total_customers,customer,items,code,quantity;
    float price,total,discount,final_price,total_revenue = 0;
    printf("enter total no.of customers\n");
    scanf("%d",&total_customers);
    printf("=======smart canteen billing systerm========\n");
    for(customer = 1;customer <= total_customers;customer++){
        total = 0;
    printf("customer %d: bill\n", customer);
    }
    printf("enter no.of items\n");
    scanf("%d",&items);
    for( int i = 1; i <= items; i++ ){
        printf("enter items code:\n");
        scanf("%d",&code);
        printf("enter quantity of items\n");
        scanf("%d",&quantity);
    }
    switch(code){
        case 1:
        price = 80;
        printf("sandwich x %d: %.2f\n",quantity,price*quantity);
        total += price*quantity;
        break;
        case 2:
        price = 120;
        printf("burger x %d: %.2f\n",quantity,price*quantity);
        total += price*quantity;
        break;
        case 3:
        price = 150;
        printf("pizza slice x %d: %.2f\n",quantity,price*quantity);
         total += price*quantity;
         break;
         case 4:
         price = 60;
         printf("coffee x %d: %.2f\n",quantity,price*quantity);
          total += price*quantity;
          break;
          case 5:
          price = 50;
          printf("juice x %d: %.2f\n",quantity,price*quantity);
          total += price*quantity;
          break;
          default:
          printf("invalid Code\n");

    }
    if(total > 500){
        discount = total*0.10;
        total = total - discount;
        printf("total %.2f price after 10 percent discount is %.2f\n",total,final_price);
    }
    else{
        final_price = total;
        printf("total bill is %.2f\n",final_price);
    }
    total_revenue += final_price;
    printf("=============canteen summary==============\n");
    printf("total customers served %d\n",total_customers);
    printf("total revenue is %.2f",total_revenue);
    return 0;
}
