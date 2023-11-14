// Function to create accounts 
// of users
void account(void)
{
 char password[20];
 int passwordlength, i, seek = 0;
 char ch;
 FILE *fp, *fu;
 struct pass u1;
 struct userpass p1;

 struct userpass u2;

 // Opening file to  
 // write data of a user
 fp = fopen("username.txt", "ab");

 // Inputs
 system("cls");
 printf("\n\n!!!!!CREATE ACCOUNT!!!!!");

 printf("\n\nFIRST NAME..");
 scanf("%s", &u1.fname);

 printf("\n\n\nLAST NAME..");
 scanf("%s", &u1.lname);

 printf("\n\nFATHER's NAME..");
 scanf("%s", &u1.fathname);

 printf("\n\nMOTHER's NAME..");
 scanf("%s", &u1.mothname);

 printf("\n\nADDRESS..");
 scanf("%s", &u1.address);

 printf("\n\nACCOUNT TYPE");
 scanf("%s", &u1.typeaccount);

 printf("\n\nDATE OF BIRTH..");
 printf("\nDATE-");
 scanf("%d", &u1.date);
 printf("\nMONTH-");
 scanf("%d", &u1.month);
 printf("\nYEAR-");
 scanf("%d", &u1.year);

 printf("\n\nADHAR NUMBER");
 scanf("%s", u1.adharnum);

 printf("\n\nPHONE NUMBER");
 scanf("%s", u1.pnumber);

 printf("\n\nUSERNAME.. ");
 scanf("%s", &u1.username);

 printf("\n\nPASSWORD..");

 // Taking password in the  
 // form of stars
 for (i = 0; i < 50; i++)  
 {
   ch = getch();
   if (ch != 13)  
   {
     password[i] = ch;
     ch = '*';
     printf("%c", ch);
   }
   else
     break;
 }

 // Writing to the file
 fwrite(&u1, sizeof(u1), 1, fp);

 // Closing file
 fclose(fp);

 // Calling another function  
 // after successful creation
 // of account
 accountcreated();
}
