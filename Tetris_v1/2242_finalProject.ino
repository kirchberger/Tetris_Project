// Code for ECE 2242 final project
// Professer Marinov
// In Alphabetical Order by Last Name
// Anakin Childerhose 251018268
// Alexander Kirchberger 251014421
// Parker Young 251010523
// March 3, 2020


#include "pitches.h" // Library storing note frequencys

int melody[] = { NOTE_E5, NOTE_E3, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5, // Stores the tetris note orders
  NOTE_B4, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_C5, NOTE_E5, NOTE_A3, NOTE_D5,
  NOTE_C5, NOTE_B4, NOTE_E4, NOTE_G4, NOTE_C5, NOTE_D5, NOTE_E3, NOTE_E5,
  NOTE_E3, NOTE_C5, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_B2, 
  NOTE_C3, NOTE_D3, NOTE_D5, NOTE_F5, NOTE_A5, NOTE_C5, NOTE_C5, NOTE_G5, 
  NOTE_F5, NOTE_E5, NOTE_C3, 0, NOTE_C5, NOTE_E5, NOTE_A4, NOTE_G4, NOTE_D5,
  NOTE_C5, NOTE_B4, NOTE_E4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_G4, NOTE_E5, 
  NOTE_G4, NOTE_C5, NOTE_E4, NOTE_A4, NOTE_E3, NOTE_A4, 0, 
  NOTE_E5, NOTE_E3, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5, 
  NOTE_B4, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_C5, NOTE_E5, NOTE_A3, NOTE_D5,
  NOTE_C5, NOTE_B4, NOTE_E4, NOTE_G4, NOTE_C5, NOTE_D5, NOTE_E3, NOTE_E5,
  NOTE_E3, NOTE_C5, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_B2, 
  NOTE_C3, NOTE_D3, NOTE_D5, NOTE_F5, NOTE_A5, NOTE_C5, NOTE_C5, NOTE_G5, 
  NOTE_F5, NOTE_E5, NOTE_C3, 0, NOTE_C5, NOTE_E5, NOTE_A4, NOTE_G4, NOTE_D5,
  NOTE_C5, NOTE_B4, NOTE_E4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_G4, NOTE_E5, 
  NOTE_G4, NOTE_C5, NOTE_E4, NOTE_A4, NOTE_E3, NOTE_A4, 0,
  NOTE_E4, NOTE_E3, NOTE_A2, NOTE_E3, NOTE_C4, NOTE_E3, NOTE_A2, NOTE_E3, 
  NOTE_D4, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_B3, NOTE_E3, NOTE_GS2, NOTE_E3,
  NOTE_C4, NOTE_E3, NOTE_A2, NOTE_E3, NOTE_A3, NOTE_E3, NOTE_A2, NOTE_E3, 
  NOTE_GS3, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_B3, NOTE_E3, NOTE_GS2, NOTE_E3, 
  NOTE_E4, NOTE_E3, NOTE_A2, NOTE_E3, NOTE_C4, NOTE_E3, NOTE_A2, NOTE_E3, 
  NOTE_D4, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_B3, NOTE_E3, NOTE_GS2, NOTE_E3,
  NOTE_C4, NOTE_E3, NOTE_E4, NOTE_E3, NOTE_A4, NOTE_E3, NOTE_A2, NOTE_E3, 
  NOTE_GS4, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_GS2, NOTE_E3,
  NOTE_E5, NOTE_E3, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5, 
  NOTE_B4, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_C5, NOTE_E5, NOTE_A3, NOTE_D5,
  NOTE_C5, NOTE_B4, NOTE_E4, NOTE_G4, NOTE_C5, NOTE_D5, NOTE_E3, NOTE_E5,
  NOTE_E3, NOTE_C5, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_B2, 
  NOTE_C3, NOTE_D3, NOTE_D5, NOTE_F5, NOTE_A5, NOTE_C5, NOTE_C5, NOTE_G5, 
  NOTE_F5, NOTE_E5, NOTE_C3, 0, NOTE_C5, NOTE_E5, NOTE_A4, NOTE_G4, NOTE_D5,
  NOTE_C5, NOTE_B4, NOTE_E4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_G4, NOTE_E5, 
  NOTE_G4, NOTE_C5, NOTE_E4, NOTE_A4, NOTE_E3, NOTE_A4, 0, 
  NOTE_E5, NOTE_E3, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5, 
  NOTE_B4, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_C5, NOTE_E5, NOTE_A3, NOTE_D5,
  NOTE_C5, NOTE_B4, NOTE_E4, NOTE_G4, NOTE_C5, NOTE_D5, NOTE_E3, NOTE_E5,
  NOTE_E3, NOTE_C5, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_B2, 
  NOTE_C3, NOTE_D3, NOTE_D5, NOTE_F5, NOTE_A5, NOTE_C5, NOTE_C5, NOTE_G5, 
  NOTE_F5, NOTE_E5, NOTE_C3, 0, NOTE_C5, NOTE_E5, NOTE_A4, NOTE_G4, NOTE_D5,
  NOTE_C5, NOTE_B4, NOTE_E4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_G4, NOTE_E5, 
  NOTE_G4, NOTE_C5, NOTE_E4, NOTE_A4, NOTE_E3, NOTE_A4, 0,
  NOTE_E4, NOTE_E3, NOTE_A2, NOTE_E3, NOTE_C4, NOTE_E3, NOTE_A2, NOTE_E3, 
  NOTE_D4, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_B3, NOTE_E3, NOTE_GS2, NOTE_E3,
  NOTE_C4, NOTE_E3, NOTE_A2, NOTE_E3, NOTE_A3, NOTE_E3, NOTE_A2, NOTE_E3, 
  NOTE_GS3, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_B3, NOTE_E3, NOTE_GS2, NOTE_E3, 
  NOTE_E4, NOTE_E3, NOTE_A2, NOTE_E3, NOTE_C4, NOTE_E3, NOTE_A2, NOTE_E3, 
  NOTE_D4, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_B3, NOTE_E3, NOTE_GS2, NOTE_E3,
  NOTE_C4, NOTE_E3, NOTE_E4, NOTE_E3, NOTE_A4, NOTE_E3, NOTE_A2, NOTE_E3, 
  NOTE_GS4, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_GS2, NOTE_E3};

