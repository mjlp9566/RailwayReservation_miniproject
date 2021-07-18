#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
void availability();
int FirstClass=100;
int SecondClass=100;
int ThirdClass=100;
int tejas=50,chal=50;
int tmb=50,mumbai=50;
int vaigai=50,coi=50;
int nellur=50,ten_jam=50,ten_bil=50;
int guruvayur=50;
int ers=50;
int jan=50;
int chemmozhi=50;
int ram=50;
int pudu=50;
struct railway{
int ticket_id;
char name[20];
int age;
long long int phone;
char address[20];
char source[50];
char destination[50];
int birth;
char _birth[20];
int n;//TO get train number
int tick_count;
char _class[10];
int sz;
int clas;
}passenger[100];
int booking(int i){
passenger[i].sz=0;
FILE *fp;
fp=fopen("sample.txt","a+");
int price;
int j=0;
w:
 printf("\t\t\t****************BOOKING****************\n\n\n");
 printf("\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4);
 printf("\t\t\t%c                                 \t%c\n",4,4);
 printf("\t\t\t%c chennai <->  madurai----->Rs.500\t%c\n",4,4);
 printf("\t\t\t%c trichy  <->  coimbatore-->Rs.300\t%c\n",4,4);
 printf("\t\t\t%c erode   <->  tirunelveli->Rs.350\t%c\n",4,4);
 printf("\t\t\t%c                                 \t%c\n",4,4);
 printf("\t\t\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n",4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4);

 printf("Enter the Source:");
 scanf("%s",passenger[i].source);
 printf("\nEnter the Destination:");
 scanf("%s",passenger[i].destination);
 
if((strcmp(passenger[i].source,"chennai")==0 || strcmp(passenger[i].source,"madurai")==0)&& (strcmp(passenger[i].destination,"madurai" )==0 || strcmp(passenger[i].destination,"chennai")==0))
{
 printf("\n\n\t|--------------------------------------------------------------|\n");
 printf("\t|s.no|Train no|    Train Name     |    Seats Available         |\n");
 printf("\t|--------------------------------------------------------------|\n");
 printf("\t| 1  | 22671  | Tejas Express     |        %d                  |\n",tejas);
 printf("\t| 2  | 22657  | TBM NCJ Express   |        %d                  |\n",tmb);
 printf("\t| 3  | 12635  | Vaigai Express    |        %d                  |\n",vaigai);
 printf("\t| 4  | 12631  | Nellai Express    |        %d                  |\n",nellur);
 printf("\t| 5  | 16127  | Guruvayur Express |        %d                  |\n",guruvayur);
 printf("\t|--------------------------------------------------------------|\n");
q:
printf("\nEnter Train.no: ");
    scanf("%d",&passenger[i].n);
    if(passenger[i].n!=22671 && passenger[i].n!=22657 &&passenger[i].n!=12635 && passenger[i].n!=12631 && passenger[i].n!=16127){
printf("\n Enter a Valid Train.no\n");
    goto q;
    }

}
else if((strcmp(passenger[i].source,"trichy")==0 ||strcmp(passenger[i].source,"coimbatore")==0)&&(strcmp(passenger[i].destination,"trichy" )==0 || strcmp(passenger[i].destination,"coimbatore")==0))
{
 printf("\n\n\t\|--------------------------------------------------------------|\n");
 printf("\t|s.no|Train no|    Train Name        |    Seats Available      |\n");
 printf("\t|--------------------------------------------------------------|\n");
 printf("\t| 1  | 16188 | ERS Karaikkal Express |        %d               |\n",ers);
 printf("\t| 2  | 12084 | JAN Shatabdi Express  |        %d               |\n",jan);
 printf("\t| 3  | 16616 | Chemmozhi Express     |        %d               |\n",chemmozhi);
 printf("\t| 4  | 16618 | Rameshwaram Express   |        %d               |\n",ram);
 printf("\t| 5  | 16858 | Puducherry Express    |        %d               |\n",pudu);
 printf("\t|--------------------------------------------------------------|\n");
r:
printf("\nEnter Train.no: ");
    scanf("%d",&passenger[i].n);
    if(passenger[i].n!=16188 && passenger[i].n!=12084 &&passenger[i].n!=16616 && passenger[i].n!=16618 && passenger[i].n!=16858){
printf("\n Enter a Valid Train.no\n");
    goto r;
    }
   
}

else if(strcmp(passenger[i].source,"tirunelveli")==0 ||strcmp(passenger[i].source,"erode")==0 && strcmp(passenger[i].destination,"erode" )==0 || strcmp(passenger[i].destination,"tirunelveli")==0)
{
 printf("\n\n\t\|-------------------------------------------------------|\n");
 printf("\t|s.no|Train no|    Train Name       |  Seats Available  |\n");
 printf("\t|-------------------------------------------------------|\n");
 printf("\t| 1  | 11022  | Chalukya Express    |        %d         |\n",chal);
 printf("\t| 2  | 22667  | Coimbatore Express  |        %d         |\n",coi);
 printf("\t| 3  | 16340  | Mumbai Express      |        %d         |\n",mumbai);
 printf("\t| 4  | 16787  | TEN Jammu Express   |        %d         |\n",ten_jam);
 printf("\t| 5  | 22620  | TEN Bilaspur Express|        %d         |\n",ten_bil);
 printf("\t|-------------------------------------------------------|\n");
t:
printf("\nEnter Train.no: ");
    scanf("%d",&passenger[i].n);
    if(passenger[i].n!=11022 && passenger[i].n!=22667 &&passenger[i].n!=16340 && passenger[i].n!=16787 && passenger[i].n!=22620){
printf("\n Enter a Valid Train.no\n");
    goto t;
    }

}
else{
passenger[i].source[0]='\0';
passenger[i].destination[0]='\0';
printf("\n\n\n\n\n\n\t\t\tDestination Entered is Not Valid");
sleep(4);
system("cls");
goto w;
return;
}



system("cls");

printf("\n\t\t\t\t1.FirstClass\n\n\t\t\t\t2.SecondClass\n\n\t\t\t\t3.ThirdClass\n\n");
printf("Choose The Class:");
scanf("%d",&passenger[i].clas);
system("cls");
printf("\t\tEnter no.of Seats:");
scanf("%d",&passenger[i].tick_count);
int l=passenger[i].tick_count;


for(j=1;j<=l;j++){
printf("\n\nEnter Your Details\n");
printf("------------------\n");
if(j>=2){
	strcpy(passenger[i].destination,passenger[i-1].destination);
	strcpy(passenger[i].source,passenger[i-1].source);
	passenger[i].n=passenger[i-1].n;
}
fflush(stdin);
printf("\t\tEnter the name:");
gets(passenger[i].name);
printf("\t\t(1-upper,2-middle,3-lower)Choose the Birth:");
scanf("%d",&passenger[i].birth);
if(passenger[i].birth==1)
strcpy(passenger[i]._birth,"Upper");
else if(passenger[i].birth==2){
strcpy(passenger[i]._birth,"Middle");}
else if(passenger[i].birth==3){
strcpy(passenger[i]._birth,"Lower");
}

printf("\t\tEnter the age:");
scanf("%d",&passenger[i].age);
if (passenger[i].age>60)
passenger[i].sz==1;
printf("\t\tEnter the phone.no:");
scanf("%lld",&passenger[i].phone);
printf("\t\tEnter the Address:");
scanf("%s",&passenger[i].address);
srand(time(0));
passenger[i].ticket_id=rand()+230;

if(passenger[i].n==22671)
  tejas--;
else if(passenger[i].n==22657)
  tmb--;
else if(passenger[i].n==12635)
  vaigai--;
else if(passenger[i].n==12631)
  nellur--;
else if(passenger[i].n==16127)
  guruvayur--;
else if(passenger[i].n==16188)
  ers--;
else if(passenger[i].n==12084)
  jan--;
else if(passenger[i].n==16616)
  chemmozhi--;
else if(passenger[i].n==16618)
  ram--;
else if(passenger[i].n==16858)
  pudu--;
else if(passenger[i].n==11022)
  chal--;
else if(passenger[i].n==22667)
  coi--;
else if(passenger[i].n==16340)
  mumbai--;
else if(passenger[i].n==16787)
  ten_jam--;
else if(passenger[i].n==22620)
  ten_bil--;


   
    
    if(strcmp(passenger[i].source,"chennai")==0 || strcmp(passenger[i].source,"madurai")==0 && strcmp(passenger[i].destination,"madurai" )==0 || strcmp(passenger[i].destination,"chennai")==0)
    price=500;
    else if(strcmp(passenger[i].source,"trichy")==0 ||strcmp(passenger[i].source,"coimbatore")==0 && strcmp(passenger[i].destination,"trichy" )==0 || strcmp(passenger[i].destination,"coimbatore")==0)
    price=300;
    else if(strcmp(passenger[i].source,"salem")==0 ||strcmp(passenger[i].source,"bangalore")==0 && strcmp(passenger[i].destination,"bangalore" )==0 || strcmp(passenger[i].destination,"salem")==0)
    price=600;
    else if(strcmp(passenger[i].source,"tirunelveli")==0 ||strcmp(passenger[i].source,"erode")==0 && strcmp(passenger[i].destination,"erode" )==0 || strcmp(passenger[i].destination,"tirunelveli")==0)
    price=350;
    if(passenger[i].sz==1){
    price=price-100;}
	fprintf(fp,"%s %d %d %s %s %d %s\n",passenger[i].name,passenger[i].ticket_id,passenger[i].age,passenger[i].source,passenger[i].destination,passenger[i].n,passenger[i]._birth);
	i++;
	}

	int o;
	  system("cls");
    system("Color f2");
	for(o=0;o<i;o++){
  system("cls");
    printf("***********************************************************************\n");
    printf("*\t\t\t TICKET BOOKED SUCCESSFULLY\n");
    printf("*\t\t\t --------------------------\n");
    printf("*\t\tName:%s\n",passenger[o].name);
    printf("*\t\tAge:%d\n",passenger[o].age);
    printf("*\t\tPhone:%lld\n",passenger[o].phone);
    printf("*\t\tAddress:%s\n",passenger[o].address);
    printf("*\t\tTrain_No:%d\n",passenger[o].n);
    printf("*\t\tBirth:%s\n",passenger[o]._birth);
    printf("*\t\tTicket_id:%d\n",passenger[o].ticket_id);
    printf("*\t\tprice:%d\n",price);
    printf("***********************************************************************");
     getch();
}
 fclose(fp);
   
    system("cls");
   

}

void availability(){

printf("\n");
printf("\n");
printf("\n");
printf("\n\t\t\t\t\t#######AVAILABILITY#######\n\n ");

printf("\t\t\t\tTejas Express:%d\n",tejas);
printf("\t\t\t\tTBM NCJ Express :%d\n",tmb);
printf("\t\t\t\tVaigai Express:%d\n",vaigai);
printf("\t\t\t\tNellur Express:%d\n",nellur);
printf("\t\t\t\tGuruvayur Express:%d\n",guruvayur);
printf("\t\t\t\tERS Karaikal Express:%d\n",ers);
printf("\t\t\t\tJAN Shatabdi Express:%d\n",jan);
printf("\t\t\t\tChemmozhi Express:%d\n",chemmozhi);
printf("\t\t\t\tRameswaram Express:%d\n",ram);
printf("\t\t\t\tPuducherry Express:%d\n",pudu);
printf("\t\t\t\tChalukya Express:%d\n",chal);
printf("\t\t\t\tCoimbatore Express:%d\n",coi);
printf("\t\t\t\tMumbai Express:%d\n",mumbai);
printf("\t\t\t\tTEN Jammu Express:%d\n",ten_jam);
printf("\t\t\t\tTEN Bilaspur Express:%d\n",ten_bil);


getch();
system("cls");
}
void cancellation(int i){
int id;
FILE *fp;
int test=0;
fp=fopen("sample.txt","r");
  FILE *fp1;
  fp1=fopen("sample1.txt","w");
  printf("ENter the id:");
  scanf("%d",&id);
  while(fscanf(fp,"%s %d %d %s %s %d %s\n",passenger[i].name,&passenger[i].ticket_id,&passenger[i].age,passenger[i].source,passenger[i].destination,&passenger[i].n,passenger[i]._birth)!=EOF){
if(passenger[i].ticket_id!=id){
 fprintf(fp1,"%s %d %d %s %s %d %s\n",passenger[i].name,passenger[i].ticket_id,passenger[i].age,passenger[i].source,passenger[i].destination,passenger[i].n,passenger[i]._birth);}
else{
test++;
system("color 4");
 printf("\n\t\tTicket Cancelled Successfully");
 getch();
}  
}
if(passenger[i].n==22671)
  tejas++;
else if(passenger[i].n==22657)
  tmb++;
else if(passenger[i].n==12635)
  vaigai++;
else if(passenger[i].n==12631)
  nellur++;
else if(passenger[i].n==16127)
  guruvayur++;
else if(passenger[i].n==16188)
  ers++;
else if(passenger[i].n==12084)
  jan++;
else if(passenger[i].n==16616)
  chemmozhi++;
else if(passenger[i].n==16618)
  ram++;
else if(passenger[i].n==16858)
  pudu++;
else if(passenger[i].n==11022)
  chal++;
else if(passenger[i].n==22667)
  coi++;
else if(passenger[i].n==16340)
  mumbai++;
else if(passenger[i].n==16787)
  ten_jam++;
else if(passenger[i].n==22620)
  ten_bil++;
fclose(fp);
fclose(fp1);
remove("sample.txt");
rename("sample1.txt","sample.txt");
if(test==0){
printf("\n\t\t\tPassenger ID not found!!!");
getch();
}
system("cls");
}
void chart(int i){
FILE *fp;
fp=fopen("sample.txt","r");
//system("Color 4F");
system("Color fc");
//system("Color f2");
 
    printf("\n");
    printf("\n");
    printf("\n\t\t\tPASSENGERS LIST\n");
    printf("\t\t\t---------------\n");
   printf("%s %10s %10s %10s %10s %10s %10s\n","Name","Ticket ID","Age","Source","Destination","Train.No","Birth");
   printf("%s %10s %10s %10s %10s %10s %10s\n","----","---------","---","------","-----------","--------","-----");
   while(fscanf(fp,"%s %d %d %s %s %d %s\n",passenger[i].name,&passenger[i].ticket_id,&passenger[i].age,passenger[i].source,passenger[i].destination,&passenger[i].n,passenger[i]._birth)!=EOF){

 printf("%s %10d %10d %10s %10s %10d %10s\n",passenger[i].name,passenger[i].ticket_id,passenger[i].age,passenger[i].source,passenger[i].destination,passenger[i].n,passenger[i]._birth);
  }
    getch();
    system("color");
    system("cls");  
fclose(fp);

}

int main(){
int opt;
int i=0;
int p;
do{
 system("Color 0A");
printf("\n\t\t**************************************************\n");
printf("\t\t\t   RAILWAY RESERVATION SYSTEM ");
printf("\n\t\t**************************************************");
printf("\n\t\t\t\t1.Booking\n\n\t\t\t\t2.AvailabilityChecking\n\n\t\t\t\t3.Cancellation\n\n\t\t\t\t4.Chart\n\n\t\t\t\t5.Exit\n");
printf("\nEnter the option:");
scanf("%d",&opt);
switch(opt){
   case 1:
    system("cls");
    booking(i);
    i++;
    break;
   case 2:
    system("cls");
    availability();
    break;
   case 3:
cancellation(i);
i--;
break;
   case 4:
system("cls");
    chart(i);
   
    break;
}
}while(opt!=5);
return 0;
 
}
