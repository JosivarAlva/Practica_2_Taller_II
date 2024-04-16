/*
Fundacion Kinal 
Centro educativo tecnico laboral Kinal
Quinto perito 
Quinto electronica 
Codigo Tecnico:  EBSAV 
curso: Taller de electronica digital y reparacion de computadoras I
Proyecto: Como leer un pin digital
Dev: Josivar Alva
Fecha: 12 de abril 
*/

//Directivas de preprocesador
#define LedNaranja 4 //pina conectado a un led
#define tiempo espera 580 //tiempo entre estados del led

void setup()
{
 pinMode(LedNaranja, OUTPUT); //Pina como salida.
 digitalWrite(LedNaranja, LOW); //LED conectado al pini3 inicia apagado

}

void loop()
{
digitalWrite(LedNaranja, HIGH); //Enciendo el led conectado al pina
delay(500); //espera de 500 milisegundos.
digitalWrite(LedNaranja, LOW); //Apago el led conectado al pina
delay(500); //espera de 500 milisegundos
}
