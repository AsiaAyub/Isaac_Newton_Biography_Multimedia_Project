
#include<conio.h>
#include<graphics.h>
#include<time.h>


void openingscene(){
   int t=0;
   while(t<2){
   	setcolor(RED);
   	setfillstyle(1,RED);
   rectangle(250,150,950,450);
   rectangle(200,100,1000,500);
   floodfill(210,140,RED);
  setcolor(15);
  settextstyle(8,0,5);
  outtextxy(430,240,"THE BIOGRAPHY");
  outtextxy(340,290,"OF A FAMOUS SCIENTIST");
  outtextxy(420,350,"(Isaac Newton)");
  setcolor(RED);
   setfillstyle(1,RED);
   circle(130,120,20);
   circle(90,200,30);
   circle(20,200,20);
   circle(60,100,30);
   floodfill(130,120,RED);
   floodfill(90,200,RED);
   floodfill(20,200,RED);
   floodfill(60,100,RED);
   
   setcolor(15);
   
   line(130,0,130,120);
   line(90,0,90,200);
   line(20,0,20,200);
   line(60,0,60,100);
   
   setcolor(RED);
   circle(1230,200,30);
   circle(1120,200,20);
   circle(1260,100,20);
   circle(1170,100,30);
   floodfill(1230,200,RED);
   floodfill(1120,200,RED);
   floodfill(1260,100,RED);
   floodfill(1170,100,RED);
   
   setcolor(15);
   line(1230,0,1230,180);
   line(1120,0,1120,180);
   line(1260,0,1260,90);
   line(1170,0,1170,90);
   
   
   delay(300);
   t++;
   }
   
	
}


//start of first scene
void house(bool open){
	setcolor(BLACK);
	setlinestyle(0,0,3);
	setfillstyle(1,RED);
	rectangle(440,180,840,380);//house lower rectanglar
	floodfill(750,280,BLACK);
	rectangle(575,180,705,380);//door border
	
	if(open){
	    setfillstyle(1,BLACK);
		rectangle(600,220,680,380);//door
		floodfill(665,300,BLACK);
	}
	
 	else{
		rectangle(600,220,680,380);//door
		circle(665,300,8);//handle
	}
	
	//right window
	setfillstyle(1, 13);
	rectangle(475,220,540,280);
	line(475,250,540,250);
	line(507,220,507,280);
	floodfill(477,222,BLACK);
    floodfill(527,242,BLACK);
    floodfill(527,260,BLACK);
    floodfill(477,262,BLACK);

	//left window
	rectangle(738,220,802,280);
	line(738,250,802,250);
	line(770,220,770,280);
	floodfill(747,262,BLACK);
	floodfill(798,262,BLACK);
	floodfill(798,242,BLACK);
	floodfill(747,242,BLACK);
	
	//roof
	setfillstyle(1,BROWN);
	line(410,180,870,180);// roof OF THE rectangle
	line(470,75,810,75);// roof  OF THE rectangle
	line(470,75,410,180);//diagnal
	line(870,180,810,75);//diagnal
	floodfill(470,100,BLACK);
	
	setfillstyle(1,WHITE);
	line(575,182,640,110);//smaller triangle
	line(705,182,640,110);//smaller triangle
	floodfill(640,150,BLACK);
	
	setfillstyle(1,10);
	line(540,183,640,60);//bigger triangle
	line(740,183,640,60);//bigger triangle
    floodfill(690,150,BLACK);
	floodfill(640,68,BLACK);
	

}


void fences(){
		//fence
	int x=100;
	int y=0;
	int c=0;
	int r=0;
	while(c<8){
	cleardevice;
	setfillstyle(1,11);
    line(680+x,495+y,680+x,570+y);
    line(700+x,495+y,700+x,570+y);
    line(680+x,570+y,700+x,570+y);
    line(680+x,495+y,690+x,485+y);
    line(700+x,495+y,690+x,485+y);
    floodfill(690+x,490+y,BLACK);
 
    if(r<2){
  	   x=x+50;
    }
  
    else if(r==2 && c<4){
  		y=y-20;
  		x=x+50;
  		r=0;
  	} 
 	else if(c<5){
  		x=x+50;
  		y=y-60;
  	}
	   
  	else{
    	x=x-40;
  		y=y-60;
	}
  	
  
    c++;
    r++;
	}
		
		//left fence
	 x=-50;
	 y=0;
	 c=0;
	 r=0;
	while(c<8){
		cleardevice;
		setfillstyle(1,11);
	    line(600+x,495+y,600+x,570+y);
	    line(620+x,495+y,620+x,570+y);
	    line(600+x,570+y,620+x,570+y);
	    line(600+x,495+y,610+x,485+y);
	    line(620+x,495+y,610+x,485+y);
	    floodfill(610+x,490+y,BLACK);
 
  if(r<2){
  	x=x-50;
  }
  
  else if(r==2 && c<4){
  	y=y-20;
  	x=x-50;
  	r=0;
  }
  
  else if(c<5){
  	x=x-50;
  	y=y-60;
  }
  
  else{
    x=x+30;
  	y=y-60;
	   }
  	
  
    c++;
    r++;
    
	}
	

}


void ice(){
	
	
	//first small ice
	setfillstyle(1,WHITE);
	ellipse(920,570,0,180,20,20);
	ellipse(958,570,0,180,20,20);
	ellipse(996,570,0,180,20,20);
	ellipse(1010,590,270,90,20,25);	
	ellipse(920,610,180,0,20,20);
	ellipse(958,610,180,0,20,20);
	ellipse(996,610,180,0,20,20);
	ellipse(910,590,90,270,20,25);
	floodfill(960,620,WHITE);
	
    //first big ice
    setfillstyle(1,WHITE);
	ellipse(1250,305,360,180,35,25);
    ellipse(1145,615,140,320,20,25);
    ellipse(1130,590,180,320,20,25);
	ellipse(1130,590,90,270,20,25);
	ellipse(1135,555,60,240,30,25);
	ellipse(1165,520,60,210,30,25);
	ellipse(1165,484,90,280,30,25);
	ellipse(1165,438,70,280,30,25);
	ellipse(1215,368,60,240,60,90);
	ellipse(1165,615,190,360,20,25);
	ellipse(1195,615,190,360,20,25);
    ellipse(1220,615,190,360,20,25);
    ellipse(1250,615,190,360,30,25);
    floodfill(1266,500,WHITE);
    
    	//second small ice
	setfillstyle(1,WHITE);
	ellipse(500,410,0,180,20,20);
	ellipse(538,410,0,180,20,20);
	ellipse(576,410,0,180,20,20);
	ellipse(590,410,270,140,20,25);	
	ellipse(500,430,180,0,20,20);
	ellipse(538,430,180,0,20,20);
	ellipse(576,430,180,0,20,20);
	ellipse(490,420,90,350,20,25);
	floodfill(576,400,WHITE);
	
    
}


