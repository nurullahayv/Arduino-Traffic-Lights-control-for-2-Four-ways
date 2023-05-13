int sag_yayaY=11;
int sag_dikeyY=13;
int sag_yatayY=12;
int sag_yayaK=9;
int sag_yatayK=7;
int yatay_sari=10;
int sag_dikeyK=8;
int sol_dikeyK=2;
int dikey_sari=3;
int sol_yatayK=1;
int sol_yayaY=6;
int sol_yayaK=0;
int sol_dikeyY=5;
int sol_yatayY=4;


void setup() {
 pinMode (sag_yayaY,OUTPUT);

 pinMode (sag_dikeyY,OUTPUT);
 pinMode (sag_yatayY,OUTPUT);
 pinMode (sag_yayaK,OUTPUT);
 pinMode (sag_yatayK,OUTPUT);
 pinMode (dikey_sari,OUTPUT);
 pinMode (sag_dikeyK,OUTPUT);
 pinMode (sol_dikeyK,OUTPUT);
 pinMode (yatay_sari,OUTPUT);
 pinMode (sol_yatayK,OUTPUT);
 pinMode (sol_yayaY,OUTPUT);
 pinMode (sol_yayaK,OUTPUT);
 pinMode (sol_dikeyY,OUTPUT);
 pinMode (sol_yatayY,OUTPUT);


}
void loop() {
 //1.DURUM
 digitalWrite (sag_yatayY,HIGH);
 digitalWrite (sag_yatayK,LOW);
 digitalWrite (sag_dikeyY,LOW);
 digitalWrite (sag_dikeyK,HIGH);
 digitalWrite (sag_yayaY,LOW);
 digitalWrite (sag_yayaK,HIGH);

 digitalWrite (yatay_sari,LOW);
 digitalWrite (dikey_sari,LOW);

 digitalWrite (sol_yatayY,HIGH);
 digitalWrite (sol_yatayK,LOW);

 digitalWrite (sol_dikeyY,LOW);
 digitalWrite (sol_dikeyK,HIGH);
 digitalWrite (sol_yayaY,LOW);
 digitalWrite (sol_yayaK,HIGH);

 delay(3000);
 //2.DURUM
 digitalWrite (sag_yatayY,LOW);
 digitalWrite (sag_yatayK,LOW);
 digitalWrite (sag_dikeyY,LOW);
 digitalWrite (sag_dikeyK,HIGH);
 digitalWrite (sag_yayaY,LOW);
 digitalWrite (sag_yayaK,HIGH);

 digitalWrite (yatay_sari,HIGH);
 digitalWrite (dikey_sari,LOW);

 digitalWrite (sol_yatayY,LOW);
 digitalWrite (sol_yatayK,LOW);
 digitalWrite (sol_dikeyY,LOW);
 digitalWrite (sol_dikeyK,HIGH);
 digitalWrite (sol_yayaY,LOW);
 digitalWrite (sol_yayaK,HIGH);

 delay(600);
 //3.DURUM
 digitalWrite (sag_yatayY,LOW);
 digitalWrite (sag_yatayK,HIGH);
 digitalWrite (sag_dikeyY,LOW);
 digitalWrite (sag_dikeyK,HIGH);
 digitalWrite (sag_yayaY,HIGH);
 digitalWrite (sag_yayaK,LOW);


 digitalWrite (yatay_sari,LOW);
 digitalWrite (dikey_sari,LOW);

 digitalWrite (sol_yatayY,LOW);
 digitalWrite (sol_yatayK,HIGH);
 digitalWrite (sol_dikeyY,LOW);
 digitalWrite (sol_dikeyK,HIGH);
 digitalWrite (sol_yayaY,HIGH);
 digitalWrite (sol_yayaK,LOW);

 delay(2000);
 //4.DURUM
 digitalWrite (sag_yatayY,LOW);
 digitalWrite (sag_yatayK,HIGH);
 digitalWrite (sag_dikeyY,LOW);
 digitalWrite (sag_dikeyK,LOW);
 digitalWrite (sag_yayaY,LOW);
 digitalWrite (sag_yayaK,HIGH);

 digitalWrite (yatay_sari,LOW);
 digitalWrite (dikey_sari,HIGH);

 digitalWrite (sol_yatayY,LOW);
 digitalWrite (sol_yatayK,HIGH);
 digitalWrite (sol_dikeyY,LOW);
 digitalWrite (sol_dikeyK,LOW);
 digitalWrite (sol_yayaY,LOW);
 digitalWrite (sol_yayaK,HIGH);

 delay(600);
 //5.DURUM

 digitalWrite (sag_yatayY,LOW);
 digitalWrite (sag_yatayK,HIGH);
 digitalWrite (sag_dikeyY,HIGH);
 digitalWrite (sag_dikeyK,LOW);
 digitalWrite (sag_yayaY,LOW);
 digitalWrite (sag_yayaK,HIGH);

 digitalWrite (yatay_sari,LOW);
 digitalWrite (dikey_sari,LOW);

 digitalWrite (sol_yatayY,LOW);
 digitalWrite (sol_yatayK,HIGH);
 digitalWrite (sol_dikeyY,HIGH);
 digitalWrite (sol_dikeyK,LOW);
 digitalWrite (sol_yayaY,LOW);
 digitalWrite (sol_yayaK,HIGH);

 delay(3000);
 //6.DURUM
 digitalWrite (sag_yatayY,LOW);
 digitalWrite (sag_yatayK,HIGH);
 digitalWrite (sag_dikeyY,LOW);
 digitalWrite (sag_dikeyK,LOW);
 digitalWrite (sag_yayaY,LOW);
 digitalWrite (sag_yayaK,HIGH);

 digitalWrite (yatay_sari,LOW);
 digitalWrite (dikey_sari,HIGH);

 digitalWrite (sol_yatayY,LOW);
 digitalWrite (sol_yatayK,HIGH);
 digitalWrite (sol_dikeyY,LOW);

 digitalWrite (sol_dikeyK,LOW);
 digitalWrite (sol_yayaY,LOW);
 digitalWrite (sol_yayaK,HIGH);

 delay(600);
 //7.DURUM
 digitalWrite (sag_yatayY,LOW);
 digitalWrite (sag_yatayK,HIGH);
 digitalWrite (sag_dikeyY,LOW);
 digitalWrite (sag_dikeyK,HIGH);
 digitalWrite (sag_yayaY,HIGH);
 digitalWrite (sag_yayaK,LOW);

 digitalWrite (yatay_sari,LOW);
 digitalWrite (dikey_sari,LOW);

 digitalWrite (sol_yatayY,LOW);
 digitalWrite (sol_yatayK,HIGH);
 digitalWrite (sol_dikeyY,LOW);
 digitalWrite (sol_dikeyK,HIGH);
 digitalWrite (sol_yayaY,HIGH);
 digitalWrite (sol_yayaK,LOW);

 delay(2000);
 //8.DURUM
 digitalWrite (sag_yatayY,LOW);
 digitalWrite (sag_yatayK,LOW);
 digitalWrite (sag_dikeyY,LOW);
 digitalWrite (sag_dikeyK,HIGH);
 digitalWrite (sag_yayaY,LOW);
 digitalWrite (sag_yayaK,HIGH);

 digitalWrite (yatay_sari,HIGH);
 digitalWrite (dikey_sari,LOW);

 digitalWrite (sol_yatayY,LOW);
 digitalWrite (sol_yatayK,LOW);
 digitalWrite (sol_dikeyY,LOW);
 digitalWrite (sol_dikeyK,HIGH);
 digitalWrite (sol_yayaY,LOW);
 digitalWrite (sol_yayaK,HIGH);

 delay(600);

}
