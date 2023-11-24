//countdown timer
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <windows.h>
void delay(int seconds);
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
    return 0;
  }

  //to initialize the starting time and ending time
  start=time(NULL);
  stop=start+timer;
//to display the countdown
   while(time(NULL)<stop)
     {
        delay(1);
        
        
       current=stop-time(NULL);
       PlaySound("demo.wav", NULL, SND_ASYNC);
    //    if(current<=3){
    //     MessageBeep(MB_OK);
    //    }
    //    else{
    //     MessageBeep(MB_ICONINFORMATION);
    //     // MessageBeep(MB_ICONQUESTION);
    //    }
    //    printf("\a");
       printf("Remaining time: %d s\n",current+1);
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