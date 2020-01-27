int num;
int n;
int r;
int count;
int bin[5]={0,0,0,0,0};


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(2000);
  Serial.println("Type the number");
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
 

  
}

void loop(){
  if(Serial.available()>0){
    num=Serial.parseInt();
    n=num;
    while(n>0){
    r=n%2;
    n=n/2;
    
    bin[4-count]=r;
    count++;}
    for(int i=0;i<5;i++){
      

    
    Serial.println(bin[i]);
    }
    for(int j=0;j<5;j++){
      if(bin[j]==1){
        digitalWrite(1+j,HIGH);
      }
    }
    
    
    
  }
}
  