void trees(int m, int n){
	
	setfillstyle(1,BROWN);
	line(185,588,180,298);
	line(80,590,83,290);
	line(145,298,130,350);
	line(120,300,130,350);
	line(80,590,30,600);
	line(30,600,120,610);
	line(120,610,130,640);
	line(130,640,150,610);
	line(150,610,240,630);
	line(240,630,185,588);
	line(80,300,185,300);
	line(188,370,190,420);
	floodfill(170,570,BLACK);
	//braanches
	line(180,400,210,320);
	line(180,440,230,320);
	
	//bush
	setfillstyle(1,GREEN);
	ellipse(180,288,180,360,20,15);
	ellipse(150,288,180,360,20,15);
	ellipse(120,288,180,360,20,15);
	ellipse(90,288,180,360,20,15);
	ellipse(50,298,230,60,30,25);
	ellipse(40,298,160,350,40,45);
	ellipse(40,278,80,250,40,85);
	ellipse(45,188,40,230,30,45);
	ellipse(90,158,10,180,35,35);
	ellipse(130,130,20,180,17,15);
	ellipse(150,125,20,180,22,25);
	ellipse(180,130,20,180,17,15);
	ellipse(220,148,330,170,35,35);
	ellipse(270,195,320,110,50,45);
	ellipse(299,245,320,110,28,25);
	ellipse(300,275,270,70,29,25);
	ellipse(270,295,210,20,34,35);
	ellipse(220,295,180,20,34,35);
	floodfill(180,170,BLACK);
	
	//FRIUTS
	
	setfillstyle(1,RED);
	ellipse(90,264,50,260,17,20);
	ellipse(115,264,280,150,17,20);
	line(86,282,119,282);
	line(103,249,105,229);
	floodfill(103,254,BLACK);
	
		//FRIUTS
	setcolor(RED);	
	setfillstyle(1,RED);
	ellipse(180+m,270+n,50,260,17,20);
	ellipse(205+m,270+n,280,150,17,20);
	line(176+m,288+n,209+m,288+n);
	line(193+m,255+n,195+m,235+n);
	floodfill(193+m,260+n,RED);
	setcolor(0);
	
		//FRIUTS
	setfillstyle(1,RED);
	ellipse(250,270,50,260,17,20);
	ellipse(275,270,280,150,17,20);
	line(246,288,279,288);
	line(263,255,265,235);
	floodfill(263,260,BLACK);
	
		//FRIUTS
	setfillstyle(1,RED);
	ellipse(90,200,50,260,17,20);
	ellipse(115,200,280,150,17,20);
	line(86,218,119,218);
	line(103,185,105,165);
	floodfill(103,190,BLACK);
	
		//FRIUTS
	setfillstyle(1,RED);
	ellipse(190,180,50,260,17,20);
	ellipse(215,180,280,150,17,20);
	line(186,198,219,198);
	line(203,165,205,145);
	floodfill(203,170,BLACK);
	
		//FRIUTS
	setfillstyle(1,RED);
	ellipse(270,200,50,260,17,20);
	ellipse(295,200,280,150,17,20);
	line(266,218,289,218);
	line(283,185,285,165);
	floodfill(283,190,BLACK);
	
}

void mountains(){
		 int i=0;
         int x=0;
         int y=0;
    for(i=0; i<5; i++){
		setcolor(WHITE);
		setfillstyle(1,WHITE);
		line(0+x,90+y,30+x,30+y);
		line(30+x,30+y,50+x,90+y);	
		line(30+x,70+y,60+x,10+y);
		line(60+x,10+y,90+x,70+y);	
		line(60+x,80+y,90+x,20+y);
		line(90+x,20+y,120+x,80+y);	
		line(90+x,88+y,120+x,28+y);
		line(120+x,28+y,150+x,90+y);	
		line(0+x,90+y,160+x,90+y);
		floodfill(100+x,50+y,WHITE);
		floodfill(120+x,50+y,WHITE);
		floodfill(30+x,50+y,WHITE);
		
		x=x+180;
	    if(i==1)
	   		y=y-30;
	    if(i==2){
	   		y=y+50; 
		    x=x+400;
	      }
	      	
	    }
	}


void iceAnimation(){	
	setlinestyle(0,0,3);
	setcolor(WHITE);
	srand (time(NULL));
	int r=0;
	int x=0;
	int y=0;
	while(r<700){
	x=rand()%2000;
	rectangle(x,10+y,x+2,12+y);
	y=y+10;
	delay(5);
	
	if(y>getmaxy()){
		y=0;
	}
	r++;
	}	
	}


void firstscene(){
	
	    bool open=false;
	    
		ice();
        mountains();
	    house(open);
	    fences();
	    trees(0,0);
	    iceAnimation();
        
        
}	

//start of second scene
  
   void mountainsGrey(){
		 int i,y=0;
		 int x=0;
	    for(i=0; i<5; i++){
		    setcolor(8);
			setfillstyle(1,8);
			line(0+x,90+y,30+x,30+y);
			line(30+x,30+y,50+x,90+y);	
			line(30+x,70+y,60+x,10+y);
			line(60+x,10+y,90+x,70+y);	
			line(60+x,80+y,90+x,20+y);
			line(90+x,20+y,120+x,80+y);	
			line(90+x,88+y,120+x,28+y);
			line(120+x,28+y,150+x,90+y);	
			line(0+x,90+y,160+x,90+y);
			floodfill(100+x,50+y,8);
			floodfill(120+x,50+y,8);
			floodfill(30+x,50+y,8);
		
		    x=x+180;
	        if(i==1)
	            y=y-30;
	        if(i==2){
	   			y=y+50; x=x+400;
	   		}
	      	
	 	}
	}


    void sun(int x, int y){
    	setcolor(YELLOW);
    	setfillstyle(1,YELLOW);
    	circle(1150+x,189+y,30);
    	floodfill(1144+30+x,189+y,YELLOW);
    	
    	line(1150+x,150+y,1150+x,135+y);
    	line(1185+x,165+y,1193+x,153+y);
    	line(1190+x,190+y,1205+x,190+y);

        line(1150+x,240+y,1150+x,225+y);
    	line(1185+x,215+y,1193+x,222+y);
    	line(1095+x,190+y,1110+x,190+y);
    	
    	line(1120+x,215+y,1105+x,224+y);
    	line(1115+x,160+y,1107+x,149+y);

	}


 	void personSmall(int x, int y, int px){
 	
		setcolor(WHITE);
 		setfillstyle(1,WHITE);
 		ellipse(650+x,300+y,0,180,10,8);//head
 		ellipse(650+x,300+y,180,0,10,20);//chin
 		line(653+x,320+y,653+x,326+y);//neck
 		line(646+x,320+y,646+x,326+y);//neck
 		floodfill(650+x,300+y,WHITE);
 		
 		setfillstyle(1,BLUE);
 		ellipse(650+x,330+y,0,180,19,4);//shoulders
 		line(666+x,328+y,678+x,357+y);//hand left x+
 		line(666+x,341+y,678+x,357+y);//hand left x+
 		line(632+x,328+y,620+x,357+y); //hand  x-
 		line(632+x,341+y,620+x,357+y);//hand  x-
 		line(666+x,341+y,666+x,363+y); //body
 		line(632+x,341+y,632+x,363+y);//body
 		line(632+x,363+y,666+x,363+y);//body
 		floodfill(660+x,350+y,WHITE);
 		
 		setfillstyle(1,BLACK);
 		line(632+x,363+y,634+x,399+y);//legs
 		line(666+x,363+y,664+x,399+y);//legs
 		
 		line(649+x,371+y,643+x,399+y);//legs
 		line(649+x,371+y,651+x,399+y);//legs
 		
 		line(632+x,399+y,643+x,399+y);//legs
 		line(666+x,399+y,651+x,399+y);//legs
 		line(660+x,370+y,661+x,370+y);
 		floodfill(650+x,370+y,WHITE);
 		//prism
 		
 		if(px==100){
			setfillstyle(1,WHITE);
	 		line(590+x+100,360+y,600+x+100,340+y);
	 		line(600+x+100,340+y,610+x+100,360+y);
	 		line(590+x+100,360+y,610+x+100,360+y);
	 		line(600+x+100,340+y,614+x+100,347+y);
	 		line(610+x+100,360+y,614+x+100,347+y);
	 		line(600+x+100,354+y,576+x+100,354+y);
	 		floodfill(599+x+100,353+y,WHITE);
	 		floodfill(609+x+100,348+y,WHITE); 
		 }
 	
 		else{
			setfillstyle(1,WHITE);
	 		line(590+x,360+y,600+x,340+y);
	 		line(600+x,340+y,610+x,360+y);
	 		line(590+x,360+y,610+x,360+y);
	 		line(600+x,340+y,614+x,347+y);
	 		line(610+x,360+y,614+x,347+y);
	 		line(610+x,354+y,620+x,354+y);
	 		floodfill(599+x,355+y,WHITE);
	 		floodfill(609+x,348+y,WHITE); 
		 }
 		
 
	 }


    void sunligt(){
    	delay(200);
    	setcolor(WHITE);
    	line(1103,224,815,425);
	}
	
	void sevenlights(){
		setcolor(RED);
		line(690,440,795,425);
		setcolor(12);
		line(690,450,795,425);
		setcolor(YELLOW);
		line(690,460,795,425);
		setcolor(GREEN);
		line(690,470,795,425);
		setcolor(10);
		line(690,480,795,425);
		setcolor(BLUE);
		line(690,490,795,425);
		setcolor(8);
		line(690,500,795,425);
    	}
	
