//________ WELCOME ALL OF YOU ON COMPUTER SOFT SKILLS CHANNEL _____________//
//----------------- C++ PROGRAM TO WISH HAPPY DIWALI -------------------//

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<stdlib.h>

void home();
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");

home();
getch();
closegraph();
}

void home()

{
int i=0;
int j,kk;
int color;
int x,y;

i=0;
while(!kbhit())
{

//_______ DRAW HOME _____________
setcolor(7);
setlinestyle(0,0,3);
line(0,450,750,450);

//________Right side
setcolor(color);
rectangle(200,330,430,450);

setcolor(11);
rectangle(230,444,295,450);
rectangle(235,355,290,444);
circle(244,399,3);

setcolor(13);
rectangle(340,348,410,400);

setcolor(color);
rectangle(345,353,405,395);
line(375,353,375,395);

setcolor(10);
line(130,249,426,249);
line(430,330,445,330);
line(445,330,426,249);

rectangle(350,235,380,249);
rectangle(346,230,384,235);

//________Left side

setcolor(color);
line(200,310,200,450);
line(40,310,40,450);

line(30,316,120,250);
line(210,316,120,250);

line(30,307,120,241);
line(210,307,120,241);

line(30,307,30,316);
line(210,307,210,316);

setcolor(14);
rectangle(70,350,170,400);
rectangle(75,355,165,395);

line(105,355,105,395);
line(135,355,135,395);

setcolor(15);
rectangle(100,290,140,320);
line(120,290,120,320);
line(100,305,140,305);
//_________home end___________

//__________crackers___________
setcolor(color);
settextstyle(10,0,3);
outtextxy(100,10,"HAPPY DIWALI 2023");

setcolor(13);
settextstyle(8,0,2);
outtextxy(90,60,"WISHING YOU WARMTH, LOVE, AND");

setcolor(10);
settextstyle(8,0,2);
outtextxy(90,90,"LIGHT THIS DIWALI & ALL YEAR LONG.");

setcolor(14);
settextstyle(1,0,2);
outtextxy(350,455,":- COMPUTER SOFT SKILLS");

setcolor(15);
color=rand()%15+1;
settextstyle(2,0,6);
x=rand()%1366;
y=rand()%768;
for(i=768;i!=y;i--)
{
if(i%50==0)
delay(3);
putpixel(x,i,14);
}
for(i=768;i!=y;i--)
{
if(i%70==0)
delay(30);
putpixel(x,i,0);
}
for(j=0;j!=100;j+=5)
{
for(i=0;i!=360;i+=15)
{
setcolor(color);
line(x,y,x+j*cos(3.14/180*i),y+j*sin(i*3.14/180));
}
}
setcolor(0);
for(j=0;j!=100;j++)
{
for(i=0;i!=360;i+=15)
line(x,y,x+j*cos(3.14/180*i),y+j*sin(i*3.14/180));
}
}
cleardevice();
}


//____________ I HOPE YOU LIKE THIS PROGRAMMING VIDEO ___________________

//____________ LIKE __________ SHARE __________ SUBSCRIBE __________________




