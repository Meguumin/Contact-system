 #include <stdio.h>
#include <term.h>
#include <string.h>
#include<sys/wait.h>

#include <unistd.h>

int main(void) {
  char empty[15];
  char name1[15];
  char name2[15];
  char name3[15];
  char name4[15];
  char name5[15];
  char clear;
  int age;
  int back;
  int clearcon;
  int goback;
  int namecount = 0;
   int choice = 0;
   int callchoice = 0;
  strcpy(name3, empty);
 begin:
 choice = choice - choice;
  printf("\e[1;1H\e[2J");
  printf("                                         1.Contacts Page\n\n");
  printf("                                         2.Add Contacts\n\n");
  printf("                                         3.Delete Contacts\n\n");
  printf("                                         4.Call Contacts\n\n");
  printf("                                           Enter:");
 scanf("%d", &choice);
 
 if(choice == 1)
  {
    printf("\e[1;1H\e[2J");
  printf("Contact 1: %s \n", name1);
  printf("Contact 2: %s \n", name2);
  printf("Contact 3: %s \n", name3);
  printf("Contact 4: %s \n", name4);
  printf("Contact 5: %s \n", name5);

  printf("Go Back?(Press 5)\n");
  scanf("%d", &back);
  if(back == 5){
    goto begin;
  }
  }
  if(choice == 2 && namecount == 0 ){
    printf("\e[1;1H\e[2J");
    printf("                                         Type name:");
    scanf("%s", name1);
    printf("\e[1;1H\e[2J");
    printf("added name\n");
    namecount = namecount + 1;
    goto begin;
  }

  if(choice == 2 && namecount == 1 ){
    printf("\e[1;1H\e[2J");
    printf("                                         Type name:");
    scanf("%s", name2);
    printf("\e[1;1H\e[2J");
    printf("added name\n");
    namecount = namecount + 1;
   goto begin;
  } if(choice == 2 && namecount == 2 ){
    printf("\e[1;1H\e[2J");
    printf("                                         Type name:");
    scanf("%s", name3);
    printf("\e[1;1H\e[2J");
    printf("added name\n");
    namecount = namecount + 1;
    goto begin;
  }

  if(choice == 2 && namecount == 3 ){
    printf("\e[1;1H\e[2J");
    printf("                                         Type name:");
    scanf("%s", name4);
    printf("\e[1;1H\e[2J");
    printf("added name\n");
    namecount = namecount + 1;
   goto begin;
  }
  
  if(choice == 2 && namecount == 4 ){
    printf("\e[1;1H\e[2J");
    printf("                                         Type name:");
    scanf("%s", name5);
    printf("\e[1;1H\e[2J");
    printf("added name\n");
    namecount = namecount + 1;
   goto begin;
  }
  if(choice == 3){
    printf("\e[1;1H\e[2J");
    printf("What contact do you want to delete?\n");
    printf("(1)Contact 1: %s \n", name1);
    printf("(2)Contact 2: %s \n", name2);
    printf("(3)Contact 3: %s \n", name3);
    printf("(4)Contact 4: %s \n", name4);
    printf("(5)Contact 5: %s \n", name5);

    scanf("%d", &clearcon);
    printf("\e[1;1H\e[2J");
    if(clearcon == 1){
      strcpy(name1, empty);
      printf("This contact has been deleted\n");
      printf("go back?(1)");
      scanf("%d", &goback);
      if(goback == 1){
        goto begin;
      }
     
    }
    if(clearcon == 2){
      strcpy(name2, empty);
      printf("This contact has been deleted\n");
       printf("go back?(1)");
      scanf("%d", &goback);
      if(goback == 1){
        goto begin;
      }
    }
    if(clearcon == 3){
      strcpy(name3, empty);
      printf("This contact has been deleted\n");
     printf("go back?(1)");
      scanf("%d", &goback);
      if(goback == 1){
        goto begin;
      }
    }
    if(clearcon == 4){
      strcpy(name4, empty);
      printf("This contact has been deleted\n");
      printf("go back?(1)");
      scanf("%d", &goback);
      if(goback == 1){
        goto begin;
      }
    }
    if(clearcon == 5){
      strcpy(name5, empty);
      printf("This contact has been deleted\n");
         printf("go back?(1)");
      scanf("%d", &goback);
      if(goback == 1){
        goto begin;
      }
     
    }
    
   
  }
    if(choice == 4){
      printf("\e[1;1H\e[2J");
      printf("What contact do you want to call?\n");
      printf("(1)Contact 1: %s \n", name1);
      printf("(2)Contact 2: %s \n", name2);
      printf("(3)Contact 3: %s \n", name3);
      printf("(4)Contact 4: %s \n", name4);
      printf("(5)Contact 5: %s \n", name5);
      printf("Enter:");
      scanf("%d", &callchoice);
      if(callchoice == 1){
        printf("\e[1;1H\e[2J");
        printf("\nCalling %s\n", name1);
        sleep(2);
        printf("%s didnt answer\n", name1);
        printf("\e[1;1H\e[2J");
        printf("go back?(1)\n");
      scanf("%d", &goback);
      if(goback == 1){
        goto begin;
      }     
      }
      if(callchoice == 2){
        printf("\e[1;1H\e[2J");
        printf("\nCalling %s\n", name2);
        sleep(2);
        printf("%s didnt answer\n", name2);
        printf("\e[1;1H\e[2J");
        printf("go back?(1)\n");
      scanf("%d", &goback);
      if(goback == 1){
        goto begin;
      }     
      }
      if(callchoice == 3){
        printf("\e[1;1H\e[2J");
        printf("\nCalling %s\n", name3);
        sleep(2);
        printf("%s didnt answer\n", name3);
        printf("\e[1;1H\e[2J");
        printf("go back?(1)\n");
      scanf("%d", &goback);
      if(goback == 1){
        goto begin;
      }     
      }
      if(callchoice == 4){
        printf("\e[1;1H\e[2J");
        printf("\nCalling %s\n", name4);
        sleep(2);
        printf("%s didnt answer\n", name4);
        printf("\e[1;1H\e[2J");
        printf("go back?(1)\n");
      scanf("%d", &goback);
      if(goback == 1){
        goto begin;
      }     
      }
        if(callchoice == 5){
        printf("\e[1;1H\e[2J");
        printf("\nCalling %s\n", name5);
        sleep(2);
        printf("%s didnt answer\n", name5);
        printf("\e[1;1H\e[2J");
        printf("go back?(1)\n");
      scanf("%d", &goback);
      if(goback == 1){
        goto begin;
      }     
      }


  return 0;
  }
}