void secondscene(){
		bool open=true;
	    int px=0;
	 	int i=0;
 		int x=0;
 		int y=0;
 		int page=1;
 		for(i=0; i<80; i++){	
 		
 			setactivepage(page);
 			
	        setvisualpage(1-page);
	        
	        cleardevice();
	        
 	        house(open);
			 	
	        fences();
	
        	trees(0,0);
	
            mountainsGrey();
	
            personSmall(x+i*2+40,y+i,px);
           
	        sun(0,0);
		    delay(80);
		  
	       page=1-page;
 		}
 	
           page=1;
           
		   sunligt();
           
		   sevenlights();
	
	  
           if(i>4){
   	           px=px+100;
         }
		   x=200;
		   
 		  y=70;	
 		  
 		for(i=0; i<24; i++){	
 		
		 if(i==1){
 	     	delay(3000);
		     }
		     
 			setactivepage(page);
	        setvisualpage(1-page);
            cleardevice();
            
 			house(open);
			 	
	        fences();
	        
	        trees(0,0);
	        
            mountainsGrey();	 
	 
            personSmall(x,y,px);
	       
		    sun(0,0);
		    
	 		x=x-10;
 	    	y=y-4;
			 	
		    delay(300);
	        page=1-page;
 		}
}



//start of third scene

  void studyRoom(int g){
  	setcolor(15);
  	//left wall
  	setfillstyle(1,5);
  	line(0,0,100,50);
  	line(0,700,130,450);
  	line(128,496,95,45);
  	floodfill(15,50,WHITE);
  	
  	//right wall
  	setfillstyle(1,5);
  	line(1190,0,1105,60);
  	line(1280,640,1120,458);//stopped here
  	line(1110,50,1120,480);
  	floodfill(1130,70,WHITE);
  	
  	//window
  	
  	setfillstyle(1,0);
  	line(1245,401,1140,350);
  	line(1245,401,1250,200);
  	line(1250,200,1145,198);
  	line(1140,350,1145,198);
  	floodfill(1240,380,WHITE);
  	
  	
	  //roof
  	line(90,50,1110,60);
  	setfillstyle(1,11);
  	floodfill(90,30,WHITE);
  	
  	//wall with door

  	line(124,479,1136,480);
  	setfillstyle(1,5);
  	floodfill(1108,470,WHITE);

  	setfillstyle(1,12);
  	floodfill(500,500,WHITE);//for floor
  	
  	//door
  	setfillstyle(1,6);
  	rectangle(960,270,1080,480);
  	floodfill(1060,340,WHITE);
  	setfillstyle(1,0);
  	circle(1060,400,10);
  	floodfill(1060,400,WHITE);
  	
  	//carpet 
  	setfillstyle(1,9);
  	ellipse(610,575,0,360,100,25);
  	floodfill(610,575,WHITE);
  	setfillstyle(1,1);
	ellipse(610,575,0,360,130,35);
	floodfill(610,545,WHITE);	
	setfillstyle(1,8);
	ellipse(610,575,0,360,160,45);
	floodfill(610,535,WHITE);
	
	
	//stars
	setlinestyle(0,0,3);
  	srand(1);
  	int i=0;
  	int x=0;
  	int y=250;
  	int r=0;
    int d=i;
    
  	for(i=0; i<4; i++){
  		int rn=0;
  		
  		if(d%2==0){
  			rn=(rand()%10+d)*3;	
		  } 	
  	    else{
  		 rn=(rand()%10-d)*2;	
		   }
  		line(1170+x,480-y+rn,1171+x,481-y+rn);  
	     	x=x+35;			
  		if(r==3){
  			break;
		  }
		  
  		else if(i==3){
  			i=0;
  			y=y-30;
  			x=0;
  			r++;		
		  }
	  }	
  
     i=0;
  	 x=0;
  	 y=0;
  	 r=0;
     d=0;
 
 	//picture frame
 	setcolor(YELLOW);
 	setfillstyle(1,YELLOW);
	rectangle(180,140,420,280);
	rectangle(190,150,410,270);
	floodfill(185,145,YELLOW);
	setfillstyle(1,0);
	floodfill(195,155,YELLOW);
	setcolor(WHITE);
	 settextstyle(1,0,1);
	outtextxy(205,155,"Solar Eclipse");
	setfillstyle(1,YELLOW);
	circle(230,210,25);
	floodfill(230,210,WHITE);
	line(230,185,320,195);
	line(230,235,320,225);
	setfillstyle(1,7);	
	circle(320,210,15);
	floodfill(320,210,WHITE);
	line(320,195,380,190);
	line(320,225,380,230);
	setfillstyle(1,9);
	circle(380,210,20);
	floodfill(380,210,WHITE);

	
   //table
   setfillstyle(1,6);
   line(200,373,390,373);
   line(190,423,400,423);
   line(400,423,390,375);
   line(190,423,200,375);
   //table depth
   line(190,423,190,475);
   line(400,423,400,435);
   line(190,435,400,435);
   floodfill(258,430,WHITE);
   //table legs
   line(400,415,400,500);
   line(397,417,397,490);
   line(190,415,190,500);
   line(193,417,193,490);
   floodfill(258,395,WHITE);
   
   //table light
   
   setfillstyle(1,12);
   line(242,320,278,320);
   line(243,320,240,346);
   line(278,320,282,345);
   ellipse(262,348,180,0,22,6);
   line(258,353,258,385);
   floodfill(262,323,WHITE);
   
    //paper
    setfillstyle(1,15);
    rectangle(300,385,350,415);
    floodfill(320,395,WHITE);

    //PEN
    setcolor(BLACK);
    line(320,405,325,400);
    line(320,411,325,401);
    
    //couch
    setfillstyle(1,6);
    line(130,510,210,530);
    line(130,510,131,550);
    line(210,530,211,570);
    line(131,550,211,570);
    line(211,570,180,640);
    line(180,640,170,600);
    line(170,600,100,580);
    line(100,580,109,620);
    line(109,620,178,638);
    line(130,510,102,585);
    //couch legs
    line(109,620,111,640);
    line(178,620,177,660);
	line(210,571,212,580);
    floodfill(115,599,BLACK);
    floodfill(145,529,BLACK);
    floodfill(149,569,BLACK);
    
    //COUCH TABLE
    line(240,580,300,590);
    line(230,630,290,640);
    line(230,630,240,580);
    line(300,590,290,640);
    floodfill(260,600,BLACK);
    //shelf
    rectangle(600,180,805,475);
    line(600,180,805,180);
	line(600,240,805,240);
    line(600,300,805,300);  
    line(600,360,805,360);
    line(600,420,805,420);
    //files
    i=0;
    x=0;
    y=0;
    r=0;
    for(i=0; i<7;i++){
     if(r==5){
     	break;
	 }
	 setfillstyle(1,0);
     rectangle(610+x,195+y,630+x,240+y);
     floodfill(620+x,200+y,BLACK);
     
   
     x=x+40;
    
     if(i==4){
     	if(r>0){
     setfillstyle(1,0);
     rectangle(610+x,195+y,630+x,240+y);
     floodfill(620+x,200+y,BLACK);	
		 }
		 
	 if(r==2){
     y=y+53;	
	 i=0;
	 x=0;
	 r++; 
	   }
	   
	else{
     y=y+60;	
     i=0;
	 x=0;
	 r++; 
	   }
     
	 }
     
	}
	


  
    
   //telescope holder
   line(860,421-(g-3),845,550);
   line(860,421-(g-3),926,600);
   
   setcolor(WHITE);
   //telescope
   setfillstyle(1,15);
   line(805,446-g,948,360);
   line(805,452-g,950,373);
   line(808,442-g,808,452-g);
   

    line(948,355,950,379);

  }
  
  void person3(int x, int y,int i,bool telescope, int g){
  		setcolor(11);
  		setfillstyle(1,WHITE);
 		ellipse(659+x,270+y,0,210,18,12);//head
 		ellipse(659+x,270+y,180,0,15,25);//chin
 		line(663+x,304+y,663+x,294+y);//neck
 		line(654+x,304+y,654+x,294+y);//neck
 		floodfill(659+x,270+y,11);
 		
 		setfillstyle(1,BLUE);
 		ellipse(658+x,310+y,0,180,24,6);//shoulders
 		
 		line(680+x,310+y,698+x,347+y);//hand left x+
 		line(680+x,330+y,698+x,347+y);//hand left x+
 		
 		
		
		if(i==138){
			line(632+x,310+y,605+x,310+y); //hand  x-
			line(640+x,330+y,605+x,310+y);//hand  x-
			setcolor(0);		
			circle(600+x,290+y,5);	
	        line(610+x,290+y,620+x,290+y);	
			circle(630+x,290+y,5);
			setcolor(11);
			}
		
		else if(telescope){

			line(636+x,310+y,682+x,300+y-g); //hand  x-
		 	line(637+x,330+y,682+x,300+y-g);//hand  x-
		}
 		
 		else{
 			line(636+x,310+y,617+x,347+y); //hand  x-
		 	line(637+x,330+y,617+x,347+y);//hand  x-
			 }
 	
	 	line(680+x,330+y,680+x,363+y); //body
 		line(637+x,330+y,637+x,363+y);//body
 		line(637+x,363+y,680+x,363+y);//body
 		floodfill(660+x,350+y,11);
 		
 		setfillstyle(1,BLACK);
 		line(637+x,363+y,640+x,422+y);//legs
 		line(680+x,363+y,677+x,422+y);//legs
 		
 		line(659+x,381+y,652+x,422+y);//legs
 		line(659+x,381+y,665+x,422+y);//legs
 		
 		line(637+x,422+y,652+x,422+y);//legs
 		line(680+x,422+y,665+x,422+y);//legs
 		floodfill(669+x,400+y,11);
 	
	 	setcolor(15);
  }	 


