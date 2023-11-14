// Function to transfer
// money from one user to
// another
void transfermoney(void)
{
 int i, j;
 FILE *fm, *fp;
 struct pass u1;
 struct money m1;
 char usernamet[20];
 char usernamep[20];
 system("cls");

 // Opening file in read mode to  
 // read user's username
 fp = fopen("username.txt", "rb");

 // Creating a another file  
 // to write amount along with
 // username to which amount  
 // is going to be transferred
 fm = fopen("mon.txt", "ab");

 gotoxy(33, 4);
 printf("---- TRANSFER MONEY ----");
 gotoxy(33, 5);
 printf("========================");

 gotoxy(33, 11);
 printf("FROM (your username).. ");
 scanf("%s", &usernamet);

 gotoxy(33, 13);
 printf(" TO (username of person)..");
 scanf("%s", &usernamep);

 // Checking for username if it  
 // is present in file or not
 while (fread(&u1, sizeof(u1), 1, fp))

 {
   if (strcmp(usernamep,
              u1.username) == 0)  
   {
     strcpy(m1.usernameto,
            u1.username);
     strcpy(m1.userpersonfrom,  
            usernamet);
   }
 }
 gotoxy(33, 16);

 // Taking amount input
 printf("ENTER THE AMOUNT TO BE TRANSFERRED..");
 scanf("%d", &m1.money1);

 // Writing to the file
 fwrite(&m1, sizeof(m1), 1, fm);

 gotoxy(0, 26);
 printf(
   "--------------------------------------------------"
   "--------------------------------------------");

 gotoxy(0, 28);
 printf(
   "--------------------------------------------------"
   "--------------------------------------------");

 gotoxy(0, 29);
 printf("transferring amount, Please wait..");

 gotoxy(10, 27);
 for (i = 0; i < 70; i++)
 {
   for (j = 0; j < 1200000; j++)  
   {
     j++;
     j--;
   }
   printf("*");
 }

 gotoxy(33, 40);
 printf("AMOUNT SUCCESSFULLY TRANSFERRED....");
 getch();

 // Close the files
 fclose(fp);
 fclose(fm);

 // Function to return  
 // to the home screen
 display(usernamet);
}
