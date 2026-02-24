#include<stdio.h>
union companyunion{
    char comp_name[20], prod_name[20];
    float price, qty, tot_price;
    union mfg_datec{
        char month[20];
        int year;
    } mfg_datec;
    union exp_datec{
        char month[20];
        int year;
    } exp_datec;
};
int main(){
    companyunion p[3];
    for (int i = 0; i < 3; i++){
        printf("enter the company name\n");
        gets(p[i].comp_name);
        printf("Company name is %s\n",p[i].comp_name);
        fflush(stdin);
        printf("enter the product name\n");
        gets(p[i].prod_name);
        printf("Product name is %s\n",p[i].prod_name);
        printf("enter the manufacturing date (Month & year)\n");
        printf("enter month\n");
        gets(p[i].mfg_datec.month);
        printf("Manufacturing Month: %s\n",p[i].mfg_datec.month);
        fflush(stdin);
        printf("enter the year\n");
        scanf("%d",&p[i].mfg_datec.year);
        printf("Manufacturing Year: %d\n",p[i].mfg_datec.year);
        fflush (stdin);
        printf ("Enter the expiry date (Month & year)\n");
        printf ("enter month\n");
        gets(p[i].exp_datec.month);
        printf ("Expiry Month: %s\n",p[i].exp_datec.month);
        fflush(stdin);
        printf("enter the year\n");
        scanf ("%d", &p[i].exp_datec.year);
        printf ("Expiry Year: %d\n",p[i].exp_datec.year);
        fflush (stdin);
        printf ("enter the price");
        scanf ("%f",&p[i].price);
        printf ("Price is %f\n",p[i].price);
        printf("enter the quantity");
        scanf("%f",&p[i].qty);
        printf("Quantity is %f\n",p[i].qty);
        fflush(stdin);
        p[i].tot_price = p[i].price * p[i].qty;
        printf("Total price : %f\n",p[i].tot_price);
    }
    return 0;
}