void thirdscene(){
	   
	   setlinestyle(0,0,3);
     
		int i=0;
		int x=125;
		int y=148;		
		int page=1;
		
		cleardevice();
		studyRoom(i);
		person3(x,y,i,true,i);
		
		for(int g=0; g<30; g++){
			if(g==1){
	        	delay(3000);	
	       	}	
		setactivepage(page);
		setvisualpage(1-page);
		cleardevice();
			
		studyRoom(g);
			
		person3(x-i*3,y-i/3,i,true,g);
		
		delay(200);
		page=1-page;
		    
		if(g==29){
		    for(int g=0; g<30; g++){	
		    		if(g==1){
						delay(3000);	
				    	}	
					setactivepage(page);
					setvisualpage(1-page);
					cleardevice();
						
					studyRoom(30-g);
						
					person3(x-i*3,y-i/3,i,true,30-g);
					
					delay(200);
					page=1-page;
					}
				}
			}
	
	
	
			for(i=0; i<140; i++){
				if(i==1){
					delay(3000);	
					}	
				setactivepage(page);
				setvisualpage(1-page);
				cleardevice();
					
				studyRoom(0);
					
				person3(x-i*3,y-i/3,i,false,0);
					
				delay(20);
				page=1-page;
					
				if(i==138){
					setactivepage(page);
					setvisualpage(1-page);
					cleardevice();
						
					studyRoom(0);
						
					person3(x-i*3,y-i/3,i,false,0);
				    page=1-page;
				
					}	
				    }
				
			    page=1;
		     	delay(80);
			    }
		    

//begining of forth scene

void university(bool open){

    setcolor(0);
    //light
    setfillstyle(1,14);
	ellipse(100,250,0,180,20,25);
	line(80,250,99,280);
	line(120,250,99,280);
	floodfill(100,250,0);
	line(99,280,97,450);
	line(99,280,101,450);	
   //table
   
   setfillstyle(1,BROWN);
	rectangle(1150,290,1230,310);
	floodfill(1160,305,0);
	rectangle(1150,290,1155,350);
	floodfill(1152,325,0);
	rectangle(1230,290,1235,350);
	floodfill(1232,325,0);
	
	//amberalla
	
	rectangle(1190,190,1192,290);
	setfillstyle(1,1);
	line(1190,190,1230,230);
	line(1192,190,1150,230);
	line(1230,230,1150,230);
    floodfill(1206,228,0);
	floodfill(1166,228,0);
	//chairs
	rectangle(1265,250,1270,350);
	rectangle(1245,310,1248,350);
	rectangle(1248,310,1265,313);
	
	rectangle(1110,250,1115,350);
	rectangle(1133,310,1136,350);
	rectangle(1115,310,1133,312);
	
	
	
	
	setlinestyle(0,0,3);
	setfillstyle(1,BROWN);
	rectangle(180,180,1080,460);//house lower rectanglar

	
	floodfill(750,280,BLACK);
	rectangle(475,180,785,460);//door border
	
		setcolor(15);
	settextstyle(10,0,1);
	outtextxy(545,198,"CAMBRIDGE UNIVERSITY");
	
	setcolor(0);
	if(open){
		setfillstyle(1,BLACK);
		rectangle(540,250,730,460);//door
    	floodfill(665,300,BLACK);
    	setcolor(15);
		line(635,338,635,380);//middle line of the door
	    line(635,340,605,365);
		line(635,340,670,365);
		setfillstyle(1,15); 
		rectangle(570,365,700,420);
		floodfill(635,390,WHITE);
		settextstyle(4,0,1);
		outtextxy(575,383,"CLOSED");
		 setcolor(0);
	}
	
		else{
		setfillstyle(1,RED);
		rectangle(540,250,730,460);//door
		floodfill(665,300,BLACK);
	}

	//right window
	setfillstyle(1, 15);
	rectangle(205,210,270,290);
	line(205,250,270,250);
	line(235,214,235,286);
	floodfill(267,252,BLACK);
    floodfill(237,252,BLACK);
    floodfill(237,220,BLACK);
    floodfill(257,220,BLACK);
    
    //right window 2
	setfillstyle(1, 15);
	rectangle(335,210,400,290);
	line(335,250,400,250);
	line(365,210,365,290);
	floodfill(390,282,BLACK);
    floodfill(390,222,BLACK);
    floodfill(355,282,BLACK);
    floodfill(355,222,BLACK);
    
    	//right window down
	setfillstyle(1, 15);
	rectangle(205,350,270,430);
	line(205,390,270,390);
	line(235,354,235,426);
	floodfill(267,392,BLACK);
    floodfill(237,392,BLACK);
    floodfill(237,360,BLACK);
    floodfill(257,360,BLACK);
    
    //right window down 2
	setfillstyle(1, 15);
	rectangle(335,350,400,430);
	line(335,390,400,390);
	line(365,354,365,430);
	floodfill(390,422,BLACK);
    floodfill(390,362,BLACK);
    floodfill(355,422,BLACK);
    floodfill(355,362,BLACK);
    
    	//left window
	setfillstyle(1, 15);
	rectangle(820,210,880,290);
	line(822,250,880,250);
	line(851,214,851,286);
	floodfill(840,252,BLACK);
    floodfill(857,220,BLACK);

    
    	//left window 2
	setfillstyle(1, 15);
	rectangle(970,210,1030,290);
	line(972,250,1030,250);
	line(1001,214,1001,286);
	floodfill(990,252,BLACK);
    floodfill(1007,220,BLACK);

      	//left window down
	setfillstyle(1, 15);
	rectangle(820,350,880,430);
	line(822,390,880,390);
	line(851,354,851,426);
	floodfill(840,422,BLACK);
    floodfill(857,362,BLACK);

    
    	//left window down 2
	setfillstyle(1, 15);
	rectangle(970,350,1030,430);
	line(972,390,1030,390);
	line(1001,354,1001,426);
	floodfill(990,422,BLACK);
    floodfill(1007,362,BLACK);

	//roof
	setfillstyle(1,BROWN);
	line(180,180,1080,180);// roof OF THE rectangle
	line(250,75,1000,75);// roof  OF THE rectangle
	line(250,75,180,180);//diagnal
	line(1080,180,1000,75);//diagnal
	floodfill(470,100,BLACK);
	
	setfillstyle(1,WHITE);
	line(575,182,640,110);//smaller triangle
	line(705,182,640,110);//smaller triangle
	floodfill(640,150,BLACK);
	
	setfillstyle(1,8);
	line(540,183,640,60);//bigger triangle
	line(740,183,640,60);//bigger triangle
    floodfill(690,150,BLACK);
	floodfill(640,68,BLACK);
	
	//lane
	setcolor(8);
	setfillstyle(1,8);
	line(540,460,500,560);
    line(730,460,670,560);
    line(500,560,670,560);
    line(540,460,730,460);
    floodfill(629,500,8);
    setcolor(0);

}


