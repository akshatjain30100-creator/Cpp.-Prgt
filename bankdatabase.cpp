#include <stdio.h>
struct bankdatabase{
    int acc_no;
    char acc_name[20], acc_type[20];
    float op_bal, total_bal;
};
bankdatabase getdata(){
    bankdatabase s;
    printf ("\n-------------------Welcome To----------------\n");
    printf ("\n------------Punjab National Bank-------------\n");
    printf ("\n-------Enter your following Credentials------\n");
    printf ("Enter the account number:");
    scanf("%d",&s.acc_no);
    fflush(stdin);
    printf ("Enter the account name:");
    gets (s.acc_name);
    printf ("Enter the account type:");
    gets (s.acc_type);
    printf ("Enter the opening balance:");
    scanf ("%f",&s.op_bal);
    s.total_bal = s.op_bal;
    return s;
}
bankdatabase showdata(bankdatabase s){
    printf ("Account Number : %d \n",s.acc_no);
    printf ("Account Name : %s \n", s.acc_name);
    printf ("Account Type : %s \n", s.acc_type);
    printf ("Opening Balance : %f \n",s.op_bal);
    printf ("Total Balance : %f \n",s.total_bal);
}
bankdatabase withdraw(bankdatabase s){
    float amount;
    printf ("Enter the amount to be withdrawn:");
    scanf ("%f",&amount);
    if (amount > s.total_bal){
        printf ("Insufficient balance");
    }
    else{
        s.total_bal = s.total_bal - amount;
    }
    return s;
}
bankdatabase deposit(bankdatabase s){
    float amount;
    printf ("Enter the amount to be deposited:");
    scanf ("%f",&amount);
    s.total_bal = s.total_bal + amount;
    return s;
}
bankdatabase exit(bankdatabase s){
    printf ("\n-----Punjab National Bank-----\n");
    printf ("Thank you for using our services\n");
    return s;
}
int main(){
    bankdatabase s;
    s = getdata();
    int choice;
    do{
        printf ("\n-----Punjab National Bank-----\n");
        printf ("1. Withdraw\n2. Deposit\n3. Exit\n");
        printf ("Enter your choice:");
        scanf ("%d",&choice);
        switch (choice){
            case 1:
                s = withdraw(s);
                break;
            case 2:
                s = deposit(s);
                break;
            case 3:
                s = exit(s);
                break;
            default:
                printf ("Invalid choice");
        }
    } while (choice != 3);
    showdata(s);
    return 0;
}
