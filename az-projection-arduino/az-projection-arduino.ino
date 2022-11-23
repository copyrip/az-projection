/*
 * 2022-11-4
 * DIA CONTROLER 
 * 
 * martin@copyright.rip
 * 
 * Below you'll find the timings for the first projector already uncommented, you just need to upload it to the first arduino. Then comment the two variables (timing_inputs and total_inputs), uncomment for the second projector, upload the code to the second arduino.
 * Rinse and repeat !
*/

// PROJO 1
double timing_inputs[77] = {35,10,41,13,11,15,54,17,79,17,133,14,59,14,10,14,23,14,55,13,14,67,14,27,14,34,14,66,13,14,70,14,27,14,49,13,14,24,13,13,14,6,14,45,14,56,13,13,14,62,13,14,13,14,58,14,94,14,21,14,15,42,17,113,17,85,17,3,16,17,32,17,7,17,4,17,60};
int total_inputs = 77; 

// PROJO 2
//double timing_inputs[54] = {35,10,29,13,23,15,54,17,79,17,178,17,164,17,69,22,65,22,30,22,235,17,204,16,22,113,22,31,22,12,17,50,17,70,17,23,21,17,23,22,7,17,85,17,3,16,17,32,17,7,17,4,17,60};
//int total_inputs = 54; 

// PROJO 3
//double timing_inputs[60] = {35,10,53,12,15,14,36,25,35,36,67,36,56,36,106,21,36,58,36,14,22,65,22,30,22,29,22,4,36,50,22,309,21,22,57,35,22,10,21,22,2,22,20,17,18,17,75,35,22,4,35,22,12,22,5,35,36,60,22,124};
//int total_inputs = 60;

// PROJO 4
//double timing_inputs[50] = {35,10,17,13,35,15,14,36,25,35,36,67,36,56,36,127,36,58,36,14,22,65,22,30,22,55,36,381,22,78,35,22,31,22,44,17,18,17,75,35,22,4,35,22,39,35,36,145,26,35};
//int total_inputs = 50;

// PROJO 5 x
//double timing_inputs[85] = {35,10,5,13,47,14,10,11,29,11,10,11,64,11,10,11,21,11,39,11,18,11,52,11,12,11,73,11,84,11,34,11,35,11,7,11,27,11,40,12,4,11,110,11,16,11,83,11,81,9,10,4,11,28,11,9,11,88,11,31,11,16,11,9,11,118,10,11,20,11,39,11,75,11,145,11,45,11,5,11,73,11,15,21,35};
//int total_inputs = 85;

// PROJO 6 x
//double timing_inputs[52] = {35,10,6,11,13,35,15,91,20,107,20,20,20,100,20,17,20,269,20,72,20,52,20,47,20,173,20,19,20,37,20,32,20,142,20,9,20,115,20,15,14,76,20,172,20,4,20,15,20,11,16,35};
//int total_inputs = 52;

// PROJO 7 !
//double timing_inputs[97] = {35,10,53,12,15,91,20,107,20,20,20,100,20,17,19,16,97,16,34,16,43,15,16,17,19,16,57,20,7,16,29,19,16,6,16,10,20,43,11,4,16,20,16,63,19,16,4,20,2,16,19,20,32,20,44,16,29,16,6,16,15,20,9,20,2,16,10,16,19,16,4,16,16,20,15,14,31,16,29,19,16,21,16,59,16,20,16,9,20,4,20,15,20,11,16,35};
//int total_inputs = 97;

// PROJO 8 ! 
//double timing_inputs[29] = {35,10,29,13,23,15,14,28,129,28,9,28,926,28,118,28,44,28,54,28,85,28,153,28,4,28,93,28,123};
//int total_inputs = 29;

// PROJO 9 X
//double timing_inputs[82] = {35,10,41,13,11,15,14,28,129,28,88,13,14,26,13,11,33,13,14,10,13,14,60,14,12,14,36,14,27,14,34,14,38,14,40,14,85,13,14,36,14,45,14,4,13,14,19,14,17,14,84,14,115,14,58,14,68,14,12,14,1,14,6,14,11,28,4,14,14,87,14,10,14,33,14,11,14,21,14,22,14,157};
//int total_inputs = 82;

// PROJO 10 x
//double timing_inputs[11] = {35,10,5,13,47,15,562,421,1005,12,60};
//int total_inputs = 11;




// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  // initialize digital pin LED_BUILTIN as an output.
  // just to have a visual output
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12,OUTPUT);
  digitalWrite(12, LOW);
  //int timing_inputs[79]
}

// the loop function runs over and over again forever
void loop() {
  
  for(int i = 0; i <= total_inputs; i++){
    Serial.println(timing_inputs[i]);
    delay(timing_inputs[i]*1000);
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(12, HIGH);
    delay(200);
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(12, LOW);
  }
}