void fences2(int x){
    setcolor(11);
	for(int i=0; i<8; i++){
    setfillstyle(1,11);
    line(700+x,500,700+x,570);
    line(720+x,500,720+x,570);
    line(700+x,500,710+x,490);
    line(720+x,500,710+x,490);
    line(700+x,570,720+x,570);
    floodfill(712+x,500,11);
    x=x+80;
    
    	if(i==7){
			x=x-850;
			for(int g=0; g<8; g++){
		    	setfillstyle(1,11);
			    line(700+x,500,700+x,570);
			    line(720+x,500,720+x,570);
			    line(700+x,500,710+x,490);
			    line(720+x,500,710+x,490);
			    line(700+x,570,720+x,570);
			    floodfill(712+x,500,11);
					x=x-80;
	}
		}
}

}
void personside1(int x){	
		setcolor(15);
		setfillstyle(1,15);
		ellipse(1230+x,420,80,290,12,20);//head
		ellipse(1230+x,420,290,110,12,20);//head
		floodfill(1230+x,420,WHITE);
		
		setcolor(0);
				
	    ellipse(1232+x,466,290,110,10,30);//coat
		line(1238+x,485,1243+x,545);//coat
		line(1235+x,485,1240+x,545);//coat
		line(1232+x,485,1237+x,545);//coat
		
		setfillstyle(1,0);
		line(1232+x,485,1215+x,499);//upper body
		ellipse(1229+x,468,76,270,11,28);//upper body
		floodfill(1235+x,468,0);
		floodfill(1233+x,448,0);
		setfillstyle(1,WHITE);
		line(1233+x,518,1230+x,600);//legs
		line(1217+x,498,1225+x,600);//legs
		line(1223+x,600,1232+x,600);
		
		line(1223+x,540,1210+x,600);//legs
		line(1217+x,498,1203+x,600);//legs
		line(1201+x,600,1214+x,600);
		floodfill(1226+x,540,0);
		floodfill(1213+x,548,0);
}

void personside2(int x){	
	setcolor(15);
	setfillstyle(1,15);
	ellipse(1080+x,420,80,290,12,20);//head
	ellipse(1080+x,420,290,110,12,20);//head
	floodfill(1080+x,420,WHITE);
	setcolor(0);
			
    ellipse(1082+x,466,290,110,10,30);//coat
	line(1088+x,485,1093+x,545);//coat
	line(1085+x,485,1090+x,545);//coat
	line(1082+x,485,1087+x,545);//coat
	
	setfillstyle(1,0);
	line(1082+x,485,1065+x,499);//upper body
	ellipse(1085+x,468,94,270,17,33);//upper body
	floodfill(1075+x,468,0);
	floodfill(1078+x,448,0);
	setcolor(0);
	setfillstyle(1,WHITE);
	line(1085+x,518,1060+x,600);//legs
	line(1067+x,498,1053+x,600);//legs
	line(1053+x,600,1062+x,600);
	
	line(1073+x,540,1085+x,600);//legs
	line(1087+x,540,1093+x,600);//legs
	line(1081+x,600,1094+x,600);
	floodfill(1069+x,540,0);
	floodfill(1080+x,550,0);
}

void personFourth(int xx, int yy){
	
		setcolor(15);
		setfillstyle(1,WHITE);
 		ellipse(620+xx,470+yy,0,180,13,15);//head
        line(607+xx,470+yy,611+xx,487+yy);
        line(632+xx,470+yy,628+xx,487+yy);
        line(611+xx,489+yy,614+xx,489+yy);
        line(628+xx,489+yy,625+xx,489+yy);
 		
 		line(625+xx,486+yy,625+xx,499+yy);//neck
 		line(614+xx,486+yy,614+xx,499+yy);//neck

 		
 		
 		setcolor(15);
 		
 		ellipse(620+xx,506+yy,0,180,26,9);//shoulders
 		floodfill(620+xx,480+yy,WHITE);
		 setfillstyle(1,BLACK);
 		line(643+xx,500+yy,668+xx,544+yy);//hand left x+
 		line(643+xx,520+yy,664+xx,544+yy);//hand left x+
        line(664+xx,538+yy,668+xx,544+yy );
 	     line(597+xx,500+yy,578+xx,538+yy); //hand  x-
		line(597+xx,520+yy,580+xx,545+yy);//hand  x-
		line(578+xx,538+yy,580+xx,545+yy);
		//bag	 
		setcolor(11);
 	    ellipse(668+xx,555+yy,0,180,10,10);
 	    setfillstyle(1,0);
 	    rectangle(647+xx,555+yy,688+xx,589+yy);
 	    floodfill(660+xx,560+yy,11);
 	   setcolor(15) ;
	 	line(642+xx,520+yy,642+xx,563+yy); //body
 		line(598+xx,520+yy,598+xx,563+yy);//body
 		line(600+xx,563+yy,639+xx,563+yy);//body
 		floodfill(630+xx,520+yy,WHITE);

 
 		setfillstyle(1,WHITE);
 		line(598+xx,563+yy,604+xx,620+yy);//legs
 		line(642+xx,563+yy,636+xx,620+yy);//legs	
 		line(619+xx,566+yy,610+xx,620+yy);//legs
 		line(619+xx,566+yy,628+xx,620+yy);//legs
 		
 		line(602+xx,620+yy,610+xx,620+yy);//legs
 		line(628+xx,620+yy,636+xx,620+yy);//legs
 		floodfill(628+xx,590+yy,WHITE);
 	    floodfill(606+xx,590+yy,WHITE);
 	    
 	   
 	    

}

