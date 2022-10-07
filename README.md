# Progetto-Temperatura-Tazza
PROGETTO  I.O.T.  ZEFIRO  2022

Progetto: Termometro per misurare la temperatura del liquido contenuto in una tazza per stabilire se è troppo caldo, troppo freddo, o della giusta temperatura per essere bevuto (il liquido preso come riferimento per le misurazioni è il caffè). 
Materiale utilizzato: Scheda ESP8266, Breadboard, Termometro da contatto LM35, Tazza di caffè, Led RGB HC4512 6005937, Altoparlante auricolare.
Procedimento: 
1.	Collegare scheda al terminale.
2.	Eseguire il codice per il funzionamento del led, del termometro e dell’altoparlante.
3.	Applicare il termometro al lato della tazza di caffè.
4.	Il led RGB assumerà colori differenti in base alla temperatura del caffè (azzurro se la temperatura è inferiore a 30°C, giallo se è maggiore di 30°C e rosso se è maggiore di 45°C.
5.	Inoltre l’altoparlante invierà in output un “beep” quando la temperatura è compresa tra i 39°C e i 41°C, ovvero la temperatura ideale per bere il caffè.
Materiale Mancante: led RGB e altoparlante

float vref = 3.0;
float resolution = vref/1023;
const int SPEAKER_PIN = D6;
int frequency = 1000; //frequenza per il beep (in Hz)
int red_light_pin= 11;
int green_light_pin = 10;
int blue_light_pin = 9;

