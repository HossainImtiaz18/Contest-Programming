#include<stdio.h>
struct stores
{
    char name[20];
    float price;
    int quantity;
};
struct stores update(struct stores product,float p,int q);
float mul(struct stores stock);
main()
{
    float p_increment,value;
    int q_increment;
    struct stores item={"XYZ",25.75,12 };
    printf("\nInput increment values:");
    printf("Price increment and quantity increment\n");
    scanf("%f %d",&p_increment,&q_increment);
    /*..............................*/
    item=update(item,p_increment,q_increment);
    /*...............................*/
    printf("Update values of item\n\n");
    printf("Name     :%s\n",item.name);
    printf("price    :%f\n",item.price);
    printf("Quantity :%d\n",item.quantity);
    /*........................*/
    value=mul(item);
    printf("\nValue of the item = %f\n",value);
}
struct stores update(struct stores product,float p,int q)
{
    product.price+=p;
    product.quantity+=q;
    return(product);
}
float mul(struct stores stock)
{
    return(stock.price*stock.quantity);
}
