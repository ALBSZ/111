input wifi; 
output Outyellow = PC0;
output outwhite = pc1;



void setup() {
  // put your setup code here, to run once:

}

void loop() {
int x;
while (WIFI_signal_avaliable){
  read_wifi_signal;
  switch(WIFIsignal){
  
  case 0000 : 
  digitalWrite(Outyellow, LOW);
  digitalWrite(outwhite, LOW);  
  break;

  case 0001 : 
  digitalWrite(Outyellow, HIGH);
  digitalWrite(outwhite, LOW);  
  break;  

  case 0010 : 
  digitalWrite(Outyellow, LOW);
  digitalWrite(outwhite, HIGH);  
  break;  

  case 0011 : {
    for (x=0,x<256,x=x+0.5){
      analogWrite(Outyellow, x);
    }
    digitalWrite(outwhite, LOW);  
  }
  break;  

  case 0100 : {
    for (x=0,x<256,x=x+0.5){
      analogWrite(outwhite, x);  
    }
  digitalWrite(Outyellow, LOW);
  }
  break;  

  case 0101 : {
    for (x=0,x<256,x=x+0.5){
      analogWrite(Outyellow, 255-x);
    }
  digitalWrite(outwhite, LOW);  
  }
  break;  

  case 0110 : {
    for (x=0,x<256,x=x+0.5){
      analogWrite(outwhite, 255-x);  
    }
  digitalWrite(Outyellow, LOW);
  }
  break;

  case 0111:{
    for (x=0,x<256,x=x+0.5){
      analogWrite(outyellow, x);  
    }
    for (x=0,x<256,x=x+0.5){
      analogWrite(outwhite, 255-x);  
    }
 }
 break;
 
  case 1000:[
    for (x=0,x<256,x=x+0.5){
      analogWrite(outyellow, 255-x);  
    }
    for (x=0,x<256,x=x+0.5){
      analogWrite(outwhite, x);  
    }
  }
  break;
}
}