int noteDurations[] = {8,8,8,8,8,16,16,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8, // stores the tetris music note durations 
  8,4,8,8,16,16,8,8,8,8,8,8,8,16,16,8,8,8,8,8,8,8,8,8,8,8,8,8,8,4,4,
  8,8,8,8,8,16,16,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
  8,4,8,8,16,16,8,8,8,8,8,8,8,16,16,8,8,8,8,8,8,8,8,8,8,8,8,8,8,4,4,
  8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
  8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
  8,8,8,8,8,16,16,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
  8,4,8,8,16,16,8,8,8,8,8,8,8,16,16,8,8,8,8,8,8,8,8,8,8,8,8,8,8,4,4,
  8,8,8,8,8,16,16,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
  8,4,8,8,16,16,8,8,8,8,8,8,8,16,16,8,8,8,8,8,8,8,8,8,8,8,8,8,8,4,4,
  8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
  8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8};


void store(){ // triggers the store pin on the shift registers to store the values that have been shifted in
  digitalWrite(7,HIGH);
  delayMicroseconds(10);
  digitalWrite(7,LOW);
  delayMicroseconds(10);
}

void gameOver(int sc, int dif){ // runs when the player looses the game 
  int board[]={66,165,161,161,173,165,165,66};// is the "G O" screen
  int scDif[]={(sc-(sc%256))/256,(sc%256),0,0,0,0,0,128>>dif}; // is the score and difficulty, the score on the top two row in binary where the bottom row of the top two to the left is the LSB and the right of the top row is the MSB
  delay(500);
  while(analogRead(A1)<773){ // shows "G O" on the  screen for game over
    for (int j=0; j<8; j++){
      shiftOut(5,6,MSBFIRST,~board[j]);
      shiftOut(5,6,LSBFIRST,128>>j);
      store();
    }
  }
  delay(500);
  
  while(true){ // shows the score of the game in binary at the top of the matrix, and the difficulty at the bottom
    for (int j=0; j<8; j++){
      shiftOut(5,6,MSBFIRST,~scDif[j]);
      shiftOut(5,6,LSBFIRST,128>>j);
      store();
    }
  }
}