void plaguevirus(){
	setcolor(0);
	setfillstyle(1,RED);
	ellipse(915,480,0,180,25,14);
	ellipse(915,480,180,0,25,14);
	floodfill(915,480,BLACK);
	ellipse(885,480,0,180,9,4);
	ellipse(885,480,180,0,9,4);
	floodfill(885,480,BLACK);
	
	setcolor(YELLOW);
	setlinestyle(0,0,4);
	line(855,465,863,478);
	line(855,498,863,483);
	line(909,499,899,517);
	line(929,517,920,499);
	line(963,465,955,478);
	line(963,498,955,483);
	outtextxy(970,465,"Plague Virus");
}


fourthscene(){
    //first complete veiw 
	int x=0;
	
	university(false);
	fences2(x);	
	personside1(0);
	delay(600);
			
		
	//another starts here; the scenes with side veiw of the man		

	int j=0;
	int l=90;
	int r=-120;
	int page=1;
	bool second=true;
	
	while(j<10){
		
	    setactivepage(page);
		setvisualpage(1-page);
		if(second){
			cleardevice();	
		    university(false);
			fences2(x);			
			personside2(l);			
			l=l-120;
			delay(600);
			second=false;
		}
		
		else{
			cleardevice();
			university(false);
			fences2(x);				
			personside1(r);	
			r=r-120;
			delay(600);	
			second=true;
		}		
	
		
		j++;
		page=1-page;
        delay(0);	
	}
	
	
	//here scenes with the veiw of back of the man starts
	  int d=0;
      page=1;
	  for(int d=25; d<90; d++){
			setactivepage(page);
		    setvisualpage(1-page);
			cleardevice();
			university(false);
	
	     	x=0;	
			fences2(x);	
			personFourth(0,-2*d);
	        page=1-page;
            delay(80);
		}
		
		//here is when the virus jions the scene
      page=1;
      for(int s=0; s<2; s++){
	
	      	setactivepage(page);
		    setvisualpage(1-page);
	        cleardevice();
	    	university(true);
		
		    x=0;
			
			fences2(x);	
		
		    personFourth(0,30);
		    plaguevirus();
		    delay(3000);
		    page=1-page;
      }
}

 //beginig of fifth scene
  
  void fifthscene(){
		  	bool open=false;
		  	int page=1;
	        
 	        house(open);
			 	
	        fences();
	
        	trees(0,0);
	
            mountainsGrey();
	
           
	        sun(0,0);
	        int i=0;
	        for( i=0; i<230; i++){
	        	 setactivepage(page);
	             setvisualpage(1-page);	
	        	 cleardevice();
	        	 
	        	 house(open);			 	
	        	 fences();
        		 trees(0,0);
           		 mountainsGrey();
	        	 sun(0,0);
	        	 
	       		 if(i>150){
	        		personFourth(70-i/9,20-i+10);	
				}
				else{
					personFourth(70,20-i+10);	
				}
	        	
	       		 delay(10);
	        	 page=1-page;
				}

          for(int j=0; j<30; j++){
	        	 setactivepage(page);
	             setvisualpage(1-page);
	        	
	        	 cleardevice();
	        	 house(!open);
	             fences();
        	     trees(0,0);
                 mountainsGrey();
	             sun(0,0);
	             personFourth(60-j,-210-j+10);				
	             delay(10);
	             page=1-page;
			  }

 			  
}


//beginig of sixth scene
 

