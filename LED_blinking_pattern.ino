
///Watch youtube video of this code- https://youtu.be/4gLJhcK1WQc


void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  for(int i=2; i<=13;i++){
    pinMode(i,OUTPUT);
    }
    /*pinMode(2,OUTPUT);
      pinMode(3,OUTPUT);
      pinMode(4,OUTPUT);
      pinMode(5,OUTPUT);
      pinMode(6,OUTPUT);
      pinMode(7,OUTPUT);
      pinMode(8,OUTPUT);
      pinMode(9,OUTPUT);
      pinMode(10,OUTPUT);
      pinMode(11,OUTPUT);
      pinMode(12,OUTPUT);
      pinMode(13,OUTPUT);*/


}

// the loop function runs over and over again forever
void loop() {

 effect_1();
 effect_1();

 effect_2();
 effect_2();

 effect_3();
 effect_3();

 effect_4();
 effect_4();

 effect_5();
 effect_5();

}

  void effect_1(){
    for(int i=2;i<14;i++){
      digitalWrite(i,HIGH);
      delay(100);
    }

    for(int i=2;i<14;i++){
      digitalWrite(i,LOW);
      delay(100);
    }
  }

  void effect_2(){
    for(int i=13;i>1;i--){
      digitalWrite(i,HIGH);
      delay(100);
    }

    for(int i=13;i>1;i--){
      digitalWrite(i,LOW);
      delay(100);
    }
  }

  void effect_3(){
    for(int i=2;i<14;i++){
     digitalWrite(i,HIGH);
     delay(100);
     digitalWrite(i +1,HIGH);
     delay(50);
     digitalWrite(i +2,HIGH);
     delay(100);
     digitalWrite(i,LOW);
     delay(100);
    }
  }


  void effect_4(){
    int count =13 ;
    for(int i=2;i<14;i++){
      clear();
      digitalWrite(i,HIGH);
      digitalWrite(count,HIGH);
      count--;

      if(count !=7){
        delay(200);
      }
    }

    for(int i=13;i>2;i--){
      clear();
      digitalWrite(i,HIGH);
      digitalWrite(count,HIGH);
      count++;
      if(count !=8);
      delay(200);
    }
  }

  void effect_5(){
    for(int i=2;i<14;i++)
    {
      digitalWrite(i,HIGH);
      delay(10);
      digitalWrite(i+1,HIGH);
      delay(10);
      digitalWrite(i,LOW);
      delay(10);

      digitalWrite(i+2,HIGH);
      delay(10);
      digitalWrite(i+1,LOW);
      delay(10);
      digitalWrite(i+3,HIGH);
      delay(10);
      digitalWrite(i+2,LOW);
      delay(20);
    }
  }




void clear(void){
  for (int i=2;i<14;i++){
    digitalWrite(i,LOW);
  }
}
