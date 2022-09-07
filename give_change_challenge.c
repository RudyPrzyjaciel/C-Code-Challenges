#include <stdio.h>

struct coin
{
    char *name;
    float value;
    int ammount;
};


void giveChange(float change)
{
    printf("---------------------\n");
    printf("Change to give: $%.2f\n", change);
    
    struct coin coins[4];
    coins[0].name = "Quarters";
    coins[0].value = 0.25;
    coins[0].ammount = 0;
    
    coins[1].name = "Dimes";
    coins[1].value = 0.10;
    coins[1].ammount = 0;
    
    
    coins[2].name = "Nickles";
    coins[2].value = 0.05;
    coins[2].ammount = 0;
    
    coins[3].name = "Pennies";
    coins[3].value = 0.01;
    coins[3].ammount = 0;


    for(int i = 0; i < 4; i++)
    {
        while ((change - coins[i].value) >= -0.001f)
        {
            change -= coins[i].value;
            coins[i].ammount += 1;
        }
        
        printf("  %s: %d \t$%.2f\n", coins[i].name, coins[i].ammount, (float)(coins[i].value * coins[i].ammount));
    }

}

int main()
{

    float changeToGive[] = {0.49f, 1.27f, 0.75f, 1.31f, 0.83f, 0.69f, 1.24f, 0.01f, 0.05f, 0.1f, 0.25f, 0.00f};

    for(size_t i = 0; i < sizeof(changeToGive) / sizeof(changeToGive[0]); i++)
    {
        giveChange(changeToGive[i]);
    }

    return 0;
}