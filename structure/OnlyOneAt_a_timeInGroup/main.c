#include <stdio.h>

typedef union {
    double weight;
    int size;
    char color[10];
}Description;

typedef struct
{
    int ino;
    char iname[30];
    Description d;
    char dtype;
    double price;
} Item;

void inputItem(Item *ip){
    printf("Enter Item Number: ");
    scanf("%d", &(ip->ino));
    printf("Enter Item Name: ");
    scanf(" %s", ip->iname);
    printf("Enter Price: ");
    scanf("%lf", &(ip->price));

    printf("Weight/ Size/ Color? w for weight, s for size, c for color: ");
    scanf(" %c", &(ip->dtype));

    if(ip->dtype == 's'){
        printf("Enter Size: ");
        scanf("%d", &(ip->d.size));
    }else if(ip->dtype == 'c'){
        printf("Enter Color: ");
        scanf(" %s", ip->d.color);
    }else if(ip->dtype == 'w'){
        printf("Enter weight: ");
        scanf("%lf", &(ip->d.weight));
    }
}

void printItem(Item item){
    printf("Inum: %d\n", item.ino);
    printf("IName: %s\n", item.iname);
    printf("Price: %10.2lf\n", item.price);

    if(item.dtype == 's'){
        printf("Size: %d\n", item.d.size);
    }else if(item.dtype == 'c'){
        printf("Color: %s\n", item.d.color);
    }else if(item.dtype == 'w'){
        printf("weight: %10.2lf\n", item.d.weight);
    }
    printf("\n");
}


int main()
{
    Item item;
    inputItem(&item);
    printItem(item);
    return 0;
}