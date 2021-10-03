//GLOBAL int variables for LED Setup for right segment 
int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
//GLOBAL int variables for LED setup for left segment
int a2 =9;
int b2 =10;
int c2=11;
int d2=12;
int e2=A3;
int f2=A1;
int g2=A2;
//Methods to display each single digit number for right segment
void zero();
void one();
void two();
void three();
void four();
void five();
void six();
void seven();
void eight();
void nine();
//Methods to display each single digit number for left segment
void oneSecondSegment();
void zeroSecondSegment();
void twoSecondSegment();
void threeSecondSegment();
void fourSecondSegment();
void fiveSecondSegment();
void sixSecondSegment();
void sevenSecondSegment ();
void eightSecondSegment();
void nineSecondSegment();
//Methods to grab displayed number, to enable displayed numbers on individual segment
void grabDisplayNumber(int grabbedValNumber);
void leftSegmentDisplay();
void rightSegmentDisplay();
//int values to help display numbers GLOBAL
int testNumber;
int rightSegmentNumber;
int leftSegmentNumber;

void setup()
{
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(2, OUTPUT);     
  pinMode(3, OUTPUT);     
  pinMode(4, OUTPUT);     
  pinMode(5, OUTPUT);     
  pinMode(6, OUTPUT);     
  pinMode(7, OUTPUT);     
  pinMode(8, OUTPUT);   
  pinMode(9, OUTPUT);  
  pinMode(10, OUTPUT);  
  pinMode(11, OUTPUT);  
  pinMode(12, OUTPUT);
  pinMode(A3, OUTPUT);
  pinMode(A1, OUTPUT); 
  pinMode(A2, OUTPUT); 
}
//Zero display for right segment 
void zero(){
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, HIGH); 
  digitalWrite(f, HIGH); 
  digitalWrite(g, LOW); 
}
//Zero for right second segment 
void zeroSecondSegment(){
  digitalWrite(a2, HIGH);  
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH); 
  digitalWrite(d2, HIGH); 
  digitalWrite(e2, HIGH); 
  digitalWrite(f2, HIGH); 
  digitalWrite(g2, LOW); 
}
//One for left segment
void one(){
  digitalWrite(a, LOW);  
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH); 
  digitalWrite(d, LOW); 
  digitalWrite(e, LOW); 
  digitalWrite(f, LOW); 
  digitalWrite(g, LOW); 
}
//one for right segment
void oneSecondSegment(){
  digitalWrite(a2, LOW);  
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH); 
  digitalWrite(d2, LOW); 
  digitalWrite(e2, LOW); 
  digitalWrite(f2, LOW); 
  digitalWrite(g2, LOW); 
}
//two for left segment
void two () {
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, HIGH); 
  digitalWrite(f, LOW); 
  digitalWrite(g, HIGH); 
}
//two for right segment
void twoSecondSegment () {
  digitalWrite(a2, HIGH);  
  digitalWrite(b2, HIGH);
  digitalWrite(c2, LOW); 
  digitalWrite(d2, HIGH); 
  digitalWrite(e2, HIGH); 
  digitalWrite(f2, LOW); 
  digitalWrite(g2, HIGH); 
}
//three for left segment
void three () {
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, LOW); 
  digitalWrite(f, LOW); 
  digitalWrite(g, HIGH); 
}
//three for right segment
void threeSecondSegment () {
  digitalWrite(a2, HIGH);  
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH); 
  digitalWrite(d2, HIGH); 
  digitalWrite(e2, LOW); 
  digitalWrite(f2, LOW); 
  digitalWrite(g2, HIGH); 
}
//four for left segment
void four () {
  digitalWrite(a, LOW);  
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH); 
  digitalWrite(d, LOW); 
  digitalWrite(e, LOW); 
  digitalWrite(f, HIGH); 
  digitalWrite(g, HIGH); 
}
//four for right segment
void fourSecondSegment () {
  digitalWrite(a2, LOW);  
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH); 
  digitalWrite(d2, LOW); 
  digitalWrite(e2, LOW); 
  digitalWrite(f2, HIGH); 
  digitalWrite(g2, HIGH); 
}
//five for left segment
void five () {
  digitalWrite(a, HIGH);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, LOW); 
  digitalWrite(f, HIGH); 
  digitalWrite(g, HIGH); 
}
//five for right segment
void fiveSecondSegment () {
  digitalWrite(a2, HIGH);  
  digitalWrite(b2, LOW);
  digitalWrite(c2, HIGH); 
  digitalWrite(d2, HIGH); 
  digitalWrite(e2, LOW); 
  digitalWrite(f2, HIGH); 
  digitalWrite(g2, HIGH); 
}
//six left segment 
void six (){
  digitalWrite(a, LOW);  
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, HIGH); 
  digitalWrite(f, HIGH); 
  digitalWrite(g, HIGH); 
}
//six right segment
void sixSecondSegment (){
  digitalWrite(a2, LOW);  
  digitalWrite(b2, LOW);
  digitalWrite(c2, HIGH); 
  digitalWrite(d2, HIGH); 
  digitalWrite(e2, HIGH); 
  digitalWrite(f2, HIGH); 
  digitalWrite(g2, HIGH); 
}
//seven left segment
void seven (){
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH); 
  digitalWrite(d, LOW); 
  digitalWrite(e, LOW); 
  digitalWrite(f, LOW); 
  digitalWrite(g, LOW); 
}
//seven right segment
void sevenSecondSegment (){
  digitalWrite(a2, HIGH);  
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH); 
  digitalWrite(d2, LOW); 
  digitalWrite(e2, LOW); 
  digitalWrite(f2, LOW); 
  digitalWrite(g2, LOW); 
}
//eight left segment
void eight (){
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH); 
  digitalWrite(d, HIGH); 
  digitalWrite(e, HIGH); 
  digitalWrite(f, HIGH); 
  digitalWrite(g, HIGH); 
}
//eight right segment
void eightSecondSegment (){
  digitalWrite(a2, HIGH);  
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH); 
  digitalWrite(d2, HIGH); 
  digitalWrite(e2, HIGH); 
  digitalWrite(f2, HIGH); 
  digitalWrite(g2, HIGH); 
}
//nine left segment
void nine (){
  digitalWrite(a, HIGH);  
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH); 
  digitalWrite(d, LOW); 
  digitalWrite(e, LOW); 
  digitalWrite(f, HIGH); 
  digitalWrite(g, HIGH); 
}
//nine right segment 
void nineSecondSegment (){
  digitalWrite(a2, HIGH);  
  digitalWrite(b2, HIGH);
  digitalWrite(c2, HIGH); 
  digitalWrite(d2, LOW); 
  digitalWrite(e2, LOW); 
  digitalWrite(f2, HIGH); 
  digitalWrite(g2, HIGH); 
}
//to convert POT input value to display number
void DisplayNumber(int grabbedValNumber){
  testNumber = grabbedValNumber/10.33;
  rightSegmentNumber = testNumber % 10;
  leftSegmentNumber = testNumber / 10;
}
//left segment display 
void leftSegmentDisplay() {
  if (leftSegmentNumber == 0){
    zero();
  }
  else if (leftSegmentNumber == 1){
    one();
  }
  else if (leftSegmentNumber == 2){
    two();
  }
  else if (leftSegmentNumber == 3){
    three();
  }
  else if (leftSegmentNumber == 4){
    four(); 
  }
  else if (leftSegmentNumber == 5){
   five();
  }
  else if (leftSegmentNumber == 6){
    six();
  }
  else if (leftSegmentNumber ==7){
    seven();
  }
  else if (leftSegmentNumber == 8){
    eight();
  }
  else {
    nine();
  }
}
//right segment display 
void rightSegmentDisplay (){
   if (rightSegmentNumber == 0) {
    zeroSecondSegment();
  }
  else if (rightSegmentNumber == 1){
    oneSecondSegment();
  }
  else if (rightSegmentNumber == 2){
    twoSecondSegment();
  }
  else if (rightSegmentNumber == 3){
    threeSecondSegment();
  }
  else if (rightSegmentNumber == 4){
    fourSecondSegment();
  }
  else if (rightSegmentNumber == 5){
    fiveSecondSegment();
  } 
  else if (rightSegmentNumber == 6){
    sixSecondSegment();
  }
  else if (rightSegmentNumber == 7){
    sevenSecondSegment();
  }
  else if (rightSegmentNumber == 8){
    eightSecondSegment();
  }
  else {
    nineSecondSegment();
  }
}

void loop()
{
  
  //analog reading from pot
  int val=0;
  val = analogRead(A0);  
  //passing analog read into converting method
  DisplayNumber(val); 
  //calling left segment display 
  leftSegmentDisplay();
  //add a delay to help process all the methods
  delay(50);
  //calling right segment display
  rightSegmentDisplay();
  Serial.println(testNumber);
  Serial.println(leftSegmentNumber);
  Serial.println(rightSegmentNumber);
  
}