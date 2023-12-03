//countdown timer
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void delay(int seconds);
//main fn starts here
int main()
{
  int timer,current;
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
   
    printf("Times up!");
    printf("\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a\a");
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
