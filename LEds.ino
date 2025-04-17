int leds[] = {1,2,3,4,5};
int n = 5;
int count = 0;
void setup()
{
  for(int i= 0; i<n;i++) pinMode(leds[i], OUTPUT);

}

void loop()
{
  if(count < 60){
  
  for(int i = 0; i<n;i++){
    digitalWrite(leds[i],HIGH);
  	}
    delay(1000);
    count++;
    
  }else{
    for(int i = 0; i<n;i++){
    digitalWrite(leds[i],LOW);
    }
    while(true);
  }
  
}