void sixthscene(){
		bool open=false;
  	    int page=1;
	       
		   for(int i=3; i<60; i++){
			   	setactivepage(page);
		        setvisualpage(1-page);
	 	        cleardevice(); 
				 house(open);
				 	
		        fences();
		
	        	trees(0,0);
		
	            mountainsGrey();       
		        sun(-9*i,-4*i);
		        delay(150);    
		        page=1-page;
		        
		      }  
		  
		  page=1;
		  
		  	for(int j=3; j<75; j++){
				setactivepage(page);
		        setvisualpage(1-page);
	 	        cleardevice(); 
		         cleardevice();
				  
				 house(open);	
		         fences();
	        	 trees(0,0);
	             mountainsGrey();
		         sun(-522-9*j,-232+4*j);
		         delay(150);
				  page=1-page;
				  	}	
		
}
  
  //beginig of seventh scene
  void person7(int xx, int yy,bool apple,bool basket){
  	setcolor(15);
  	
  	//head
  	ellipse(630+xx,300+yy,0,180,20,20);
  	
  	//hair
  	setfillstyle(1,10);
  	line(610+xx,350+yy,610+xx,300+yy);
  	ellipse(602+xx,340+yy,230,340,10,25);
  	ellipse(602+xx,340+yy,100,270,10,13);
  	ellipse(602+xx,320+yy,100,270,10,13);
  	ellipse(602+xx,300+yy,100,270,10,13);
  	ellipse(602+xx,280+yy,100,270,10,13);
  	ellipse(602+xx,280+yy,50,180,10,13);
  	ellipse(625+xx,276+yy,0,180,25,17);
  	ellipse(650+xx,280+yy,300,100,10,13);
  	ellipse(660+xx,300+yy,300,100,10,13);
  	ellipse(660+xx,315+yy,280,100,10,13);
  	ellipse(660+xx,335+yy,310,100,10,13);
  	ellipse(660+xx,343+yy,230,10,10,16);
  	line(655+xx,360+yy,650+xx,300+yy);
  	//floodfill(660+xx,335+yy,WHITE);
  	
  	//chin
  	setfillstyle(1,12);
  	ellipse(630+xx,300+yy,180,0,20,40);
  	floodfill(630+xx,307+yy,15);
  	setfillstyle(1,0);
  	circle(620+xx,307+yy,3);
  	circle(638+xx,307+yy,3);
  	line(629+xx,308+yy,629+xx,320+yy);
  	ellipse(630+xx,329+yy,360,0,8,3);
  	floodfill(620+xx,307+yy,15);
  	floodfill(638+xx,307+yy,15);
  	
  	//neck
  	setfillstyle(1,15);

  	line(623+xx,338+yy,623+xx,350+yy);//neck
  	line(635+xx,338+yy,635+xx,350+yy);//neck
  	line(666+xx,350+yy,595+xx,350+yy);//tie
  	line(643+xx,350+yy,630+xx,370+yy);//tie
  	line(615+xx,350+yy,630+xx,370+yy);//tie
  	floodfill(630+xx,365+yy,15);
  	//hands	
	if(apple) {
		setfillstyle(1,1);
	   line(595+xx,350+yy,520+xx,380+yy);//-hand
	   line(595+xx,390+yy,520+xx,395+yy);//-hand
	   line(530+xx,378+yy,530+xx,395+yy);
	   line(520+xx,380+yy,520+xx,395+yy);

	  }
      
      else{
	    line(595+xx,350+yy,560+xx,420+yy);//-hand
	  	line(595+xx,390+yy,570+xx,430+yy);//-hand
	  	line(560+xx,420+yy,570+xx,430+yy);
	  	line(560+xx,420+yy,555+xx,436+yy);
	  	line(570+xx,430+yy,565+xx,440+yy);
	  	line(555+xx,436+yy,565+xx,440+yy);
	  }
	  	line(666+xx,350+yy,700+xx,420+yy);//+hand
	  	line(666+xx,390+yy,690+xx,430+yy);//+hand
	  	line(700+xx,420+yy,690+xx,430+yy);
	  	line(690+xx,430+yy,691+xx,438+yy);
	    line(700+xx,420+yy,704+xx,432+yy);
	  	line(704+xx,432+yy,691+xx,438+yy);
  	
  	
  	if(basket){

	  	ellipse(560+xx,465+yy,0,180,30,40);	
	  	ellipse(560+xx,469+yy,0,180,30,40);
	  	setfillstyle(1,BROWN);	
	    ellipse(559+xx,460+yy,0,360,30,10);
		floodfill(560+xx,460+yy,15); 	
	  	ellipse(560+xx,460+yy,180,0,30,40);	
	  	floodfill(560+xx,490+yy,15);
	  }
  	//body
  
  	setfillstyle(1,1);
  	line(595+xx,390+yy,595+xx,490+yy);
  	line(666+xx,390+yy,666+xx,490+yy);
  	line(620+xx,350+yy,620+xx,472+yy);
  	line(641+xx,350+yy,641+xx,472+yy);
  	line(620+xx,430+yy,641+xx,430+yy);
  	ellipse(673+xx,470+yy,190,260,32,20);
  	ellipse(590+xx,470+yy,280,360,32,20);
  //	line(625+xx,420+yy,628+xx,420+yy);
  
  	floodfill(653+xx,465+yy,15);
  	floodfill(613+xx,465+yy,15);
  	setfillstyle(1,0);
	floodfill(625+xx,420+yy,15);

  	//legs
  	setfillstyle(1,0);
  	line(646+xx,480+yy,646+xx,530+yy);//+leg
  	line(666+xx,480+yy,666+xx,530+yy);
  	line(646+xx,530+yy,666+xx,530+yy);
  	ellipse(657+xx,525+yy,0,180,10,10);
  	floodfill(657+xx,505+yy,15);
  	line(595+xx,482+yy,595+xx,530+yy);//-leg
  	line(618+xx,478+yy,618+xx,530+yy);
  	line(598+xx,530+yy,618+xx,530+yy);
  	ellipse(608+xx,525+yy,0,180,10,10);
  	floodfill(607+xx,505+yy,15);
  }
  
  void personsitting(int xx,int yy){
  	setcolor(15);
  	//head
  	ellipse(630+xx,300+yy,0,180,20,20);
  	
  	//hair
  	setfillstyle(1,15);
  	line(610+xx,350+yy,610+xx,300+yy);
  	ellipse(602+xx,340+yy,230,340,10,25);
  	ellipse(602+xx,340+yy,100,270,10,13);
  	ellipse(602+xx,320+yy,100,270,10,13);
  	ellipse(602+xx,300+yy,100,270,10,13);
  	ellipse(602+xx,280+yy,100,270,10,13);
  	ellipse(602+xx,280+yy,50,180,10,13);
  	ellipse(625+xx,276+yy,0,180,25,17);
  	ellipse(650+xx,280+yy,300,100,10,13);
  	ellipse(660+xx,300+yy,300,100,10,13);
  	ellipse(660+xx,315+yy,280,100,10,13);
  	ellipse(660+xx,335+yy,310,100,10,13);
  	ellipse(660+xx,343+yy,230,10,10,16);
  	line(655+xx,360+yy,650+xx,300+yy);
  	//floodfill(660+xx,335+yy,WHITE);
  	
  	//chin
  	setfillstyle(1,12);
  	ellipse(630+xx,300+yy,180,0,20,40);
  	floodfill(630+xx,307+yy,15);
  	setfillstyle(1,0);
  	circle(620+xx,307+yy,3);
  	circle(638+xx,307+yy,3);
  	line(629+xx,308+yy,629+xx,320+yy);
  	ellipse(630+xx,329+yy,360,0,8,3);
  	floodfill(620+xx,307+yy,15);
  	floodfill(638+xx,307+yy,15);
  	
    //neck
  	setfillstyle(1,15);

  	line(623+xx,338+yy,623+xx,350+yy);//neck
  	line(635+xx,338+yy,635+xx,350+yy);//neck
  	line(666+xx,350+yy,595+xx,350+yy);//tie
  	line(643+xx,350+yy,630+xx,370+yy);//tie
  	line(615+xx,350+yy,630+xx,370+yy);//tie
  	floodfill(630+xx,365+yy,15);
  	//hands	
	 
  	line(595+xx,350+yy,560+xx,420+yy);//-hand
  	line(595+xx,390+yy,570+xx,430+yy);//-hand
  	line(560+xx,420+yy,570+xx,430+yy);
  	line(560+xx,420+yy,555+xx,436+yy);
  	line(570+xx,430+yy,565+xx,440+yy);
  	line(555+xx,436+yy,565+xx,440+yy);

  	line(666+xx,350+yy,700+xx,420+yy);//+hand
  	line(666+xx,390+yy,690+xx,430+yy);//+hand
  	line(700+xx,420+yy,690+xx,430+yy);
  	line(690+xx,430+yy,691+xx,438+yy);
    line(700+xx,420+yy,704+xx,432+yy);
  	line(704+xx,432+yy,691+xx,438+yy);
  	

  	//body
  
  	setfillstyle(1,1);
  	line(595+xx,390+yy,595+xx,440+yy);
  	line(666+xx,390+yy,666+xx,440+yy);
  	line(620+xx,350+yy,620+xx,422+yy);
  	line(641+xx,350+yy,641+xx,422+yy);
  	line(620+xx,420+yy,641+xx,420+yy);
  	ellipse(673+xx,420+yy,190,260,32,20);
  	ellipse(590+xx,420+yy,280,360,32,20);

  
  	floodfill(653+xx,415+yy,15);
  	floodfill(613+xx,415+yy,15);
  	setfillstyle(1,0);
	floodfill(625+xx,370+yy,15);

//legs
    setcolor(0);
  	setfillstyle(1,0);
  	line(650+xx,420+yy,655+xx,470+yy);//+leg
  	line(669+xx,420+yy,675+xx,470+yy);
  	line(655+xx,470+yy,675+xx,470+yy);  	
    ellipse(660+xx,421+yy,0,180,10,10);
  	floodfill(660+xx,428+yy,0);
  	setcolor(15);
 	ellipse(665+xx,465+yy,0,180,10,10);
 	
 	setcolor(0);
  	setfillstyle(1,0);
  	line(600+xx,420+yy,605+xx,470+yy);//-leg
  	line(619+xx,420+yy,625+xx,470+yy);
  	line(605+xx,470+yy,625+xx,470+yy);  	
    ellipse(610+xx,421+yy,0,180,10,10);
  	floodfill(610+xx,428+yy,0);
  	setcolor(15);
 	ellipse(615+xx,465+yy,0,180,10,10);
  	
  }
  
  void basket(){
  	setcolor(15);
  		//basket
    ellipse(260,565,0,180,30,40);	
  	ellipse(260,569,0,180,30,40);
  	setfillstyle(1,BROWN);	
    ellipse(259,560,0,360,30,10);
	floodfill(260,560,15); 	
  	ellipse(260,560,180,0,30,40);	
  	floodfill(260,590,15);
  	
  }
  
 


  void seventhscene(){
	  		bool open=false;
	  	    int page=1;
 	        house(open);
				
	        fences();
	
        	trees(0,0);
	
            mountainsGrey();
	
           
	        sun(0,0);

	       for(int i=0; i<87; i++) {
		       	setactivepage(page);
		        setvisualpage(1-page);
		       	cleardevice();
		       	 house(open);
				 	
		        fences();
		
	        	trees(0,0);
		
	            mountainsGrey();
	            
	            
	            sun(0,0);
	            
		       	 person7(40,0+i,false,true);
		       	 delay(70);
		       	 page=1-page;
			   
			   }
		   
		 
		   page=1;
		   int x=40;
	       for(int i=0; i<2; i++) {
		       	setactivepage(page);
		        setvisualpage(1-page);
		       	cleardevice();
		       	 house(open);
				 	
		        fences();
		         
	        	trees(0,0);
		
	            mountainsGrey();
	            
	            sun(0,0);
	            
	            x=x-195;
		       	 person7(x,0+70,false,true);
		       	 delay(970);
		       	 page=1-page;
			   
			   }
			 
		
		for(int i=0; i<150; i++){
					if(i==1){
				      delay(1000);
		        	}
				setactivepage(page);
		        setvisualpage(1-page);
		       	cleardevice();
		       	house(open);
				 	
		        fences();
		      
	        	trees(-15,i);
		
	            mountainsGrey();
	            
	            sun(0,0);
	            
				personsitting(-470,170);
		      	basket();
				delay(10);
				page=1-page;
			 

		}  
	     
		for(int i=0; i<150; i++){
			if(i==1){
				delay(1000);
			}
				setactivepage(page);
		        setvisualpage(1-page);
		       	cleardevice();
		       	house(open);
				 	
		        fences();
		
	        	trees(-15,150-i);
		     
	            mountainsGrey();
	            
	            sun(0,0);
			    personsitting(-470,170);
			 
			   
				basket();	
				delay(10);
				page=1-page;
		 
		 if(i==40){
		 		for(int k=0; k<240; k++){
					if(k==1){
						delay(100);
					}
					setactivepage(page);
			        setvisualpage(1-page);
			       	cleardevice();
			       	house(open);
					 	
			        fences();
			 
		        	trees(-15+k,100+k+5);
			
		            mountainsGrey();
		           
		           sun(0,0);
		           
				   personsitting(-470,170);	
				   basket();
				   delay(10);
				   page=1-page;
			i++;
				 }
		
				}  
  }
  
  
    for(int i=0; i<2; i++){
    			if(i==1){
				delay(1000);
			}
				setactivepage(page);
		        setvisualpage(1-page);
		       	cleardevice();
		       	house(open);
				 	
		        fences();
		
	        	trees(175,223);
		       
	            mountainsGrey();
	            
	            sun(0,0);
	            
	            person7(-155,0+70,true,false);
	            
	            //upper arrow
	            line(370,380,362,395);
	            line(370,380,378,395);
	            line(370,440,370,380);
	            
	            //lower arrow
	            line(372,540,372,580);
	            line(372,580,362,565);
	            line(372,580,378,565); 
				basket();
				delay(3000);
				page=1-page;
			 
	}
	
	
	for(int i=0; i<132; i++){

			setactivepage(page);
	        setvisualpage(1-page);
	       	cleardevice();
	       	house(open);
			 	
	        fences();
	
        	trees(175,223+i);
	        
            mountainsGrey();
            
            sun(0,0);
            
            person7(-155,0+70,true,false);
            basket();

			 delay(10);
			 page=1-page;

		 
	}
	page=1;
	
		for(int i=0; i<13; i++){
			
			if(i==1){
				delay(1000);
			}

			setactivepage(page);
	        setvisualpage(1-page);
	       	cleardevice();
	       	house(open);
			 	
	        fences();
	
        	trees(175,223+132);
	        
            mountainsGrey();
 
            sun(0,0);
            
            person7(-155,0+70,true,false);
            basket();
            settextstyle(8,0,8);
            outtextxy(700,550,"GRAVITY");
			delay(900);
			page=1-page;

		 
	}
}

