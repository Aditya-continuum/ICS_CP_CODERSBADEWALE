//countdown timer
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void delay();
//main fn starts now here
//efirnging
int main()
{
  int timer,current,i=0;
  time_t start,stop;
  printf("Enter the countdown time in seconds:");
  scanf("%d",&timer);
  //error handling
  if(timer<=0)
  {
    printf("Wrong input,Please enter a positive integer.");
    return 2;
  }

  //to initialize the starting time and ending time
  start=time(NULL);
  stop=start+timer;
//to display the countdown
   while(time(NULL)<stop)
     {
       current=stop-time(NULL);
       printf("\a");
       printf("Remaining time: %d s\n",current);
       delay(1);
     }
    for(int i=0;i<250;i++)
    {
        printf("\a");
    }
    printf("Times up!");
  return 0;
}
void delay(int seconds)
{
  int starting_time=time(NULL);
  while(time(NULL)-starting_time<seconds)
    {
      //just for passing the time required
      }
}
