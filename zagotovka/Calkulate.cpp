#include "Calkulate.h"

Calkulate::Calkulate()
{
    //ctor
}
double Calkulate::LD(double D,double L)
{
    double dv=L/D;
    cout<<D<<endl;
    cout<<L<<endl;
    if(dv>0&&dv<=4)
    {
     return LD_less4(D,L);
    }else if(dv>4&&dv<=8)
    {
      return LD_less8(D,L);
    }else if(dv>8&&dv<=12)
    {
      return LD_less12(D,L);
    }else if(dv>12&&dv<=20)
    {
      return LD_less20(D,L);
    }else return dv;

}
double Calkulate::LD_less4(double D,double L)
{
if(D>0&&D<=5&&L>0&&L<=20)
{
 return 7;
}else if(D>5&&D<=6&&L>0&&L<=24)
{
 return 8;
}else if(D>6&&D<=7&&L>0&&L<=28)
{
 return 9;
}else if(D>7&&D<=8&&L>28&&L<=32)
{
 return 10;
}else if(D>8&&D<=9&&L>32&&L<=36)
{
 return 11;
}else if(D>9&&D<=10&&L>36&&L<=40)
{
 return 12;
}else if(D>10&&D<=11&&L>40&&L<=44)
{
 return 13;
}else if(D>11&&D<=12&&L>44&&L<=48)
{
 return 14;
}else if(D>12&&D<=13&&L>48&&L<=52)
{
 return 15;
}else if(D>13&&D<=14&&L>52&&L<=56)
{
 return 16;
}else if(D>14&&D<=15&&L>56&&L<=60)
{
 return 17;
}else if(D>15&&D<=16&&L>60&&L<=64)
{
 return 18;
}else if(D>16&&D<=17&&L>64&&L<=68)
{
 return 19;
}else if(D>17&&D<=18&&L>68&&L<=72)
{
 return 20;
}else if(D>18&&D<=19&&L>72&&L<=76)
{
 return 21;
}else if(D>19&&D<=20&&L>76&&L<=80)
{
 return 22;
}else if(D>20&&D<=21&&L>0&&L<=84)
{
 return 24;
}else if(D>21&&D<=23&&L>0&&L<=92)
{
 return 26;
}else if(D>23&&D<=24&&L>0&&L<=96)
{
 return 27;
}else if(D>24&&D<=25&&L>0&&L<=100)
{
 return 28;
}else if(D>25&&D<=26&&L>0&&L<=104)
{
 return 30;
}else if(D>26&&D<=27&&L>0&&L<=108)
{
 return 30;
}else if(D>27&&D<=28&&L>0&&L<=112)
{
 return 32;
}else if(D>28&&D<=30&&L>0&&L<=120)
{
 return 33;
}else if(D>30&&D<=32&&L>0&&L<=128)
{
 return 35;
}else if(D>32&&D<=34&&L>0&&L<=132)
{
 return 38;
}else if(D>34&&D<=35&&L>0&&L<=140)
{
 return 38;
}else if(D>35&&D<=38&&L>0&&L<=152)
{
 return 42;
}else if(D>38&&D<=40&&L>0&&L<=160)
{
 return 43;
}else if(D>40&&D<=42&&L>0&&L<=168)
{
 return 45;
}else if(D>42&&D<=44&&L>0&&L<=176)
{
 return 48;
}else if(D>44&&D<=45&&L>0&&L<=180)
{
 return 48;
}else if(D>45&&D<=46&&L>0&&L<=184)
{
 return 50;
}else if(D>46&&D<=48&&L>0&&L<=192)
{
 return 52;
}else if(D>48&&D<=50&&L>0&&L<=200)
{
 return 54;
}else if(D>50&&D<=52&&L>0&&L<=208)
{
 return 55;
}else if(D>52&&D<=54&&L>0&&L<=216)
{
 return 58;
}else if(D>54&&D<=55&&L>0&&L<=220)
{
 return 60;
}else if(D>55&&D<=58&&L>0&&L<=232)
{
 return 62;
}else if(D>58&&D<=60&&L>0&&L<=240)
{
 return 65;
}else if(D>60&&D<=62&&L>0&&L<=248)
{
 return 68;
}else if(D>62&&D<=65&&L>0&&L<=260)
{
 return 70;
}else if(D>65&&D<=68&&L>0&&L<=272)
{
 return 72;
}else if(D>68&&D<=70&&L>0&&L<=280)
{
 return 75;
}else if(D>70&&D<=72&&L>0&&L<=288)
{
 return 78;
}else if(D>72&&D<=75&&L>0&&L<=300)
{
 return 80;
}else if(D>75&&D<=78&&L>0&&L<=312)
{
 return 85;
}else if(D>78&&D<=80&&L>0&&L<=320)
{
 return 85;
}else if(D>80&&D<=82&&L>0&&L<=328)
{
 return 90;
}else if(D>82&&D<=85&&L>0&&L<=340)
{
 return 90;
}else if(D>85&&D<=88&&L>0&&L<=352)
{
 return 95;
}else if(D>88&&D<=90&&L>0&&L<=360)
{
 return 95;
}else if(D>90&&D<=92&&L>0&&L<=368)
{
 return 100;
}else if(D>92&&D<=95&&L>0&&L<=380)
{
 return 100;
}else if(D>95&&D<=98&&L>0&&L<=392)
{
 return 105;
}else if(D>98&&D<=100&&L>0&&L<=400)
{
 return 105;
}else if(D>100&&D<=105&&L>0&&L<=420)
{
 return 110;
}else if(D>105&&D<=110&&L>0&&L<=440)
{
 return 115;
}else if(D>110&&D<=115&&L>0&&L<=460)
{
 return 120;
}else if(D>115&&D<=120&&L>0&&L<=480)
{
 return 125;
}
else return 0;
}/*********************************/
double Calkulate::LD_less8(double D,double L)
{
 if(D>0&&D<=5&&L>0&&L<=40)
{
 return 7;
}else if(D>5&&D<=6&&L>0&&L<=48)
{
 return 8;
}else if(D>6&&D<=7&&L>0&&L<=56)
{
 return 9;
}else if(D>7&&D<=8&&L>0&&L<=64)
{
 return 10;
}else if(D>8&&D<=9&&L>0&&L<=72)
{
 return 11;
}else if(D>9&&D<=10&&L>0&&L<=80)
{
 return 12;
}else if(D>10&&D<=11&&L>0&&L<=88)
{
 return 13;
}else if(D>11&&D<=12&&L>0&&L<=96)
{
 return 14;
}else if(D>12&&D<=13&&L>0&&L<=104)
{
 return 15;
}else if(D>13&&D<=14&&L>0&&L<=112)
{
 return 16;
}else if(D>14&&D<=15&&L>0&&L<=120)
{
 return 17;
}else if(D>15&&D<=16&&L>0&&L<=128)
{
 return 18;
}else if(D>16&&D<=17&&L>0&&L<=136)
{
 return 19;
}else if(D>17&&D<=18&&L>0&&L<=144)
{
 return 20;
}else if(D>18&&D<=19&&L>0&&L<=152)
{
 return 21;
}else if(D>19&&D<=20&&L>0&&L<=160)
{
 return 22;
}else if(D>20&&D<=21&&L>0&&L<=168)
{
 return 24;
}else if(D>21&&D<=23&&L>0&&L<=184)
{
 return 26;
}else if(D>23&&D<=24&&L>0&&L<=192)
{
 return 27;
}else if(D>24&&D<=25&&L>0&&L<=200)
{
 return 28;
}else if(D>25&&D<=26&&L>0&&L<=208)
{
 return 30;
}else if(D>26&&D<=27&&L>0&&L<=216)
{
 return 30;
}else if(D>27&&D<=28&&L>0&&L<=224)
{
 return 32;
}else if(D>28&&D<=30&&L>0&&L<=240)
{
 return 33;
}else if(D>30&&D<=32&&L>0&&L<=256)
{
 return 35;
}else if(D>32&&D<=34&&L>0&&L<=264)
{
 return 38;
}else if(D>34&&D<=35&&L>0&&L<=280)
{
 return 38;
}else if(D>35&&D<=36&&L>0&&L<=288)
{
 return 40;
}else if(D>36&&D<=38&&L>0&&L<=304)
{
 return 42;
}else if(D>38&&D<=40&&L>0&&L<=320)
{
 return 45;
}else if(D>40&&D<=42&&L>0&&L<=336)
{
 return 45;
}else if(D>42&&D<=44&&L>0&&L<=352)
{
 return 48;
}else if(D>44&&D<=45&&L>0&&L<=360)
{
 return 48;
}else if(D>45&&D<=46&&L>0&&L<=368)
{
 return 50;
}else if(D>46&&D<=48&&L>0&&L<=384)
{
 return 52;
}else if(D>48&&D<=50&&L>0&&L<=400)
{
 return 54;
}else if(D>50&&D<=52&&L>0&&L<=416)
{
 return 55;
}else if(D>52&&D<=54&&L>0&&L<=432)
{
 return 60;
}else if(D>54&&D<=55&&L>0&&L<=440)
{
 return 60;
}else if(D>55&&D<=58&&L>0&&L<=461)
{
 return 62;
}else if(D>58&&D<=60&&L>0&&L<=480)
{
 return 65;
}else if(D>60&&D<=62&&L>0&&L<=496)
{
 return 68;
}else if(D>62&&D<=65&&L>0&&L<=520)
{
 return 70;
}else if(D>65&&D<=68&&L>0&&L<=544)
{
 return 72;
}else if(D>68&&D<=70&&L>0&&L<=560)
{
 return 75;
}else if(D>70&&D<=72&&L>0&&L<=576)
{
 return 78;
}else if(D>72&&D<=75&&L>0&&L<=600)
{
 return 80;
}else if(D>75&&D<=78&&L>0&&L<=624)
{
 return 85;
}else if(D>78&&D<=80&&L>0&&L<=640)
{
 return 90;
}else if(D>80&&D<=82&&L>0&&L<=656)
{
 return 95;
}else if(D>82&&D<=85&&L>0&&L<=680)
{
 return 95;
}else if(D>85&&D<=88&&L>0&&L<=704)
{
 return 100;
}else if(D>88&&D<=90&&L>0&&L<=720)
{
 return 100;
}else if(D>90&&D<=92&&L>0&&L<=736)
{
 return 100;
}else if(D>92&&D<=95&&L>0&&L<=760)
{
 return 105;
}else if(D>95&&D<=98&&L>0&&L<=784)
{
 return 110;
}else if(D>98&&D<=100&&L>0&&L<=800)
{
 return 110;
}
else return 0;
}/**********************************/
double Calkulate::LD_less12(double D,double L)
{
  if(D>0&&D<=5&&L>0&&L<=60)
{
 return 7;
}else if(D>5&&D<=6&&L>0&&L<=72)
{
 return 8;
}else if(D>6&&D<=7&&L>0&&L<=84)
{
 return 9;
}else if(D>7&&D<=8&&L>0&&L<=96)
{
 return 10;
}else if(D>8&&D<=9&&L>0&&L<=108)
{
 return 11;
}else if(D>9&&D<=10&&L>0&&L<=120)
{
 return 13;
}else if(D>10&&D<=11&&L>0&&L<=132)
{
 return 13;
}else if(D>11&&D<=12&&L>0&&L<=144)
{
 return 15;
}else if(D>12&&D<=13&&L>0&&L<=156)
{
 return 16;
}else if(D>13&&D<=14&&L>0&&L<=168)
{
 return 17;
}else if(D>14&&D<=15&&L>0&&L<=180)
{
 return 18;
}else if(D>15&&D<=16&&L>0&&L<=192)
{
 return 18;
}else if(D>16&&D<=17&&L>0&&L<=204)
{
 return 20;
}else if(D>17&&D<=18&&L>0&&L<=216)
{
 return 21;
}else if(D>18&&D<=19&&L>0&&L<=228)
{
 return 22;
}else if(D>19&&D<=20&&L>0&&L<=240)
{
 return 23;
}else if(D>20&&D<=21&&L>0&&L<=252)
{
 return 24;
}else if(D>21&&D<=23&&L>0&&L<=276)
{
 return 26;
}else if(D>23&&D<=24&&L>0&&L<=288)
{
 return 27;
}else if(D>24&&D<=25&&L>0&&L<=300)
{
 return 28;
}else if(D>25&&D<=26&&L>0&&L<=312)
{
 return 30;
}else if(D>26&&D<=27&&L>0&&L<=324)
{
 return 32;
}else if(D>27&&D<=28&&L>0&&L<=336)
{
 return 32;
}else if(D>28&&D<=30&&L>0&&L<=360)
{
 return 34;
}else if(D>30&&D<=32&&L>0&&L<=384)
{
 return 36;
}else if(D>32&&D<=34&&L>0&&L<=396)
{
 return 38;
}else if(D>34&&D<=35&&L>0&&L<=420)
{
 return 39;
}else if(D>35&&D<=36&&L>0&&L<=432)
{
 return 40;
}else if(D>36&&D<=38&&L>0&&L<=456)
{
 return 42;
}else if(D>38&&D<=40&&L>0&&L<=480)
{
 return 45;
}else if(D>40&&D<=42&&L>0&&L<=504)
{
 return 48;
}else if(D>42&&D<=44&&L>0&&L<=528)
{
 return 50;
}else if(D>44&&D<=45&&L>0&&L<=540)
{
 return 50;
}else if(D>45&&D<=46&&L>0&&L<=552)
{
 return 52;
}else if(D>46&&D<=48&&L>0&&L<=576)
{
 return 54;
}else if(D>48&&D<=50&&L>0&&L<=600)
{
 return 55;
}else if(D>50&&D<=52&&L>0&&L<=624)
{
 return 56;
}else if(D>52&&D<=54&&L>0&&L<=648)
{
 return 60;
}else if(D>54&&D<=55&&L>0&&L<=660)
{
 return 62;
}else if(D>55&&D<=58&&L>0&&L<=696)
{
 return 65;
}else if(D>58&&D<=60&&L>0&&L<=720)
{
 return 68;
}else if(D>60&&D<=62&&L>0&&L<=744)
{
 return 70;
}else if(D>62&&D<=65&&L>0&&L<=780)
{
 return 72;
}else if(D>65&&D<=68&&L>0&&L<=816)
{
 return 72;
}else if(D>68&&D<=70&&L>0&&L<=840)
{
 return 78;
}else if(D>70&&D<=72&&L>0&&L<=864)
{
 return 80;
}else if(D>72&&D<=75&&L>0&&L<=900)
{
 return 80;
}else if(D>75&&D<=78&&L>0&&L<=936)
{
 return 90;
}else if(D>78&&D<=80&&L>0&&L<=960)
{
 return 95;
}else if(D>80&&D<=82&&L>0&&L<=984)
{
 return 95;
}else if(D>82&&D<=85&&L>0&&L<=1020)
{
 return 95;
}else if(D>85&&D<=88&&L>0&&L<=1056)
{
 return 100;
}else if(D>88&&D<=90&&L>0&&L<=1080)
{
 return 105;
}else if(D>90&&D<=92&&L>0&&L<=1104)
{
 return 105;
}else if(D>92&&D<=95&&L>0&&L<=1140)
{
 return 110;
}else if(D>95&&D<=98&&L>0&&L<=784)
{
 return 110;
}else if(D>98&&D<=100&&L>0&&L<=1200)
{
 return 115;
}
else return 0;
}/*************************************/
double Calkulate::LD_less20(double D,double L)
{
if(D>0&&D<=5&&L>0&&L<=100)
{
 return 8;
}else if(D>5&&D<=6&&L>0&&L<=120)
{
 return 8;
}else if(D>6&&D<=7&&L>0&&L<=140)
{
 return 9;
}else if(D>7&&D<=8&&L>0&&L<=160)
{
 return 11;
}else if(D>8&&D<=9&&L>0&&L<=180)
{
 return 12;
}else if(D>9&&D<=10&&L>0&&L<=200)
{
 return 13;
}else if(D>10&&D<=11&&L>0&&L<=220)
{
 return 13;
}else if(D>11&&D<=12&&L>0&&L<=240)
{
 return 15;
}else if(D>12&&D<=13&&L>0&&L<=260)
{
 return 16;
}else if(D>13&&D<=14&&L>0&&L<=280)
{
 return 17;
}else if(D>14&&D<=15&&L>0&&L<=300)
{
 return 18;
}else if(D>15&&D<=16&&L>0&&L<=320)
{
 return 19;
}else if(D>16&&D<=17&&L>0&&L<=340)
{
 return 20;
}else if(D>17&&D<=18&&L>0&&L<=360)
{
 return 21;
}else if(D>18&&D<=19&&L>0&&L<=380)
{
 return 22;
}else if(D>19&&D<=20&&L>0&&L<=400)
{
 return 24;
}else if(D>20&&D<=21&&L>0&&L<=420)
{
 return 25;
}else if(D>21&&D<=23&&L>0&&L<=460)
{
 return 27;
}else if(D>23&&D<=24&&L>0&&L<=480)
{
 return 28;
}else if(D>24&&D<=25&&L>0&&L<=500)
{
 return 30;
}else if(D>25&&D<=26&&L>0&&L<=520)
{
 return 30;
}else if(D>26&&D<=27&&L>0&&L<=540)
{
 return 32;
}else if(D>27&&D<=28&&L>0&&L<=560)
{
 return 32;
}else if(D>28&&D<=30&&L>0&&L<=600)
{
 return 34;
}else if(D>30&&D<=32&&L>0&&L<=640)
{
 return 36;
}else if(D>32&&D<=34&&L>0&&L<=680)
{
 return 38;
}else if(D>34&&D<=35&&L>0&&L<=700)
{
 return 39;
}else if(D>35&&D<=36&&L>0&&L<=720)
{
 return 40;
}else if(D>36&&D<=38&&L>0&&L<=760)
{
 return 43;
}else if(D>38&&D<=40&&L>0&&L<=800)
{
 return 48;
}else if(D>40&&D<=42&&L>0&&L<=840)
{
 return 48;
}else if(D>42&&D<=44&&L>0&&L<=880)
{
 return 50;
}else if(D>44&&D<=45&&L>0&&L<=900)
{
 return 50;
}else if(D>45&&D<=46&&L>0&&L<=920)
{
 return 52;
}else if(D>46&&D<=48&&L>0&&L<=960)
{
 return 54;
}else if(D>48&&D<=50&&L>0&&L<=1000)
{
 return 55;
}else if(D>50&&D<=52&&L>0&&L<=1040)
{
 return 56;
}else if(D>52&&D<=54&&L>0&&L<=1080)
{
 return 62;
}else if(D>54&&D<=55&&L>0&&L<=1100)
{
 return 65;
}else if(D>55&&D<=58&&L>0&&L<=1160)
{
 return 68;
}else if(D>58&&D<=60&&L>0&&L<=1200)
{
 return 70;
}else if(D>60&&D<=62&&L>0&&L<=1240)
{
 return 72;
}else if(D>62&&D<=65&&L>0&&L<=1300)
{
 return 75;
}else if(D>65&&D<=68&&L>0&&L<=1360)
{
 return 78;
}else if(D>68&&D<=70&&L>0&&L<=1400)
{
 return 80;
}else if(D>70&&D<=72&&L>0&&L<=1440)
{
 return 85;
}else if(D>72&&D<=75&&L>0&&L<=1500)
{
 return 90;
}else if(D>75&&D<=78&&L>0&&L<=1560)
{
 return 90;
}else if(D>78&&D<=80&&L>0&&L<=1600)
{
 return 95;
}else if(D>80&&D<=82&&L>0&&L<=1640)
{
 return 95;
}else if(D>82&&D<=85&&L>0&&L<=1700)
{
 return 100;
}else if(D>85&&D<=88&&L>0&&L<=1760)
{
 return 105;
}else if(D>88&&D<=90&&L>0&&L<=1800)
{
 return 105;
}else if(D>90&&D<=92&&L>0&&L<=1840)
{
 return 110;
}else if(D>92&&D<=95&&L>0&&L<=1900)
{
 return 110;
}else if(D>95&&D<=98&&L>0&&L<=1960)
{
 return 115;
}else if(D>98&&D<=100&&L>0&&L<=2000)
{
 return 115;
}
else return 0;
}

Calkulate::~Calkulate()
{
    //dtor
}
