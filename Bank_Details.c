#include <stdio.h>

typedef struct account
{
    char name[30];
    float acc_num;
    char ifsc[30];
    float balance;
} AccountDetails;

void accountDetails(AccountDetails customers)
{
    printf("\n\nAccount Holder Name : %s\n", customers.name);
    printf("Account Number : %.f\n", customers.acc_num);
    printf("IFSC Code : %s\n", customers.ifsc);
    printf("Bank Balance : %.2f\n\n", customers.balance);
}

int main()
{
    int no_of_customers;
    printf("Enter number of customers: ");
    scanf("%d", &no_of_customers);

    AccountDetails customer[no_of_customers];
    for (int i = 0; i < no_of_customers; i++)
    {
        fflush(stdin);
        printf("Enter account holder name for customer %d: ", i + 1);
        gets(customer[i].name);

        printf("Enter account number : ");
        scanf("%f", &customer[i].acc_num);

        printf("Enter IFSC number : ");
        scanf("%s", &customer[i].ifsc);

        printf("Enter account Balance : ");
        scanf("%f", &customer[i].balance);
    }

    for (int i = 0; i < no_of_customers; i++)
    {
        accountDetails(customer[i]);
    }

    return 0;
}