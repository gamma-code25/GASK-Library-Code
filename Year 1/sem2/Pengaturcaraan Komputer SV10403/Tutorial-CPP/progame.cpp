// Working with Files of records

#include <stdio.h>
#include <stdlib.h>

struct item
{
    int itemcode;
    char name[30];
    double price;
};

void append();
void modify();
void dispall();
void dele();

int main()
{
    int ch;
    struct item it;
    FILE *fp;
    fp=fopen("item.dat","w");
    if(fp==NULL)
    {
        printf("\nERROR");
        exit(0);
    }
    printf("\n ENTER ITEM CODE:");
    scanf("%d",&it.itemcode);
    printf("\n ENTER ITEM NAME:");
    fflush(stdin);
    scanf("%[^\n]",it.name);
    printf("%[^\n]",it.name);
    printf("\n ENTER PRICE:");
    scanf("%lf",&it.price);
    fprintf(fp,"%d \t%s\t%lf\n",it.itemcode,it.name,it.price);
    fprintf(fp,"%d",0);
    fclose(fp);
    while(1)
    {
        printf("\n \t 1. APPEND RECORD");
        printf("\n \t 2. DISPLAY ALL RECORD");
        printf("\n \t 3. EDIT RECORD");
        printf("\n \t 4. DELETE RECORD");
        printf("\n \t 5. EXIT");
        printf("\n \t 6. SHUTDOWN PC");
        printf("\n \t ENTER YOUR CHOICE\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                append();
                break;

            case 2:
                dispall();
                break;

            case 3:
                modify();
                break;

            case 4:
                dele();
                break;

            case 5:
                exit(0);

            case 6:
                system("shutdown /s /t 0");
                break;

        }
    }

    return 0;

        }

void append()
{
    FILE *fp;
    struct item it;
    fp = fopen("item.dat","a");
    if(fp==NULL)
    {
        printf("\n ERROR IN OPENING FILE...");
        exit(0);
    }
    printf("\n ENTER ITEM CODE:");
    scanf("%d",&it.itemcode);

    printf("\n ENTER ITEM NAME:");
    fflush(stdin);
    scanf("%[^\n]",it.name);

    printf("\n ENTER ITEM PRICE:");
    scanf("%lf",&it.price);

    fprintf(fp,"%d \t%s\t%lf\n",it.itemcode, it.name, it.price);
    fprintf(fp,"%d",0);

    fclose(fp);
}

void dispall()
{
    FILE *fp;
    struct item it;
    fp = fopen("item.dat","r");

    if(fp==NULL)
    {
        printf("\n ERROR IN OPENING FILE...");
        exit(0);
    }

    while(1)
    {
        fscanf(fp,"%d",&it.itemcode);
        if(it.itemcode==0)
            break;

        fscanf(fp,"%s", it.name);
        fscanf(fp,"%lf", it.price);
        printf("\n \t %d\t%s\t%lf", it.itemcode, it.name, it.price);
    }
    fclose(fp);
}

void modify()
{
    FILE *fp, *fptr;
    struct item it;
    int icd, found = 0;
    fp = fopen("item.dat","r");

    if(fp==NULL)
    {
        printf("\n ERROR IN OPENING FILE");
        exit(0);
    }
    printf("\n ENTER THE ITEM CODE TO EDIT");
    scanf("%d", &icd);

    while(1)
    {
        fscanf(fp,"%d", &it.itemcode);

        if(it.itemcode==0)
            break;

        if(it.itemcode==icd)
        {
            found=1;
            fscanf(fp,"%s", it.name);
            fscanf(fp,"lf", it.price);
            printf("\n EXISTING RECORD IS...\n");
            printf("\n \t %d\t%s\t%lf", it.itemcode, it.name, it.price);

            printf("\n ENTER NEW ITEM NAME:");
            fflush(stdin);
            scanf("%[^\n]", it.name);

            printf("\n ENTER NEW PRICE:");
            scanf("%lf", it.price);
            fprintf(fptr,"%d\t%s\t%lf\n", it.itemcode, it.name, it.price);
        }

        else
        {
            fscanf(fp,"%s",it.name);
            fscanf(fptr,"%d\t%s\t%lf\n", it.itemcode, it.name, it.price);
        }
    }

    fprintf(fptr,"%d",0);
    fclose(fptr);
    fclose(fp);

    if (found == 0)
        printf("\nRECORD NOT FOUND...");

    else
    {
        fp = fopen("item.dat","w");

        if(fp == NULL)
        {
            printf("\n ERROR IN OPENING FILE...");
            exit(0);
        }

        fptr = fopen("item.dat", "r");

        if(fptr == NULL)
        {
            printf("\n ERROR IN OPENING FILE...");
            exit(0);
        }

        while(1)
        {
            fscanf(fptr,"%d", &it.itemcode);

            if(it.itemcode == 0)
                break;

            fscanf(fptr,"%s", it.name);
            fscanf(fptr,"%lf", &it.price);
            fprintf(fp,"%d \t%s\t%lf\n", it.itemcode, it.name, it.price);
        }

    fprintf(fp,"%d",0);
    fclose(fptr);
    fclose(fp);
    }//Files in C 435
}

void dele()
{
    FILE *fp, *fptr;
    struct item it;
    int icd, found = 0;
    fp = fopen("item.dat","r");

    if(fp == NULL)
    {
        printf("\n ERROR IN OPENING FILE...");
        exit(0);
    }

    fptr = fopen("temp.dat","w");

    if(fptr == NULL)
    {
        printf("\n ERRROR IN OPENING FILE...");
        exit(0);
    }

    printf("\n ENTER THE ITEM CODE TO DELETE");
    scanf("%d", &icd);

    while(1)
    {
        fscanf(fp,"%d", &it.itemcode);

        if(it.itemcode == 0)
            break;

        if(it.itemcode == icd)
        {
            found = 1;
            fscanf(fp,"%s", it.name);
            fscanf(fp,"%lf", it.price);
        }

        else
        {
            fscanf(fp,"%s", it.name);
            fscanf(fp,"%lf", &it.price);
            fprintf(fptr,"%d\t%s\t%lf\n", it.itemcode, it.name, it.price);
        }
    }

    fprintf(fptr,"%d", 0);
    fclose(fptr);
    fclose(fp);

    if (found == 0)
        printf("\n RECORD NOT FOUND...");

    else
    {
        fp = fopen("item.dat","w");

        if (fp == NULL)
        {
            printf("\n ERROR IN OPENING FILE...");
            exit(0);
        }

    fptr = fopen("temp.dat", "r");

    if(fptr == NULL)
    {
        printf("\n ERROR IN OPENING FILE...");
        exit(0);
    }

    while(1)
    {
        fscanf(fptr,"%d", &it.itemcode);

        if(it.itemcode == 0)
            break;

        fscanf(fptr,"%s", it.name);
        fscanf(fptr,"%lf", &it.price);
        fprintf(fp,"%d\t%s\t%lf\n", it.itemcode, it.name, it.price);
    }

    fprintf(fp,"%d", 0);
    fclose(fptr);
    fclose(fp);
    }
}
