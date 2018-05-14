/****************************************************************
**                                                             **         
**              TÍTOL:                                         **
**              Examen Multímetre                              **
**                                                             **
**   NOM: Joan Josep Moreno                DATA: 14/05/2018    **
*****************************************************************/
//************************ INCLUDE *******************************


//************************ VARIABLES *****************************
float R2 = 10.12;
float Vin;
float Itotal;
float Rtotal;
float Vr2;
float Ir2;
float R1;
const int pin = A0;   
float Ir1;
float Vr1;
float c;

//************************** SETUP *******************************

void setup() 
{  
     c= analogRead(pin);
R1 = R1*1000;
 Vin = ((float)c * 5)/1023;  
 R1 = ( (R2 * 5) / Vin ) - R1;
 
Serial.begin(9600);
Serial.print(pin);
Serial.print("La resistencia R1 = ");
Serial.print(R1);
Serial.println(" Kohms.");
Serial.println("La resistencia R2 = 10,12 Kohms.");
Serial.print("La tensió de sortida és de ");
Serial.print (Vin);
Serial.println(" V.");
Serial.print("La intensitat total és ");
Serial.print(Itotal);
Serial.println(" A");
Serial.print("La tensió de R1 és ");
Serial.print(Vr1);
Serial.println(" V.");
Serial.print("La tensió de R2 és ");
Serial.print(Vr2);
Serial.println(" V.");
Serial.print("La intensitat a R1 és ");
Serial.print(Ir1);
Serial.println(" A");
Serial.print("La intensitat a R2 és ");
Serial.print(Ir2);
Serial.println(" A");
}

//*************************** LOOP ******************************

void loop(){
  
}

//************************ FUNCIONS *****************************
