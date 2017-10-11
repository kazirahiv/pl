#include<stdio.h>
int main(){
int m, b;
scanf("%d %d", &m, &b);
if((m==12 && b>=22)||(m ==1 && b <=19)){
printf("Capricorn");
}
else if((m ==1 && b>=20)||(m ==2 && b <=17)){
printf("Aquaris");
}
else if((m ==2 && b>=18)||(m ==3 && b <=9)){
printf("Pisces");
}
else if((m ==3 && b>=20)||(m==4 && b <=19)){
printf("Aries");
}
else if((m ==4 && b>=20)||(m ==5 && b <=20)){
printf("Taurus");
}
else if((m ==5 && b>=21)||(m ==6 && b <=20)){
printf("Gemini");
}
else if((m ==6 && b>=21)||(m ==7 && b <=22)){
printf("Cancer");
}
else if((m ==7 && b>=23)||(m == 8 && b <=22)){
printf("Leo");
}
else if((m == 8 && b>=23)||(m == 9 && b <= 22)){
printf("Virgo");
}
else if((m == 9 && b>=23)||(m ==10 && b <= 22)){
printf("Libra");
}
else if((m ==10 && b>=23)||(m == 11 && b <= 21)){
printf("Scorpio");
}
else if((m ==11 && b>=22)||(m ==12 && b <=21)){
printf("Sagittarius");
}
}
