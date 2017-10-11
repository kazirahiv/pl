#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include</home/kazirahiv/hagu.h>
#include<string.h>

struct person
{
char phonenumber[20];
char name[50];
float amount;
}s;

int printMenu(){


    char choice;

		printf("\n");
		printf(" 1.Add new records\n");
		printf(" 2.List of records\n");
		printf(" 3.Modify records\n");
		printf(" 4.Payment update\n");
		printf(" 5.Search records\n");
		printf(" 6.Delete records\n");
		printf(" 7.Exit\n");

    printf("\n Enter choice: ");
    scanf("%s", &choice);
    return choice;

}
void addrecords();
void listrecords();
void modifyrecords();
void deleterecords();
void searchrecords();
void payment();




int main()
{
    char username[30];
    char password[30];
    int k,i=0;
    int n;

    printf("Press.\n1.Admin Login\n2.Customer Balance check.\n\n--> ");
    scanf("%d",&n);


    if(n==1){
    printf(" Username: ");
    scanf("%s",username);
    printf(" Password: ");
    scanf("%s",password);

    if(strcmp(username,"msn")==0)
    {
        if(strcmp(password,"123")==0)
        {
            i=1;

        }

    }}

    if(i==1){
        system("cls");
    do {

        printf("\n\n\t\t\t\t WELCOME ADMIN ");
        k = printMenu();
        switch(k){
            case '1':
			    addrecords();
				break;
			case '2':
				listrecords();
				break;
			case '3':
				modifyrecords();
				break;
			case '4':
				paymentupdate();
				break;
			case '5':
				searchrecords();
				break;
			case '6':
				deleterecords();
				break;


			case '7':
			    system("cls");
                printf("Thank you\nGood Bye!\n");
                exit(0);
                break;

			default:
				system("cls");
				printf("Incorrect Input!\n");

				break;
        }


    } while (k!=7);}

    else if (n==2){
        searchrecords();
    }else{
    printf("Wrong input.");
    }
    return 0;
}







void addrecords()
{
	FILE *fp;
	char test;
	fp=fopen("data.txt","a");
	if(fp==NULL)
	{   fp=fopen("data.txt","w");
		system("cls");

	}
	while(1)
	{
		system("cls");
		printf("\t\t\tREMEMBER!!\n\t\t\tAccount ID is Phone number .\n");
		printf("\n Enter phone number:");
		scanf("%s",&s.phonenumber);
		printf("\n Enter name:");
		fflush(stdin);
		scanf("%s",&s.name);
		printf("\n Enter amount:");
		scanf("%f",&s.amount);
        fwrite(&s,sizeof(s),1,fp);
		fflush(stdin);
		system("cls");
		printf("1 record successfully added");
		printf("\n Press esc key to exit\nAny other key to add other record:");
        test=getche();
		if(test==27)
			break;
	}
	fclose(fp);
}
void listrecords()
{
	FILE *fp;
	int i;
	if((fp=fopen("data.txt","r"))==NULL)
		exit(0);
	system("cls");
	printf("Phone Number\t\tUser Name\t\t\tAmount\n");
	for(i=0;i<79;i++)
		printf("-");
	while(fread(&s,sizeof(s),1,fp)==1)
	{
		printf("\n%-10s \t\t %-20s \t\t Tk. %.2f /-",s.phonenumber,s.name,s.amount);
	}
	printf("\n");
	for(i=0;i<79;i++)
		printf("-");
		printf("\n\n");

fclose(fp);

}
void deleterecords()
{
	FILE *fp,*tfp;
	int i;
	char phonenumber[20];
	if((tfp=fopen("temp.txt","w+"))==NULL)
	exit(0);
	if((fp=fopen("data.txt","rb"))==NULL)
	exit(0);
	system("cls");
	printf("Enter the phone number to be deleted: ");
	fflush(stdin);
	scanf("%s",phonenumber);
	while(fread(&s,sizeof(s),1,fp)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{       i=0;


			continue;

		}
		else{
            fwrite(&s,sizeof(s),1,tfp);
            i=1;
		}

	}
	if(i==1)
	{       system("cls");
		printf("Phone number \"%s\" not found",phonenumber);}
		else {
            remove("data.txt");
            rename("temp.txt","data.txt");

		}

		getch();
		fclose(fp);
		fclose(tfp);



	system("cls");
	printf("\nThe Number %s Successfully Deleted!\n\n",phonenumber);
	fclose(fp);
	fclose(tfp);

}
void searchrecords()
{
	FILE *fp;
	char phonenumber[20];

	fp=fopen("data.txt","r");
	if(fp==NULL)
		exit(0);
	fflush(stdin);
	system("cls");
	printf("Enter Phone Number to search: ");
	scanf("%s", phonenumber);
	while(fread(&s,sizeof(s),1,fp)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{	system("cls");
			printf("Record Found");
			printf("\nPhonenumber: %s\nName: %s\nAmount: Tk.%0.2f\n\n\n",s.phonenumber,s.name,s.amount);

        break;
		}
		else if(strcmp(s.phonenumber,phonenumber)==1)
		{	system("cls");
			printf("Requested Phone Number Not found.\n\n");
		}
	}
	fclose(fp);
}
void modifyrecords()
{
	FILE *fp;
	char phonenumber[20];
    int size=sizeof(s);
	if((fp=fopen("data.txt","rb+"))==NULL)
		exit(0);
	system("cls");
	printf("Enter phone number to modify:");
	scanf("%s",phonenumber);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,fp)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{
			system("cls");
			printf("\n Enter new phone number:");
			scanf("%s",&s.phonenumber);
			printf("\n Enter new name: ");
			fflush(stdin);
			scanf("%s",&s.name);
			printf("\n Enter new amount: ");
			scanf("%f",&s.amount);
			fseek(fp,-size,SEEK_CUR);
			fwrite(&s,sizeof(s),1,fp);
			break;
		}
	}
	fclose(fp);
}
void paymentupdate()
{
	FILE *fp;
	char phonenumber[20];
	long int size=sizeof(s);
	float amt;
	int i;
	if((fp=fopen("data.txt","rb+"))==NULL)
		exit(0);
	system("cls");
	printf("Enter phone number for payment update: ");
	scanf("%s",phonenumber);
	fflush(stdin);
	while(fread(&s,sizeof(s),1,fp)==1)
	{
		if(strcmp(s.phonenumber,phonenumber)==0)
		{
			system("cls");
			printf("\n Phone No.: %s",s.phonenumber);
			printf("\n Name: %s",s.name);
			printf("\n Current Amount: %f",s.amount);
			printf("\n");
			for(i=0;i<79;i++)
				printf("-");
			printf("\n\nEnter amount of payment :");
			fflush(stdin);
			scanf(" %f",&amt);
			s.amount=s.amount-amt;
			fseek(fp,-size,SEEK_CUR);
			fwrite(&s,sizeof(s),1,fp);
			break;
		}

	}
	system("cls");
	printf("The Payment is Updated.\n");

	fclose(fp);
}

