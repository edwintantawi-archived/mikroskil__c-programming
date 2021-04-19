#include <stdio.h>

int main()
{
  int startHour, startMinute,endHour,
  endMinute, totalHour, totalMinute, totalTime;

  //input 
  printf("Time Start: ");
  scanf("%d:%d", &startHour, &startMinute);
  printf("Time End: ");
  scanf("%d:%d", &endHour, &endMinute);

  // condition hours
  if(startHour < endHour){
    totalHour = endHour - startHour;
  }else{
    totalHour = 12 - startHour + endHour;
  }
  totalMinute = startMinute + endMinute;
  if( totalMinute < 60 ){
    totalHour -= 1;
  }

  // condition Minute
  if(totalMinute / 60 >= 1 ){
    totalMinute = totalMinute % 60;
    totalHour += totalMinute / 60;
  } else if (totalMinute / 60 <= 1 && startMinute != 00){
    totalMinute = 60 - totalMinute;
  }else{
    totalHour += 1;
  }

  //output 
  printf("Total: %d Jam %d Menit\n", totalHour, totalMinute);

  return 0;
}












// int main()
// {
//   float tinggi, berat, bmi;

//   // get input
//   printf("Tinggi = ");
//   scanf("%f", &tinggi);
//   printf("Berat = ");
//   scanf("%f", &berat);

//   //cm to meter 
//   tinggi = tinggi / 100;
//   bmi = berat / (tinggi * tinggi);

//   // output
//   printf("Output = ");
//   if (bmi <= 18.4)
//     printf("Kurus\n");
//   else if (bmi <= 25.0)
//     printf("Normal\n");
//   else
//     printf("Obesitas\n");

//   return 0;
// }


// 8


