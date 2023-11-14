// Function to check balance
// in users account
void checkbalance(char username2[])
{
 system("cls");
 FILE* fm;
 struct money m1;
 char ch;
 int i = 1, summoney = 0;

 // Opening amount file record
 fm = fopen("mon.txt", "rb");

 int k = 5, l = 10;
 int m = 30, n = 10;
 int u = 60, v = 10;

 gotoxy(30, 2);
 printf("==== BALANCE DASHBOARD ====");
 gotoxy(30, 3);
 printf("***************************");
 gotoxy(k, l);
 printf("S no.");
 gotoxy(m, n);
 printf("TRANSACTION ID");
 gotoxy(u, v);
 printf("AMOUNT");

 // Reading username to
 // fetch the correct record
 while (fread(&m1, sizeof(m1), 1, fm))  
 {
   if (strcmp(username2,  
              m1.usernameto) == 0)  
   {
     gotoxy(k, ++l);
     printf("%d", i);
     i++;
     gotoxy(m, ++n);
     printf("%s", m1.userpersonfrom);

     gotoxy(u, ++v);
     printf("%d", m1.money1);
     // adding and
     // finding total money
     summoney = summoney + m1.money1;
   }
 }

 gotoxy(80, 10);
 printf("TOTAL AMOUNT");

 gotoxy(80, 12);
 printf("%d", summoney);

 getch();

 // Closing file after  
 // reading it
 fclose(fm);
 display(username2);
}
