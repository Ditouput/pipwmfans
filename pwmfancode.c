#include <stdio.h>
#include <stdint.h>

#include <pigpio.h>

int main(int argc, char *argv[])
{
   if (gpioInitialise() < 0) return 1;

   printf("start piscope\n");
   printf("press return to continue\n");
   getchar();

   gpioHardwarePWM(12, 5000, 500000);
   gpioHardwarePWM(13, 10000, 100000);

   printf("STOP piscope\n");
   printf("press return to continue\n");
   getchar();

   gpioHardwarePWM(12, 0, 0);
   gpioHardwarePWM(13, 0, 0);

   gpioTerminate();

   return 0;
}
