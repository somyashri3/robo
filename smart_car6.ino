char t;
int ir1=2;
int ir2=4;
int en1=5;
int en2=6;
int n1=9; int n2=10; int n3=11; int n4=12;
int led =13;
 
void setup() {
Serial.begin(9600);
  
  pinMode(ir1,INPUT);
 pinMode(ir2,INPUT); 
   pinMode(en1,OUTPUT);
   pinMode(en2,OUTPUT);
pinMode(n1,OUTPUT);   
pinMode(n2,OUTPUT);   
pinMode(n3,OUTPUT);  
pinMode(n4,OUTPUT); 
pinMode(led,OUTPUT); 

}
 
void loop() {
  
  digitalWrite(led,LOW);
  
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
 
if(t == '1'){       
 forward();
}
 
else if(t == '2'){ 
      
 back();
 
}
 
else if(t == '3'){      
right();
}
 
else if(t == '4'){     

 left();
}
 
else if(t == '5'){     
  Wait();
}

else if(t == '6'){   
  
ir();
  digitalWrite(led,HIGH);

}

else
{
 Wait();
  
}
delay(100);
}



void ir() {

 if((digitalRead(ir1)==HIGH) && (digitalRead(ir2)==HIGH)){
    forward();
      Serial.print("forward");     

    delay(10);
  }
  else if((digitalRead(ir1)==LOW) && (digitalRead(ir2)==HIGH)){
    left();
      Serial.print("left");     

    delay(10);
  }
  else if((digitalRead(ir1)==HIGH) && (digitalRead(ir2)==LOW))
  { 
    right();
    delay(10);
      Serial.print("right");     

    }
    else 
Wait();

}
void forward(){
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  analogWrite(en1,120);
    
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
 analogWrite(en2,120);

}

void back(){
 digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  analogWrite(en1,120);
  
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
   analogWrite(en2,120);
 
  }
  
void left(){
 digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
   analogWrite(en1,80);
   
  digitalWrite(11,LOW);
  digitalWrite(12,HIGH);
  analogWrite(en2,120);
}
void right(){
   digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
   analogWrite(en1,120);
   
  digitalWrite(11,HIGH);
  digitalWrite(12,LOW);
 analogWrite(en2,80);
}
void Wait(){
   digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  digitalWrite(12,LOW);
   analogWrite(en1,0);
    analogWrite(en2,0);
}