// variables used for the tetris music
int noteNum=0;
int buzzer=8; // buzzer pin
long nTime;



// pins used to sent outputs to the matrix through the shift registers
int data=5;
int shift=6;
int stor=7;

// pin used for the poteniometer for the game difficulty
int potent=A0;

// pins used for the joystick to control the shape
int joyx=A2;
int joyy=A1;

// variables used for the game
boolean gameSoild[8][8]; // stores the game board other than the shape in play
int gameRun[8]; // the array that is used to print the game board
boolean pieceSh[5][2][2]={{{1,1},{1,1}},{{0,1},{1,0}},{{1,0},{1,1}},{{1,1},{0,0}},{{0,1},{0,0}}}; // stores all the possible game shapes
boolean pieceOr[2][2]; // store the current game shape and its orientation
int pieceNum; // is used to copy a random shape from pieceSh to pieceOr
int pieceLoc[]={0,0}; // stores the location of the shape in play
int pieceLocVal[]={1,2,4,8,16,32,64,128}; // used to add values to gamerun based on the location of the lights
boolean piece=0; // sed to check if a piece is in play
long stDrop; // stores the last time a piece dropped
long stSide=0; //stores the last time a piece moved to the side
long stRot=0; // stores the last time a piese wass rotated
int dropDif; //store game difficulty
int score=0; // stores thee game score