//beginig of eighth scene

void earth(int x, int y){
	  setcolor(9); 
	  setfillstyle(1,9);
	  circle(x,y,50);
	  floodfill(x,y,9);
}

void sunstar(){
	  setcolor(14); 
	  setfillstyle(1,14);
	  circle(520,350,80);
	  floodfill(560,350,14);
}

void circular(int xc, int yc, int r){
		int  x=0; int y=r;
	    int count=0;
	    int p=3-2*r;
	    int page=1;
		setactivepage(page);
		setvisualpage(page);
		cleardevice();
  while(x<=y){

	  if (p<0){
	  
	     x=x+1;
	     p=p+4*x+6;
		}
	  else{
		 x=x+1;
	     y=y-1;
	     p=p+4*(x-y)+10 ;
		}

      if(count>8){
		putpixel(xc+x,yc+y,15);
	    putpixel(xc+y,yc+x,15);
	  
	    putpixel(xc-x,yc-y,15);
	    putpixel(xc-y,yc-x,15);
	    
	    putpixel(xc-x,yc+y,15);
	    putpixel(xc-y,yc+x,15);
	    
	    putpixel(xc+x,yc-y,15);
	    putpixel(xc+y,yc-x,15);
		
	}
    

	delay(9);
	
	if(count==30){
		count=0;
	  }
	
	count++;

	}
	
	

}

void strightline(int x1, int y1, int x2, int y2){
	  int p,dx,dy;
  
	  int x,y;
	  dx=x2-x1;  
	  dy=y2-y1;
	  x=x1; 
	  y=y1;
	  p=2*dy-dx;
	  int page=1;
	  setactivepage(page);
	  cleardevice();
      while(x<=x2){
		   	putpixel(x,y,WHITE);
		   	x++;
		   	if(p<0){
		   		p=p+dy;
			   }
			   
		    else{
			   	p=p+(2*dy - 2*dx);
				y++;
				   }
				   	   
			delay(60);
   }
getch();
}

void eigthscene(){
    int  page=1;
		
 
    circular(520,350,280);

    for(int t=0; t<3; t++){
	
		    sunstar();
			setcolor(15);
			settextstyle(8,0,4);
			outtextxy(380,380,"Sun");
			earth(800,350);
		      setcolor(15);
		    outtextxy(870,250,"Earth");
		    
		    line(610,350,660,350);
			line(660,350,650,345);
			line(660,350,650,355);
			settextstyle(8,0,2);   
			outtextxy(630,370,"F");
		    line(690,350,735,350); 
		    line(690,350,700,345);
			line(690,350,700,355);
			outtextxy(720,370,"F");
			delay(1600);
			}

	 page=1;
    int i=0; int x=770; int y=260;
    while(i<170){

		setactivepage(page);
	    setvisualpage(1-page);		
        cleardevice();
        
		setcolor(15);
	    setlinestyle(3,0,1);
	    circle(520,350,280);
    
	    setlinestyle(0,0,1); 
	    sunstar();
		setcolor(9);
		earth(x,y); 
		if(i<4){
			x=x-10; y=y-20;
			}
	
		else if(i<=15){
			x=x-10; y=y-10;	
			}
	
		else if(i>15 && i<=27){	
			x=x-10; y=y-1;		
			}
	
		else if(i>27 && i<45){
			x=x-9; y=y+6;	
			}
	
		else if(i>=45 && i<65){
    		x=x-6; y=y+8;
			
			}
	
		else if(i>=65 && i<=90){
    		x=x+2; y=y+8;
			
			}
	
		else if(i>90 && i<=115){
    		x=x+10; y=y+5;
			
			}
	
		else if(i>115 && i<=140){
    		x=x+10; y=y-6;			
			}
	
	 	else if(i>140){
    		x=x+1; y=y-8;			
			}
	
		i++;
		delay(170);
		page=1-page;	
	} 
	    delay(900);
	    page=1;
	    int end=1;
	    setcolor(15);
	    while(end<3){
			setactivepage(page);
		    setvisualpage(1-page);		
	        cleardevice();
	        settextstyle(0,0,20);
			outtextxy(300,300,"the end");
	        page=1-page;
			delay(900);
			end++;
		  }
	
}

main()
 {
 	
	 	int gm, x, y, gd = DETECT, i;
		char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file
     
    initgraph(&gd, &gm, data);
    DWORD scw = GetSystemMetrics(SM_CXSCREEN);
    DWORD sch = GetSystemMetrics(SM_CYSCREEN);
    initwindow(scw,sch);

	    openingscene();
	    cleardevice();
	    setbkcolor(12);
	    cleardevice();
	    firstscene();
	    cleardevice();
	    secondscene();
	    cleardevice();
	    thirdscene();
	    cleardevice();
	    fourthscene();
		cleardevice();
	    fifthscene();
	    sixthscene();
	    cleardevice();
	    seventhscene();
	    cleardevice();
		setbkcolor(0);
	    cleardevice();
	    setbkcolor(0); 
	    eigthscene();
		
	    getch(); 
	    closegraph();

        return 0;
		
}