void setup(){
  // declare pins for input and output
  pinMode(data,OUTPUT);
  pinMode(shift,OUTPUT);
  pinMode(stor,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(potent,INPUT);
  pinMode(joyx,INPUT);
  pinMode(joyy,INPUT);
  
  while(analogRead(joyy)<773){ // runs until the joystick is pointed up
    dropDif=(8*analogRead(potent))/1023; // shows the drop difficulty on the screen as a line, the higher the more difficult
    shiftOut(data,shift,MSBFIRST,0);
    shiftOut(data,shift,LSBFIRST,128>>dropDif);
    store();
    delay(10);
  }
  delay(1000);
  nTime=millis(); //sets the start time for the tetris music
}

void loop() { // main loop for the game
  for (int i=0; i<8; i++){ 

    // when there is no shape in play checks if a row can be removed form the board, then checks if a new shape can be placed or if the game should be ended
    if (piece==0){// checks if a shape is in play
      
      // picks a random shape and copies it to the shapeOr array
      pieceNum=random(5);
      pieceOr[0][0]=pieceSh[pieceNum][0][0];
      pieceOr[1][0]=pieceSh[pieceNum][1][0];
      pieceOr[0][1]=pieceSh[pieceNum][0][1];
      pieceOr[1][1]=pieceSh[pieceNum][1][1];
      
      // checks to see if the top of the shape fills a row. Then removes that row, moves the rows above down, and increases the game score by 5
      if (gameRun[pieceLoc[1]]==255){
        for (int j=(pieceLoc[1]); j<7; j++){
          gameRun[j]=gameRun[j+1];
          for (int k=0; k<8; k++){
            gameSoild[k][j]=gameSoild[k][j+1];
          }
        }
        gameRun[7]=0;
        for (int j=0; j<8; j++){
          gameSoild[j][7]=0;
        }
        score+=5;
      }
      
      // repeats the previous code however for the row at the bottom of the shape
      if (gameRun[pieceLoc[1]-1]==255){
        for (int j=(pieceLoc[1]-1); j<7; j++){
          gameRun[j]=gameRun[j+1];
          for (int k=0; k<8; k++){
            gameSoild[k][j]=gameSoild[k][j+1];
          }
        }
        gameRun[7]=0;
        for (int j=0; j<8; j++){
          gameSoild[j][7]=0;
        }
        score+=5;
      }

      // checks if there is space for the chosen shape
      if ((gameSoild[3][7]==0||pieceOr[0][1]==0)&&(gameSoild[4][7]==0||pieceOr[1][1]==0)&&
          (gameSoild[3][6]==0||pieceOr[0][0]==0)&&(gameSoild[4][6]==0||pieceOr[1][0]==0)){
        
        pieceLoc[0]=4;// resets the piece location variables
        pieceLoc[1]=7;
        piece=1;// stores that there is a shape in play
        score+=1;// increases the score by 1
        gameRun[7]+=((pieceOr[0][1]*pieceLocVal[3])+(pieceOr[1][1]*pieceLocVal[4]));// adds the shape to the printed board
        gameRun[6]+=((pieceOr[0][0]*pieceLocVal[3])+(pieceOr[1][0]*pieceLocVal[4]));
        stDrop=millis();// resets the drop time
      }
      
      else{// if there is no space for the shape ends the music and runs gameOver
        
        noTone(buzzer);
        gameOver(score,dropDif);
      }
    }
    
    // drops or places the shape when the joysick is pointed down or a given time based on difficulty passes
    else if ((millis()-stDrop)>=(400+100*dropDif)||(analogRead(joyy)<250&&millis()-stDrop>=100)){
      
      // checks if there is space for the shape to drop
      if ((pieceLoc[1]>1||(pieceLoc[1]==1&&pieceOr[0][0]==0&&pieceOr[1][0]==0))&&(gameSoild[pieceLoc[0]-1][pieceLoc[1]-2]==0||pieceOr[0][0]==0)&&(gameSoild[pieceLoc[0]][pieceLoc[1]-2]==0||pieceOr[1][0]==0)&&
          (gameSoild[pieceLoc[0]-1][pieceLoc[1]-1]==0||pieceOr[0][1]==0)&&(gameSoild[pieceLoc[0]][pieceLoc[1]-1]==0||pieceOr[1][1]==0)){
        
        gameRun[pieceLoc[1]]-= ((pieceOr[0][1]*pieceLocVal[pieceLoc[0]-1])+(pieceOr[1][1]*pieceLocVal[pieceLoc[0]]));
        gameRun[pieceLoc[1]-1]+= (((pieceOr[0][1]*pieceLocVal[pieceLoc[0]-1])+(pieceOr[1][1]*pieceLocVal[pieceLoc[0]]))-
            ((pieceOr[0][0]*pieceLocVal[pieceLoc[0]-1])+(pieceOr[1][0]*pieceLocVal[pieceLoc[0]])));
        gameRun[pieceLoc[1]-2]+= ((pieceOr[0][0]*pieceLocVal[pieceLoc[0]-1])+(pieceOr[1][0]*pieceLocVal[pieceLoc[0]]));// updates the printed game board
        pieceLoc[1]-=1;// lowers the shape location
        stDrop=millis();// resets the drop time
      }

      //runs when there is no space for the shape to drop
      else{

        // places the shape on the soild board
        if (pieceOr[0][1]==1)
          gameSoild[pieceLoc[0]-1][pieceLoc[1]]= 1;
        if (pieceOr[1][1]==1)
          gameSoild[pieceLoc[0]][pieceLoc[1]]= 1;
        if (pieceOr[0][0]==1)
          gameSoild[pieceLoc[0]-1][pieceLoc[1]-1]= 1;
        if (pieceOr[1][0]==1)
        gameSoild[pieceLoc[0]][pieceLoc[1]-1]= 1;
        
        piece=0;// lats program know there is no shape in play
      }
    }
    
    // shifts the shape to the left when it is possible and the joystick is pointed to the left
    else if ((analogRead(joyx)<250)&&(millis()-stSide)>=150&&(gameSoild[pieceLoc[0]-2][pieceLoc[1]]==0||pieceOr[0][1]==0)&&(gameSoild[pieceLoc[0]-2][pieceLoc[1]-1]==0||pieceOr[0][0]==0)
        &&(gameSoild[pieceLoc[0]-1][pieceLoc[1]]==0||pieceOr[1][1]==0)&&(gameSoild[pieceLoc[0]-1][pieceLoc[1]-1]==0||pieceOr[1][0]==0)&&(pieceLoc[0]>1||(pieceLoc[0]==1&&pieceOr[0][1]==0&&pieceOr[0][0]==0))){
      
      gameRun[pieceLoc[1]] -= ((pieceLocVal[pieceLoc[0]-2]*pieceOr[0][1])+(pieceLocVal[pieceLoc[0]-1]*pieceOr[1][1]));
      gameRun[pieceLoc[1]-1] -= ((pieceLocVal[pieceLoc[0]-2]*pieceOr[0][0])+(pieceLocVal[pieceLoc[0]-1]*pieceOr[1][0]));// updates the printed game board
      pieceLoc[0] -= 1; // moves the piece location to the left
      stSide=millis(); // resets the side to side time
    }
    
    // shifts the shape to the right when it is possible and the joystick it pointed to the left
    else if ((analogRead(joyx)>773)&&(millis()-stSide)>=150&&(gameSoild[pieceLoc[0]][pieceLoc[1]]==0||pieceOr[0][1]==0)&&(gameSoild[pieceLoc[0]][pieceLoc[1]-1]==0||pieceOr[0][0]==0)
        &&(gameSoild[pieceLoc[0]+1][pieceLoc[1]]==0||pieceOr[1][1]==0)&&(gameSoild[pieceLoc[0]+1][pieceLoc[1]-1]==0||pieceOr[1][0]==0)&&(pieceLoc[0]<7||(pieceLoc[0]==7&&pieceOr[1][1]==0&&pieceOr[1][0]==0))){
      
      gameRun[pieceLoc[1]] += ((pieceLocVal[pieceLoc[0]-1]*pieceOr[0][1])+(pieceLocVal[pieceLoc[0]]*pieceOr[1][1]));
      gameRun[pieceLoc[1]-1] += ((pieceLocVal[pieceLoc[0]-1]*pieceOr[0][0])+(pieceLocVal[pieceLoc[0]]*pieceOr[1][0]));// updates the printed game board
      pieceLoc[0] += 1; // moves the piece location to the right
      stSide=millis(); // resets the side to side time
    }
    
    //plays the next note when the pause between notes is over
    else if ((millis()-nTime)>=((1300/noteDurations[(noteNum/2)]))&&(noteNum%2)==0){
      tone(buzzer, melody[(noteNum/2)]);
      nTime=millis();
      noteNum+=1;
      noteNum=noteNum%((sizeof(melody)-1)/2);
    }
    
    //plays the pause between notes when the note time is over
    else if ((millis()-nTime)>=((1000/noteDurations[((noteNum-1)/2)]))&&(noteNum%2)==1){
      noTone(buzzer);
      nTime=millis();
      noteNum+=1;  
    }
    
    // rotates the shape in play if the joystick is moved up and there is space
    else if((analogRead(joyy)>773)&&(millis()-stRot)>=300&&pieceLoc[0]!=0&&pieceLoc[0]!=8&&pieceLoc[1]!=0){
      
      // removes the previous shape orientation from the printed game board
      gameRun[pieceLoc[1]] -= ((pieceLocVal[pieceLoc[0]-1]*pieceOr[0][1])+(pieceLocVal[pieceLoc[0]]*pieceOr[1][1]));
      gameRun[pieceLoc[1]-1] -= ((pieceLocVal[pieceLoc[0]-1]*pieceOr[0][0])+(pieceLocVal[pieceLoc[0]]*pieceOr[1][0]));
      
      // rotates the shape array
      boolean temp;
      temp=pieceOr[0][1];
      pieceOr[0][1]=pieceOr[0][0];
      pieceOr[0][0]=pieceOr[1][0];
      pieceOr[1][0]=pieceOr[1][1];
      pieceOr[1][1]=temp;

      // adds the the new game board orientation
      gameRun[pieceLoc[1]] += ((pieceLocVal[pieceLoc[0]-1]*pieceOr[0][1])+(pieceLocVal[pieceLoc[0]]*pieceOr[1][1]));
      gameRun[pieceLoc[1]-1] += ((pieceLocVal[pieceLoc[0]-1]*pieceOr[0][0])+(pieceLocVal[pieceLoc[0]]*pieceOr[1][0]));
      stRot=millis(); // resets the rotate time
    }

    // prints the game board on the 8x8 matrix this multiplexes throught the rows that is what the for loop at the begining is for to multiplex the 8x8 matrix
    shiftOut(data,shift,MSBFIRST,~gameRun[i]); // shifts the column for the row
    shiftOut(data,shift,MSBFIRST,128>>i);// shifts the single row in that is printed board
    store();
  }
}
