#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <cctype>
#include <fstream>

using namespace std;
#define TAM 20
#define NUM_MESES 12
char res;
void selector();
int change=0;
int numero=0;
int answer=0;
float answ=0;
float answ2=0;
int dias=0;
int distancia=0;
float T1,P1,N1=0;
float second=0;
int numtrat=0;
int age=0;
int S=0;
float sueldo=0;
int option=0;
float l1,l2,l3=0;
int month,day=0;
int contadorP=0;
int contadorI=0;
int longit=0;
int COS[12];
/*variables para las areas*/
float area,area1,area2,perimetro,diagonales;
/*variables para los lados*/
float lado,base,dmay,dmen,radio,apote,basemay,basemen,altura;
int filas1=1;
int columnas1=1;
int filas2=1;
int columnas2=0;
const int filasycol=8;
const int nLong=8;
int reinas[8];
int tablero2[nLong][nLong];
int posiblesMovsC[8][2]={{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2},{1,-2},{2,-1}};
void GenerarMatriz (int fila, int columna, int**);
//Variables Globales
//Problemas de la p�gina 1 en esta secci�n
int numerospin(int num){
    num=0;
    answer=(num==0)? printf("El numero que ingreso es nulo\n")
    :(num%2==0)?printf("El numero que ingreso es par\n")
    :printf("El numero es impar");
    return 0;
}
int precio(int distan,int dia){
float precio=0.00;
float descuento=0.00;
precio= distan*0.19;
if(dia>=10 && distan>=500){
    descuento=precio*0.20;
    precio=precio-descuento;
    printf("El descuento aplicado es el siguiente: $ - %0.2f\n",descuento);
    printf("El precio final del billete es %0.2f\n $",precio);
    }else{
    printf("El precio final del billete es %0.2f\n $",precio);
   }
}
int expresion(float t,float p,float n){
float division=t/p;
answ=pow(division,n);
//calculo de la primera expresi�n
float first=0;
first=pow(t,n);
second=pow(p,n);
answ2=first/second;
//calculo de la segunda
printf("Valor de division %0.2f\n",division);
printf("Valor de division%0.4f\n",answ2);
if(answ!=answ2){
    printf("No existe igualdad \n");
}else{
printf("La expresion es igual \n");
}
}
int ixtapan(int trata,int edad,int days){
printf("Calculando...\n");
if(days<=0){
printf("No se puede quedar 0 dias en este lugar");
}
float price=0;
float descuento=0;
switch(trata){
case 1:
    price=2800*days;
    break;
case 2:
    price=1950*days;
    break;
case 3:
    price=2500*days;
    break;
case 4:
    price=1150*days;
    break;
}
if(edad<25){
descuento=price*0.15;
price=price-descuento;
printf("EL descuento aplicado es del 15  %0.2f\n",descuento);
printf("El precio final con descuento es de  %0.2f\n",price);
}else if(edad>=60){
descuento=price*0.25;
price=price-descuento;
printf("EL descuento aplicado es del 25  %0.2f\n",descuento);
printf("El precio final con descuento es de  %0.2f\n",price);
}else{
   printf("El precio final de su boleto es  %0.2f\n",price);
}
}
int sonido(int S){
float Temp=(S/4)+40;
printf("La temperaturaen base a los sonidos de un grillo es de\t");
printf("%0.2f\t",Temp);
printf("Grados Farenheid");
}
int incrementoS(float salario){

float total=0;
float inc=0;
if(salario<18000){
printf("merece un aumento del 12\n");
inc=salario*0.12;
total=salario+inc;
printf("el incremento que recibe es del %0.2f\n",inc);
printf("Salario nuevo y actual %0.2f",total);
}else if(salario>=18000 && salario<=30000){
printf("merece un aumento del 8\n");
inc=salario*0.08;
total=salario+inc;
printf("el incremento que recibe es del %0.2f\n",inc);
printf("Salario nuevo y actual %0.2f",total);
}else if(salario>30000&&salario<=50000){
printf("merece un aumento del 7\n");
inc=salario*0.07;
total=salario+inc;
printf("el incremento que recibe es del %0.2f\n",inc);
printf("Salario nuevo y actual %0.2f",total);
}else if(salario>50000){
printf("merece un aumento del 6\n");
inc=salario*0.06;
total=salario+inc;
printf("el incremento que recibe es del %0.2f\n",inc);
printf("Salario nuevo y actual %0.2f",total);
}
}
//Problemas de la p�gina 1 en esta secci�n
int divisoresono(int n1,int n2){
int valor=0;
valor=n1%n2;
if(valor!=0){
    printf("el numero %d",n2);
    printf("No es divisor de %d \t",n1);
}else{
    printf("el numero %d\n",n2);
    printf("Si es divisor de %d\n",n1);
}
}
int ordenC(int nc1,int nc2,int nc3){
    if(nc1<=nc2&&nc2<=nc3){
        printf("Los numeros estan en orden creciente\n");
        printf("y se muestran en el siguiente orden\n");
        printf("%d\t",nc1);
        printf("%d\t",nc2);
        printf("%d\t",nc3);
    }else{
        printf("Los numeros estan en otro tipo de orden");
    }
}
int mayordeT(int m1,int m2,int m3){
 if(m1>m2 && m1>m3){
    printf("El numero 1 es el mayor de los 3");
 }else if(m2>m1 && m2>m3){
  printf("El numero 2 es el mayor de los 3");
 }else{
 printf("El numero 3 es el mayor de los 3");
 }
}
int conversor(int opc){
float val=0;
float resultad=0;
switch(opc){
case 1:{
printf("Numero de pulgadas a convertir \n");
scanf("%f",&val);
resultad=val*25.4;
printf("las pulgadas %0.4f\t",val);
printf("Equivalen a %0.4f\t",resultad);
printf("milimetros");
break;
}
case 2:
    {
    printf("Numero de Yardas a convertir ");
    scanf("%f",&val);
    resultad=val*0.9144;
    printf("las yardas %0.4f\t",val);
    printf("Equivalen a %0.4f\t",resultad);
    printf("metros");
    break;
    }
case 3:{
    printf("Numero de Millas a convertir ");
    scanf("%f",&val);
    resultad=val*1.609;
    printf("las millas %0.4f\t",val);
    printf("Equivalen a  %0.4f\t",resultad);
    printf("kilometros");
    break;
}

}
}
int triangulos(float a,float b,float c){
if(a+b>c && a+c>b && b+c>a){
    printf("esto es un triangulo");
    float area=0;
    float S=0;
    float pr=0;
    S=(a+b+c)/2;
    pr=S*(S-a)*(S-b)*(S-c);
    area=sqrt(pr);
     if(a==b && b!=c || c==b && b!=a || a==c && b!=c){
    printf("Es un triagulo isoceles\n");
    }else if(a==b && b==c && c==b){
    printf("Es un triagulo equilatero\n");
    }else{
     printf("Es un triagulo escaleno\n");
    }
    printf("El area del triangulo respecto a sus lados es %f\n",area);
}else{
 printf("Eso no es un triangulo \n");
}
}
int sabertriangulo(float a,float b,float c){
 if(a==b && b!=c || c==b && b!=a || a==c && b!=c){
    printf("Es un triagulo isoceles\n");
    }else if(a==b && b==c && c==b){
    printf("Es un triagulo equilatero\n");
    }else{
     printf("Es un triagulo escaleno\n");
    }
}
int salarioreal(int horas,char name[],char pue[],float c){
float sueldom=0;
sueldom=c*horas;
float sueldoMd=(sueldom*7)*30;
float red=0;
if(sueldoMd>8000){
red=sueldoMd*0.05;
sueldom=sueldom-red;
printf("\nEl salario real de %s (%s)\n", name, pue);
printf("Su sueldo ha sufrido una reduccion del 5 por ciento y es %0.2f",sueldoMd);
}else{
printf("\nEl salario real de %s (%s)\n", name, pue);
printf("%0.2f",sueldoMd);
}
}
int zodiaco(int dia,int mes){
if(dia>=20 && mes==1 || dia<=18 && mes==2){
    printf("Tu signo zodiacal es Acuario");
}else if(dia<=0 && mes<=0){
    printf("No existe el mes 0 ni un dia 0 ");
}else if(dia>=19 && mes==2 || dia<=20 && mes==3){
    printf("Tu signo zodiacal es piscis ");
}else if(dia>=21 && mes==3 || dia<=19 && mes==4){
    printf("Tu signo zodiacal es Aries ");
}else if(dia>=20 && mes==4 || dia<=20 && mes==5){
 printf("Tu signo zodiacal es Tauro ");
}else if(dia>=21 && mes==5 || dia<=20 && mes==6){
printf("Tu signo zodiacal es geminis");
}else if(dia>=21 && mes==6 || dia<=22 && mes==7){
printf("Tu signo zodiacal cancer");
}else if(dia>=23 && mes==7 || dia<=22 && mes==8){
printf("Tu signo zodiacal leo");
}else if(dia>=23 && mes==8 || dia<=22 && mes==9){
printf("Tu signo zodiacal Virgo");
}else if(dia>=23 && mes==9 || dia<=22 && mes==10){
printf("Tu signo zodiacal Libra");
}else if(dia>=23 && mes==10 || dia<=21 && mes==11){
printf("Tu signo zodiacal escorpio");
}else if(dia>=22 && mes==11 || dia<=21 && mes==12){
    printf("Tu signo zodiacal sagitario");
}else if(dia>=22 && mes==12 || dia<=19 && mes==1){
 printf("Tu signo zodiacal capricornio");
}
else{
printf("el mes o el dia son superiores a los que existen");
}
}
int biciesto(int year){
    if(year%4==0 && (year % 100 != 0 || year % 400 == 0) ){
        printf("El a�o %d en el que naciste Fue biciesto\n",year);
    }else{
     printf("El a�o %d en el que naciste no Fue biciesto\n",year);
    }
}
int promedioI(int num){
    float promP=0;
    float promI=0;
    int sumP=0;
    int sumI=0;
    if(num>=1&&num<=500){
            for(int i=1;i<=num;i++){
        if(i%2==0){
            contadorP++;
            sumP+=i;
        }else{
            contadorI++;
            sumI+=i;
        }
    }
    promP=sumP/contadorP;
    promI=sumI/contadorI;
      printf("La suma de numeros pares%d\n", sumP);
      printf("La suma de numeros Impares%d\n", sumP);
    printf("El promedio de pares  es%0.2f\n", promP);
    printf("El promedio de impares es%0.2f\n",promI);

    }else{
        printf("La catidad esta fuera de los limites");
    }
}
int serie(int Numb){
    double resultado=1;
    double solo=1;
for(int i=2;i<=Numb;i++){
        solo*=1.0/i;
        resultado*=solo;
}
printf("El resultado de la serie es %f\n",resultado);
}
//terminan de la p�gina 2 en esta secci�n
//Comienzan los ejercicios de la p�gina 3
int factorialm(int num){
    int value=1;
    if(num==0){
        printf("El factorial de ese numero siempre es 1\n");
    }else{
    for(int i=1;i<=num;i++){
        value*=i;
    }
    printf("el factorial de el numero %d  es :",num);
    printf("%d\n",value);
    }
}
int factorial2(int num){
    int value=1;
    if(num==0){
        return 1;
    }else{
    for(int i=1;i<=num;i++){
        value*=i;
    }
        return value;
    }
}
int interes(int capital,float tasa,int meses){
    float CantidadFinal=0;
    CantidadFinal=capital*pow(1+tasa/100,meses);
    printf("La cantidad que obtendr� despues de ese tiempo es %0.4f\n pesos ",CantidadFinal);
}
int serie2(int cant){
    float resultado=0;
    resultado=pow(cant, cant) * ((cant % 2 == 0) ? -1 : 1);
    printf("%0.3f",resultado);
}
int serieCos(double angulo,int terminos){
double cosx,term;
    // Inicializamos cosx a 1, ya que el primer término de la serie es 1
  cosx = 1;
  for (int i = 1; i <= terminos; i++) {
//     Calculamos el siguiente término de la serie
    term = -term * angulo * angulo / ((2 * i) * (2 * i - 1));
     //Agregamos el término a la suma acumulada
    cosx = cosx + term;
}
  printf("cos(x) es aproximadamente %lf\n", cosx);
  printf("La funcion cos de la biblioteca math da %lf\n", cos(angulo));
return cosx;
}
int seriesenx(double angulo,int terminos){
double senx,term,termn2;
term=angulo;
for(int i=3;i<=terminos+(terminos+1);i+=2){
    printf("%d|",i);
    termn2+=(pow(angulo,i))/factorial2(i);
}
printf("\n");
//termn2=(pow(angulo,3))/factorial2(terminos);
senx=term-termn2;
printf("Valor de X %f\n",term);
printf("Resultado de la suma %f\n",termn2);
printf("SENX  %0.4f\n",senx);
}
void serieEuler(double values,int terminos){
    int suma1=1+values;
    int suma2=0;
    int euler=0;
    for(int i=2;i<=terminos+1;i++){
    printf("%d|",i);
    suma2+=pow(values,i)/factorial2(i);
    }
    euler=suma1+suma2;
    printf("El valor de la sucesion es: %d",euler);
}
void serieB(double val,int terminos){
    double suma1=0;
    double suma2=0;
//Desplazamiento Impar
for(int i=1;i<=terminos+(terminos-1);i+=2){
   // printf("%d|",i);
    //printf("\n");
    for(int j=2;j<=terminos;j+=2){
     suma1+=pow((val-i),j)/factorial2(j);
    }
}

 printf("Resultado de la operación :%f",suma1);
}

void perfectos(int num){
    int valor=num;
    int contador=0;
    int numerosA[num];
  // Calculamos la suma de los divisores del número
  int sum = 0;
  for (int i = 1; i <num; i++) {
    if (num % i == 0) {
      sum += i;
      contador++;
      numerosA[i]=i;
    }else{
    numerosA[i]=0;
    }
  }
  // Comprobamos si el número es perfecto
  if (sum == num) {
        printf("Y los numeros que nos acercan al resultado son  %d \n",contador);
        printf("Y los numeros son :");
        for(int i=1;i<contador;i++){
        printf(" %d ",numerosA[i]);
        }
        printf("\n");
    printf("El numero %d es perfecto\n", num);
  } else {
    printf("El numero %d no es perfecto\n", num);
  }
}
bool primos(int num){
  if (num <= 1) {
    return false;
  }
  for (int i = 2; i <= sqrt(num); i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}
int reversodeI(int nv){
    int reversse=0;
    while(nv>0){
        reversse=reversse*10 + nv%10;
        nv/=10;
    }
    printf("El inverso del numero es %d",reversse);
}
int conversorg(int opc){
    float Temp=0;
    float res=0;
    switch(opc){
        case 1:{
            printf("Grados cent�grados a grados Fahrenheit \n");
            printf("Introduce los grados cent�grados  \n");
            scanf("%f",&Temp);
            res=(((Temp*9))/5)+32;
            printf("Los grados Fahrenheit desde centigrados es de %0.4f grados Fahrenheit \n",res);
            break;
        }
        case 2:{
        printf("Grados Fahrenheit a grados cent�grados \n");
            printf("Introduce los grados Fahrenheit \n");
            scanf("%f",&Temp);
            res=((Temp-32)*5)/9;
            printf("Los grados centigrados  desde Fahrenheit   es de %0.4f grados centigrados \n",res);
        break;
        }
        case 3:{
            printf("Grados cent�grados a kelvins \n");
            printf("Introduce los grados cent�grados  \n");
            scanf("%f",&Temp);
            res=Temp+273.15;
            printf("Los grados kelvin  desde centigrados  es de %0.4f grados kelvin \n",res);
            break;
        }
        case 4:{
            printf(" Kelvins a grados cent�grados \n");
            printf("Introduce los grados Kelvin \n");
            scanf("%f",&Temp);
            res=Temp-273.15;
            printf("Los grados centigrados  desde Kelvin  es de %0.4f grados centigrados \n",res);
            break;

        }
    }
}
int primerasA(int pc){
    switch(pc){
    case 1:{
   			printf("introduce el radio\n");
			scanf("%f",&radio);
			area = 3.1416*pow(radio,2);
			printf("el area de tu circulo es:\n");
			printf("%f\n",area);
			break;
    }
    case 2:{
        printf("introduce la medida de uno de sus lados del cuadrado\n");
        scanf("%f",&lado);
        area = lado*lado;
        printf("el area de tu cuadrado es:\n");
        printf("%f\n",area);
        break;
    }
    case 3:{
        printf("introduce la medida de la base\n");
			scanf("%f",&base);
			printf("intorduce la medida de la altura\n");
			scanf("%f",&altura);
			area = base*altura;
			printf("el area de tu rectangulogulo es:\n");
			printf("%f\n",area);
			break;
    }
    case 4:{
            printf("introduce la medida de sus lados del trapecio\n");
			printf("introduce la base mayor\n");
			scanf("%f",&basemay);
			printf("introduce la base menor\n");
			scanf("%f",&basemen);
			printf("introduce la altura\n");
			scanf("%f",&altura);
			area = basemay+basemen;
			area1 = area/2;
			area2 = area1*altura;
			printf("el area de tu trapecio es:\n");
			printf("%f\n",area2);
			break;
    }
    }
}
int triangulos2(int opc){
    switch(opc){
    case 1:{
    printf("Calculo de la hipotenusa de un triangulo rectangulo");
    float A,B=0;
    float hipo=0;
    printf("Introduce la medida de A");
    scanf("%f",&A);
    printf("Introduce la medida de B");
    scanf("%f",&B);
    hipo=sqrt(pow(A,2)+pow(B,2));
    printf("El valor de la hipotenusa en razon del teorema de pitagoras es %f\n",hipo);
    break;
    }
    case 2:{
    printf("Calculo del area de un triangulo\n");
			printf("introduce la base\n");
			scanf("%f",&base);
			printf("introduce la altura\n");
			scanf("%f",&altura);
			area = base*altura/2;
			printf("el area de tu triangulo es:\n");
			printf("%f\n",area);
    }
    case 3:{
     printf("Calculo del tercer angulo de un triangulo\n");
         float a1,a2,a3=0;
         float sum=0;
         printf("Introduce la medida del primer angulo\n");
         scanf("%f",&a1);
         printf("Introduce la medida del segundo angulo\n");
         scanf("%f",&a2);
         if(a1>=180||a1<=0 || a2>=180||a2<=0){
            printf("No estamos jugando hermano son 48 ejercicos haz las cosas bien\n");
         }else{
         sum=a1+a2;
         a3=180-sum;
         printf("Dado que la suma de los angulos de un triangulo es 180 grados\n");
         printf("y el angulo uno es %0.4f grados \n",a1);
          printf("y el angulo dos es %0.4f grados \n",a2);
         printf("El valor del angulo 3 es %0.4f grados\n ",a3);
         }
         break;
    }
    }
}
float areacirculo(float PI,float radio) {
  return PI * pow(radio, 2);
}
int Cilindro(float pi,float rad,float alt){
    area=((2*pi)*rad)*(alt+rad);
    printf("el area de tu Cilindro es:\n");
    printf("%f\n",area);
}
int segundasA(int opc){
    float area=0;
    float pi=3.1416;
    switch(opc){
    case 1:{
        printf("Area de un circulo \n");
        printf("introduce el radio\n");
        scanf("%f",&radio);
        area=areacirculo(pi,radio);
        printf("el area de tu circulo es:\n");
        printf("%f\n",area);
        break;
    }
    case 2:{
        float radiom=0;
        printf("Area de un Aro \n");
        printf("introduce el radio del circulo MENOR\n");
        scanf("%f",&radio);
        printf("introduce el radio del circulo MAYOR\n");
        scanf("%f",&radiom);
        area=pi*(pow(radiom,2)-areacirculo(pi,radio));
        printf("el area de tu Aro es:\n");
        printf("%f\n",area);
    }
    case 3:{
        printf("introduce el radio\n");
        scanf("%f",&radio);
        printf("introduce la altura\n");
        scanf("%f",&altura);
        Cilindro(pi,radio,altura);
    }
    }
}
//terminan los ejercicios de la p�gina 3
//Comienzan los ejercicios de la p�gina 4
int operacionesV(int opc){
int vec[20];
int vec2[20];
int vec3[20];
printf("Llenemos el Vector 1\n");
for(int i=0;i<20;i++){
printf("escribe el valor %d\t",i);
    scanf("%d",&vec[i]);
}
printf("Llenemos el Vector 2\n");
for(int i=0;i<20;i++){
printf("escribe el valor %d\t",i);
    scanf("%d",&vec2[i]);
}
switch(opc){
case 1:{
    for(int i=0;i<20;i++){
        vec3[i]+=vec[i]+vec2[i];
    }
        for(int i=0;i<20;i++){
        printf("%d\t",vec3[i]);
    }
    break;
    }
    case 2:{
        for(int i=0;i<20;i++){
        vec3[i]+=vec[i]-vec2[i];
    }
        for(int i=0;i<20;i++){
        printf("%d\t",vec3[i]);
    }
    break;
    }
        case 3:{
        for(int i=0;i<20;i++){
        vec3[i]+=vec[i]*vec2[i];
    }
        for(int i=0;i<20;i++){
        printf("%d\t",vec3[i]);
    }
    break;
    }
        case 4:{
        for(int i=0;i<20;i++){
        vec3[i]+=vec[i]/vec2[i];
    }
        for(int i=0;i<20;i++){
        printf("%d\t",vec3[i]);
    }
    break;
    }
}

}
int buscadorV(int longi,int x){
int vec[longi];
int coinci=0;
int mayque=0;
int menque=0;
for(int i=0;i<longi;i++){
    printf("llenemos el arreglo \n");
    scanf("%d",&vec[i]);
}
for(int i=0;i<longi;i++){
    if(vec[i]==x){
        coinci++;
    }else if(vec[i]>x){
        mayque++;
    }else if(vec[i]<x){
        menque++;
    }
}

printf("Las veces que se repitio el numero %d\n",coinci);
printf("Las veces que se enconto un numero mayor %d\n",mayque);
printf("Las veces que se encontro un numero menor %d\n",menque);

printf("%d\t",vec);
}
int primosareglos(int lon){
int counter=0;
int arrprim[lon];
for(int i=0;i<lon;i++){
    printf("llenemos el arreglo \n");
    scanf("%d",&arrprim[i]);
}
for(int i=0;i<lon;i++){
    //printf("numeros %d\t",arrprim[i]);
    if(primos(arrprim[i])){
        counter++;
    }
    }
    printf("La cantidad de numeros primos es de %d\n",counter);
}
int sucessivos(int val,int val2){
    float mult=val*val2;
    float producto=0;
    int repeticiones=0;
    float valesp=0;
    for(int i=0;i<val2-1;i++){
    producto+=val;
    }
    printf("Para llegar al resultado se usaron las siguientes sumas succesivas  %d \n",val);
    printf("El producto de %d y %d es %f\n", val, val2, mult);
}
int sucescino(int num,int terminos){
int val3=1;
int suma1=0;
int suma2=0;
int pares[100];
//Formula 1 suma de factoriales
printf("Formula SUMA DE FACTORIALES con los terminos ingresados\n");
    int value=1;
    printf("La suma de los factoriales :");
    for(int i=1;i<=terminos;i++){
    for(int j=i;j<=i;j++){
    suma1+= value*=j;
    }
        printf("%d | ",i);
    }
    printf("es :  ");
    //printf("\n");
        printf("%d\n",suma1);
//************************
//Formula 2 cuadrado sobre factorial
printf("Formula NUMERO 2 con los terminos ingresados\n");
//Formula 2
serieB(num,terminos);
//***********************************
printf("Formula DE EULER con los terminos ingresados\n");
serieEuler(num,terminos);
//Formula 3 numeros más factoriales
printf("Formula SEN DE X Con los terminos ingresados\n");
//Formula 4 seno de x
 seriesenx(num,terminos);
//Formula 5 coseno de x
printf("Formula coseno con los terminos ingresados\n");
serieCos(num,terminos);
}

int promedvec(int log){
int vec[log];
int mayor =0;
int menor= 0;

float sumAr=0;
for(int i=0;i<log;i++){
    printf("llenemos el arreglo \n");
    scanf("%d",&vec[i]);
}
  for (int i = 1; i < log; i++) {
    if (vec[i] > mayor) {
      mayor = vec[i];
    }
        if (vec[i] < menor) {
      menor = vec[i];
    }
  }
for(int i=0;i<log;i++){
    sumAr+=vec[i];
}
float mediaAr=sumAr/2;
printf("Valor menor: %d\n", menor);
printf("Valor mayor: %d\n", mayor);
printf("La media aritmetica del arreglo es %f\n",mediaAr);
}
int flecha(float base){
  // Imprime el tri�ngulo de la punta de la flecha
  for (int i = 0; i < base; i++) {
    // Imprime espacios en blanco para alinear el tri�ngulo
    for (int j = 0; j < base-i-1 ; j++) {
      printf(" ");
    }
    // Imprime asteriscos para dibujar el tri�ngulo
    for (int j = base-i-1; j <base+i; j++) {
      printf("*");
    }
    printf("\n");
  }
}
void cuerpo(float ancho,float altura){
    for(int i=1;i<=altura;i++){
    for (int j = 1; j <= (10 - ancho) / 2; j++) {
      printf(" ");
    }
        for (int j = 1; j <= ancho; j++) {
          printf("*");
        }
         printf("\t");
        printf("\n");

    }
}
void calculopin(int log){
int vec[log];
int pares=0;
int imp=0;

for(int i=0;i<log;i++){
printf("el valor del arreglo %d\n",i);
scanf("%d",&vec[i]);
}

for(int i=0;i<log;i++){
if(vec[i]%2==0){
pares++;
}
if(vec[i]%2!=0){
 imp++;
}
else {
printf("numero nulo");
}
}
printf("cantidad de numeros pares en el arreglo %d\n",pares);
printf("cantidad de numeros impares en el arreglo %d\n",imp);

}
int Repetidos(int arreglo[]){
int cont=0;
int ordensin[longit];
int norep[longit];

printf("Aqui estan tus arreglos con y  sin numeros repetidos\n");
for (int i = 0; i < longit; i++) {
    printf(", %d", arreglo[i]);

    for(int j=0;j<longit;j++){
        if(i!=j && arreglo[i]==arreglo[j]){
            cont++;
        }
    }

  }
  printf("numero de repetidos %d\n",cont);
  printf("Arreglo sin elementos repetidos: {");
  int ultimo = arreglo[0];  // �ltimo elemento impreso
  printf("%d", ultimo);
  for (int i = 1; i < longit; i++) {
    if (arreglo[i] != ultimo) {
      printf(", %d", arreglo[i]);
      ultimo = arreglo[i];
    }
  }
  printf("}\n");
}
void pampaArgentina(){
  // Arreglo con los valores de cosecha para cada mes
    float suma=0;
    int cont=0;
    int mes[10];
    printf("Registre cuantas toneladas hubieron por mes\n");
    for(int i=0;i<NUM_MESES;i++){
    printf("La cosecha del mes %d\n",i);
    scanf("%d",&COS[i]);
    suma+=COS[i];
}
  // Promedio anual
  float promedio;

  // Calculamos el promedio anual
  promedio = (float)suma / 12;

  // Recorremos el arreglo de nuevo y comparamos cada valor de cosecha
  // con el promedio anual
  for (int i = 0; i < NUM_MESES; i++) {
    if (COS[i] > promedio) {
        cont++;
    }
  }
  int mayor=COS[0];
  int valor=0;
for(int i=1;i<NUM_MESES;i++){
    if(COS[i]>mayor){
        mayor=COS[i];
        valor=i;
    }
}
printf("El mes con mas toneladas fue el  %d  y la cantidad de toneladas %d\n",valor,mayor);
printf("Suma de toneladas %0.2f\n",suma);
printf("El Promedio de las toneladas anual fue de %0.2f\n",promedio);
printf("Tuvieron %d meses con toneladas mayores al promeio \n",cont);
}
int palindrome(int*arr,int lon){
      int* left = arr;  // Puntero al principio del arreglo
    int* right = arr + lon - 1;  // Puntero al final del arreglo

    while (left < right) {
        if (*left != *right) {
            printf("No es palindromo\n") ;
        }
        left++;
        right--;
    }
    printf("Es un palindromo\n");
}
int diagonal(int fil,int col){
int matrix[fil][col];
    for(int i=0;i<fil;i++){
        for(int j=0;j<col;j++){
            matrix[i][j]=0;
        }
    }

    for (int i = 0; i < fil; i++)
    {
        matrix[i][i] = 1;
        matrix[i][col - i - 1] = 1;
    }
    for (int i = 0; i < fil; i++){
        for (int j = 0; j < col; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
int arrdec(int*array1,int*array2,int log){
    for(int i=0;i<log;i++){
    printf("%d",array1[i]);
    }
}
int intercambiarM(int fils,int cols){
int arr[fils][cols];
int tempo=0;
//Llenar las filas y las columnas del Array
for(int i=0;i<fils;i++){
for(int j=0;j<cols;j++){
    printf("Iteracion fila %d  columna %i \n",i,j);
    scanf("%d",&arr[i][j]);
}
}
//Llenar las filas y las columnas del Array
//Se escriben en orden
for(int i=0;i<fils;i++){
        printf("      ");
for(int j=0;j<cols;j++){
    printf("%d",arr[i][j]);
}
printf("\n");
}
//Imprimir de manera correcta
//Pruebas para imprimir de manera reversa
for(int i=0;i<fils/2;i++){
 printf("Esta es la fila  a la que se va a intercambiar    %d\n",i);
for(int j=0;j<cols;j++){
        tempo=arr[i][j];//En una de 3x3 se guardara 1,2,3
       //Esta parte del código hace el intercambio ya que va a ser[0][0][0][1][0][2]
       // int antesdes=arr[i][j];
     //printf("Este es el valor temporal en 3x3 %d\n",antesdes);
    // //Esta parte del codigo va a ser el contrario [2][0][2][1][2][2]
    // int opdesigu=arr[fils-i-1][j];
    //Esto se leeria asi posiciones iniciales
     arr[i][j]=arr[fils-i-1][j];//remplaza 7 8 9 en primera Iteracion [0][0] segunda[0][1] tercera [0][2]
     arr[fils-i-1][j]=tempo;//remplaza 1,2,3 en primera iteracion[2][0]segunda[2][1]tercera[2][2];
}
}
for(int i=0;i<fils;i++){
        printf("      ");
for(int j=0;j<cols;j++){
    printf("%d",arr[i][j]);
}
printf("\n");
}

//Pruebas para imprimir de manera reversa
}
int sumaAmasT(int filas,int columnas){
  int arr[filas][columnas];
  int arr2[filas][columnas];
  int arr3[filas][columnas];
for(int i=0;i<filas;i++){
for(int j=0;j<columnas;j++){
    printf("Posicion Fila %d  Columna %i de la matriz A\n     ",i,j);
    scanf("%d",&arr[i][j]);

        }
    }
    for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
    printf("Posicion Fila %d  Columna %i  de la matriz B\n   ",i,j);
    scanf("%d",&arr2[j][i]);
   }
}
printf("Se mostrara la Matriz de A\n");
for(int i=0;i<filas;i++){
        printf("      ");
for(int j=0;j<columnas;j++){
    printf("%d",arr[i][j]);
}
printf("\n");
}
printf("Se mostrara la traspuesta de B\n");
for(int i=0;i<filas;i++){
        printf("      ");
for(int j=0;j<columnas;j++){
    printf("%d",arr2[i][j]);
}
printf("\n");
}
printf("Se mostrara la Suma de (A +B^T)\n");
for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
        arr3[i][j]=arr[i][j]+arr2[i][j];
    }
}

for(int i=0;i<filas;i++){
        printf("      ");
for(int j=0;j<columnas;j++){
    printf("%d",arr3[i][j]);
}
printf("\n");
}

}
void productoAB(int **c,int **b,int **a,int fil,int col,int col2){
for(int i=0;i<fil;i++){
    for(int j=0;j<col;j++){
        printf("Ingresa los valores %d  %i  de La matriz A",i,j);
        scanf("%d",&a[i][j]);
    }
}
for(int i=0;i<fil;i++){
    for(int j=0;j<col2;j++){
        printf("Ingresa los valores %d  %i  de La matriz B[N][P]",i,j);
        scanf("%d",&b[i][j]);
    }
}
printf("Valores de la matriz A[M][N] \n");
for(int i=0;i<fil;i++){
        printf("    ");
    for(int j=0;j<col;j++){
        printf("%d    ",a[i][j]);
    }
    printf("\n");
}
printf("Valores de la matriz B[N][P] \n");
for(int i=0;i<col;i++){
        printf("    ");
    for(int j=0;j<col2;j++){
        printf("%d   ",b[i][j]);
    }
    printf("\n");
}
//Multiplicamos cada valor de los arreglos bidimencionales
for(int i=0;i<fil;i++){
    for(int j=0;j<col2;j++){
        c[i][j]=b[i][j]*a[i][j];
    }
}
//****************************************
printf("Valores de la matriz C[M][P] \n");
for(int i=0;i<fil;i++){
        printf("    ");
    for(int j=0;j<col2;j++){
        printf("%d    ",c[i][j]);
    }
    printf("\n");
}
}
int sarrus(int **sar,int fil,int col){
    int deter=0;
for(int i=0;i<fil;i++){
    for(int j=0;j<col;j++){
        printf("Ingresa los valores %d  %i  de La matriz ",i,j);
        scanf("%d",&sar[i][j]);
    }
}
for(int i=0;i<fil;i++){
    deter+= sar[i][0] * (sar[(i+1)%3][1] * sar[(i+2)%3][2] - sar[(i+1)%3][2] * sar[(i+2)%3][1]);
}
printf("Esta es la matriz que ingresaste\n");
for(int i=0;i<fil;i++){
        printf("    ");
    for(int j=0;j<col;j++){
        printf("%d   ",sar[i][j]);
    }
    printf("\n");
}

printf("Esta es la determinante %d  ",deter);
}
int espiral(int**espiral,int fila,int columna){
    int arr,abaj,izq,der=0;
    abaj=fila-1;
    der=columna-1;
for(int i=0;i<fila;i++){
    for(int j=0;j<columna;j++){
        printf("Ingresa los valores %d  %i  del caracol ",i,j);
        scanf("%d",&espiral[i][j]);
    }
}
while(arr<=abaj&&izq<=der){
 for(int i=0;i<fila;i++){
    for(int j=izq;j<der;j++){
            printf("%d",espiral[i][j]);
            }
        }
    }
}
void tablero(){
int tabler[filasycol][filasycol];
for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        tabler[i][j]=0;
    }
}
printf("Modtrando arreglo\n");
for(int i=0;i<filasycol;i++){
    printf("%d  |",reinas[i]);
}
//Ahora asignamos el valor del arreglo hacia el tablero
for(int i=0;i<filasycol;i++){
    for(int j=0;j<filasycol;j++){
        tabler[reinas[j]][j]=1;
    }
}
printf("Mostrando el tablero\n");
for(int i=0;i<filasycol;i++){
        printf("   " );
    for(int j=0;j<filasycol;j++){
       printf("%d |",tabler[i][j]);
    }
    printf("\n");
}
}
bool valido(int i){
    //comprobar si la reina de la columna i no se amenaza con ninguna reina ya puesta
    bool v=true;
    for(int r=0;r<i;r++){
        v=v&&(reinas[i]!=reinas[r]);//Comprobar si la fila esta vacia
        v=v&&((reinas[i]-i)!=(reinas[r]-r));//Diagonal 1
        v= v&&((reinas[i]+i)!=(reinas[r]+r)); //Diagonal 2
    }
    return v;
}
void ponerReina(int i,bool &solucion){
// Inicia el COnteo de movimientos para filas
solucion=false;
int k=0;
do{
    reinas[i]=k;//Copiamos la reina i en la fila K
    k++;
    if(valido(i)){
        if(i<(filasycol-1)){
            ponerReina(i+1,solucion);
            //Vuelta atras
            if(!solucion){
                reinas[i]=0;
            }
        }else{
        //Agregamos todas las reinas
            solucion=true;
        }
    }
}while(!solucion && (k<filasycol));
}

void ochoR(){
tablero();
}
//Zona codigo nuevo****************
void GenerarMatriz (int fila, int columna, int**matriz){
    unsigned short i, j, inicio, limitecolumna, limitefila, tope, x;
    inicio = 0; //desde donde comienza a llenarse
    limitecolumna = columna ;// donde comienza el desenso
    limitefila = fila;
    tope = fila * columna ;//hasta donde se llena, que es la cantidad de elementos
    x = 1; //valores dentro de la matriz
    i = 0 ;
    /*La matriz se llena con 4 for, dos para filas y dos para columnas.
    Los primeros dos for empiezan cargando la primera fila y la ultima
    columna. Los otros dos cargan cargan desde la ultima fila hacia la
    ultima columna. Los for no estan anidados, el while debe ejecutarse
    hasta llenar la matriz*/

    while (x <= tope)
    {
        for(j = inicio; j < limitecolumna  ; j++ )
        {
        matriz[i][j] = x++;
        /*x++;*/
        }
        for(i = inicio + 1 ; i < limitefila  ; i++)
        {
        matriz[i][j-1]= x++;
        /*x++;*/
        }
        for (j = limitecolumna - 1 ; j > inicio ; j--)
        {
        matriz[i-1][j-1]= x++;
        /*x++;*/
        }
        for (i = limitefila - 1; i > inicio + 1 ; i--)
        {
        matriz[i-1][j]= x++;
        /*x++;*/
        }
        inicio++;
        limitecolumna --;
        limitefila--;
    }
    for (i =0 ; i < fila ; i++){
    printf("\n");
    for (j = 0; j < columna ; j++)
    printf("%i\t", matriz[i][j]);
    }
    }
//******************************
void tablero02(){
//int tabler[filasycol][filasycol];
for(int i=0;i<nLong;i++){
        printf("    ");
    for(int j=0;j<nLong;j++){
        printf("%d|",tablero2[i][j]);
    }
    printf("\n");
}
printf("\n");
}
int Rcaballo(int i,int fila,int columna,bool&respuesta){
    //posicionamiento en el tablero
    int posfila,poscolumn;
    respuesta=false;
    int k=0;//Contador de las posibles 8 acciones
    respuesta=false;
    do{
      k++;
      posfila=fila + posiblesMovsC[k-1][0];
      poscolumn=columna + posiblesMovsC[k-1][1];
      //Verificar
        if((posfila>=0) && (posfila<nLong) && (poscolumn>=0) && (poscolumn<nLong)&& (tablero2[posfila][poscolumn]==0)){
        //Guardamos el movimiento
        tablero2[posfila][poscolumn]=i;
        tablero02();
        if(i<nLong*nLong){
        Rcaballo(i+1,posfila,poscolumn,respuesta);

            if(!respuesta){
            tablero2[posfila][poscolumn]=0;
            }else{
            respuesta=true;
        }
        }
      }
    }while((k<nLong) && !respuesta);
}

//terminan los ejercicios de la p�gina 4
//Comienzan los ejercicios de la p�gina 5
//terminan los ejercicios de la p�gina 5
//Comienzan los ejercicios de la p�gina 6
//terminan los ejercicios de la p�gina 6
void selector(){
    printf("************************PROBLEMAS DE LA PAGINA 1 (1-6) ************************************ \n");
    printf("Presiona 1 para pares impares nulos\n");
    printf("pesiona  2 para Calcular el precio del billete\n");
    printf("presiona 3 para ver si la expresion es igual \n");
    printf("presiona 4 para Caculo de tratamiento \n");
    printf("presiona 5 para Caculo de sonido de un grillo \n");
    printf("presiona 6 para Calcular el aumento del sueldo del profesor de una universidad \n");
    printf("********************PROBLEMAS DE LA PAGINA 2 (7-17) *************************************** \n");
    printf("Presiona 7 para saber si es divisores o no\n");
    printf("Presiona 8 para numeros crecientes o decresientes\n");
    printf("Presiona 9 para mostrar el mayor de tres numeros\n");
    printf("Presiona 10 convertir de pulgadas a milimetros de yardas a metros y de millas a kilometros \n");
    printf("Presiona 11 para calcular posibles triangulos\n");
    printf("Presiona 12 para saber de que triangulo se trata\n");
    printf("Presiona 13 Calculo salario real\n");
    printf("Presiona 14 signo de zodiaco segun tu fecha de nacimiento\n");
    printf("Presiona 15 saber si naciste en a�o biciesto\n");
    printf("Presiona 16 promedio de numeros impares o pares\n");
    printf("Presiona 17 serie de numeros\n");
    printf("********************PROBLEMAS DE LA PAGINA 3 (18-28) *************************************** \n");
    printf("Presiona 18 para el factorial de un numero\n");
    printf("Presiona 19 para invertir un capital en el banco\n");
    printf("Presiona 20 para resolver una serie de numeros\n");
    printf("Presiona 21 para resolver serie del coseno de x\n");
    printf("Presiona 22 para saber cual es un numero primo\n");
    printf("Presiona 23 para saber numeros perfectos\n");
    printf("Presiona 24 para invertir un numero palindromo\n");
    printf("Presiona 25 para calcular temperaturas\n");
    printf("Presiona 26 para calcular otras areas\n");
    printf("Presiona 27 para saber mas de triangulos\n");
    printf("Presiona 28 para calcular otro tipo de areas\n");
    printf("********************PROBLEMAS DE LA PAGINA 4 (29-37) *************************************** \n");
    printf("Presiona 29 para sume divida multiplique reste 2 vectores \n");
    printf("Presiona 30 para  Leer un vector de enteros \n");
    printf("Presiona 31 para Leer un arreglo de enteros e imprimir la cantidad de valores del arreglo que son n�meros primos.\n");
    printf("Presiona 32 para Leer dos n�meros enteros positivos y en una funci�n calcular su producto mediante sumas sucesivas \n");
    printf("Presiona 33 para  leer un n�mero real x e imprimir la sumatoria utilizando la siguientes series \n");
    printf("Presiona 34 para Leer un vector de tama�o n e imprimir la media aritm�tica y la semisuma de los valores m�ximo y m�nimo. \n");
    printf("Presiona 35 para Imprimir una flecha con asteriscos;  \n");
    printf("Presiona 36 para  dar como dato un arreglo unidimensional de n�meros enteros determine cu�ntos de ellos son positivos, cu�ntos negativos y cu�ntos nulos. \n");
    printf("Presiona 37 para arreglo unidimensional ordenado de N enteros y obtenga como salida ese mismo arreglo pero sin los elementos repetidos.\n");
    printf("********************PROBLEMAS DE LA PAGINA 5 (38-44) *************************************** \n");
        printf("Presiona 38 para las toneladas mensuales de cereales cosechadas\n");
        printf("Presiona 39 para VEC  pal�ndrome\n");
        printf("Presiona 40 para diagonales principales de una matriz cuadada\n");
        printf("Presiona 41 para el primero ordenado en forma ascendente y el segundo en forma descendente\n");
        printf("Presiona 42 para intercambie las M filas de un arreglo bidimensional\n");
        printf("Presiona 43 para la suma de A m�s la traspuesta de B\n");
        printf("Presiona 44 para calcule el producto de dichos arreglos\n");

    printf("********************PROBLEMAS DE LA PAGINA 6 (45-48) *************************************** \n");
        printf("Presiona 45 para  Regla de Sarrus\n");
        printf("Presiona 46 para n forma de espiral. \n");
        printf("Presiona 47 para el problema de las ocho reinas \n");
        printf("Presiona 48 para problema del recorrido del caballo \n");
    printf("Escirba el numero del problema \t");
    scanf("%d",&change);
        switch(change){
        case 1:{
            do{
        printf("Escribe un numero entero para saber si es impar par o nulo");
        scanf("%d",&numero);
        numerospin(numero);
        printf("Volver a intentar press S\n");
        res = getchar();
            fflush(stdin);
        } while (tolower(res) == 's');
        break;
        }
        case 2:{
        printf("Calculo de billete\n");
        printf("Cuantos dias se quedar� en la ciudad a la que va?\n");
        scanf("%d",&dias);
        printf("cual es la distancia entre las ciudades?\n");
        scanf("%d",&distancia);
        precio(distancia,dias);
        break;
        }
        case 3:{
            printf("ingresa el valor de T");
            scanf("%f",&T1);
            printf("ingresa el valor de P");
            scanf("%f",&P1);
            printf("ingresa el valor de N");
            scanf("%f",&N1);
            expresion(T1,P1,N1);
            break;
        }
        case 4:{
              printf("|----------------------------------------|\n");
              printf("| Tipo de tratamiento | Costo/cliente/dia|\n");
              printf("|---------------------|------------------|\n");
              printf("|          1          |       2800       |\n");
              printf("|          2          |       1950       |\n");
              printf("|          3          |       2500       |\n");
              printf("|          4          |       1150       |\n");
              printf("|---------------------|------------------|\n");
              printf("Seleccione un numero de tratamiento de nuestra tabla\n");
              scanf("%d",&numtrat);
              printf("Necesitamos saber su edad\n");
              scanf("%d",&age);
              printf("Necesitamos saber los dias que se va a quedar\n");
              scanf("%d",&dias);
              ixtapan(numtrat,age,dias);
               break;
            }
        case 5:{
                float Va=0;
                printf("SONIDOS DE UN GRILLO\n");
                printf("Escribe la cantidad de sonido en un minuto\n");
                scanf("%f",&Va);
                sonido(Va);
                break;
            }
        case 6:{
        float salario=0;
        printf("Ingrese El sueldo que gana\n");
        scanf("%f",&salario);
        incrementoS(salario);
        break;
            }
        case 7:{
            int numd1,numd2=0;
            printf("Cual es el divisor");
            printf("Ingresa el dividendo");
            scanf("%d",&numd1);
            printf("Ingresa el divisor");
            scanf("%d",&numd2);
            divisoresono(numd1,numd2);
            break;
            }
        case 8:{
            int nC1,nC2,nC3=0;
            printf("Ingresa el valor del numero 1\n");
            scanf("%d",&nC1);
            printf("Ingresa el valor del numero 2\n");
            scanf("%d",&nC2);
            printf("Ingresa el valor del numero 3\n");
            scanf("%d",&nC3);
            ordenC(nC1,nC2,nC3);
            break;
        }
        case 9:{
            int nm1,nm2,nm3=0;
            printf("Ingresa el valor del numero 1\n");
            scanf("%d",&nm1);
            printf("Ingresa el valor del numero 2\n");
            scanf("%d",&nm2);
            printf("Ingresa el valor del numero 3\n");
            scanf("%d",&nm3);
            mayordeT(nm1,nm2,nm3);
            break;
        }
        case 10:{
            int opc=0;
            printf("|--------------------------------|\n");
            printf("| numero  | nombre de conversion |\n");
            printf("|    1    | pulgadas a milimetros|\n");
            printf("|    2    | Yardas a metros  |\n");
            printf("|    3    | millas a kilometros  |\n");
            printf("Selecciona una conversion \t");
            scanf("%d",&opc);
            conversor(opc);
            break;
        }
        case 11:{
        printf("Posibles triangulos y sus areas\n");
        printf("Lado a\n");
        scanf("%f",&l1);
        printf("Lado b\n");
        scanf("%f",&l2);
        printf("Lado c\n");
        scanf("%f",&l3);
        triangulos(l1,l2,l3);
        break;
        }
        case 12:{

            printf("Que tipo de triangulo es\n");
                printf(" valor del Lado a\n");
                scanf("%f",&l1);
                printf("valor de Lado b\n");
                scanf("%f",&l2);
                printf("valor de Lado c\n");
                scanf("%f",&l3);
                sabertriangulo(l1,l2,l3);
            break;
        }
        case 13:{
            int horas=0;
            char nombre[100]="";
            char puesto [100]="";
            float salarioH=1;
            printf("Valor de horas trabajadas\n");
            scanf("%d",&horas);
             printf("nombre del empleado\n");
            scanf("%s",&nombre);
             printf("Puesto del empleado\n");
            scanf("%s",&puesto);
            printf("Cuanto gana por hora\n");
            scanf("%f",&salarioH);
            salarioreal(horas,nombre,puesto,salarioH);
        break;
        }
        case 14:{
            printf("te digo que signo zodiacal eres\n");
            printf("Dime tu dia de nacimiento \n");
            scanf("%d",&day);
            printf("Dime el numero del  mes de nacimiento \n");
            scanf("%d",&month);
            zodiaco(day,month);
            break;
        }
        case 15:{
            int year=0;
            printf("Digita el a�o en el que naciste\n");
            scanf("%d",&year);
            biciesto(year);
        break;
        }
        case 16:{
            int cantidad=0;
            printf("cuantos impares y pares hay en una cantidad");
            printf("Dame la cantidad \n");
            scanf("%d",&cantidad);
            promedioI(cantidad);
        break;
        }
        case 17:{
            int val=0;
            printf("Calculo de la serie\n");
            printf("Numero de terminos\n");
            scanf("%d",&val);
            serie(val);
        break;
        }
        case 18:{
            int fact=0;
            printf("Factorial de un Numero\n");
            scanf("%d",&fact);
            factorialm(fact);
        break;
        }
        case 19:{
            float capital,tasa=0;
            int meses=0;
            printf("Calcular inversion por mes ");
            printf("Cual es su capital? ");
            scanf("%f",&capital);
            printf("Cual es la tasa de esta inversion? ");
            scanf("%f",&tasa);
            printf("Cuantos meses piensa invertir esto ");
            scanf("%d",&meses);
            interes(capital,tasa,meses);
        break;
        }
        case 20:{
            int numeroC=0;
            printf("Serie de numero ecuaciones");
            printf("Cantidad de terminos");
            scanf("%d",&numeroC);
            serie2(numeroC);
        break;
        }
        case 21:{
            double x;
            printf("Calcular la serie de tylor En C\n");
              int i, n;
              printf("Ingresa el ángulo x en radianes: ");
              scanf("%lf", &x);
              printf("Ingresa el número de términos a usar en la serie: ");
              scanf("%d", &n);
              serieCos(x,n);
        break;
        }
        case 22:{
    int num;
  printf("Ingresa un n�mero: ");
  scanf("%d", &num);
  if (primos(num)) {
    printf("El n�mero %d es primo.\n", num);
  } else {
    printf("El n�mero %d no es primo.\n", num);
  }
        break;
        }
        case 23:{
        int np;
        printf("Numeros Perfectos\n");
        scanf("%d",&np);
        perfectos(np);
        break;
        }
        case 24:{
            int voltear=0;
            printf("Invertir un numero\n");
            printf("Cual es el  numero\n");
            scanf("%d",&voltear);
            reversodeI(voltear);
        break;
        }
        case 25:{
              int oP=0;
              printf("|Calculo de temperaturas|\n");
              printf("|------------------------------------------------------------|\n");
              printf("| Numero de opcion    | Nombre de la conversi�n de temperatur|\n");
              printf("|---------------------|--------------------------------------|\n");
              printf("|          1          |Grados cent�grados a grados Fahrenheit|\n");
              printf("|          2          |Grados Fahrenheit a grados cent�grados|\n");
              printf("|          3          |Grados cent�grados a kelvins          |\n");
              printf("|          4          |Kelvins a grados cent�grados.         |\n");
              printf("|---------------------|--------------------------------------|\n");
              printf("|Ingresa el numero del cual deseas calcular|\n");
              scanf("%d",&oP);
              conversorg(oP);
        break;
        }
        case 26:{
            int opc=0;
              printf("|Calculo de Areas|\n");
              printf("|------------------------------------------------------------|\n");
              printf("| Numero de opcion    | Nombre de la conversi�n de temperatur|\n");
              printf("|---------------------|--------------------------------------|\n");
              printf("|          1          |        area del C�rculo              |\n");
              printf("|          2          |        area del Cuadrado             |\n");
              printf("|          3          |        area del rectangulo           |\n");
              printf("|          4          |        area del trapecio             |\n");
              printf("|---------------------|--------------------------------------|\n");
              printf("|Ingresa el numero del cual deseas calcular|\n");
              scanf("%d",&opc);
             primerasA(opc);
        break;
        }
        case 27:{
            int opc=0;
              printf("|Calculo de triangulos|\n");
              printf("|--------------------------------------------------------------|\n");
              printf("| Numero de opcion    | Nombre de la conversi�n de temperatur  |\n");
              printf("|---------------------|----------------------------------------|\n");
              printf("|          1          |La hipotenusa de un tri�ngulo rect�ngulo|\n");
              printf("|          2          | El �rea de un tri�ngulo                |\n");
              printf("|          3          | El tercer �ngulo de un tri�ngulo.      |\n");
              printf("|---------------------|--------------------------------------|\n");
              printf("|Ingresa el numero del cual deseas calcular|\n");
              scanf("%d",&opc);
              triangulos2(opc);
        break;
        }
        case 28:{
            int opc=0;
                                      printf("|Calculo de circulos|\n");
              printf("|--------------------------------------------------------------|\n");
              printf("| Numero de opcion    | Nombre de opcion                       |\n");
              printf("|---------------------|----------------------------------------|\n");
              printf("|          1          |     �rea de un c�rculo                 |\n");
              printf("|          2          |     �rea de un aro                     |\n");
              printf("|          3          |   volumen de un cilindro               |\n");
              printf("|---------------------|----------------------------------------|\n");
              printf("|Ingresa el numero del cual deseas calcular|\n");
              scanf("%d",&opc);
              segundasA(opc);
        break;
        }
        case 29:{
                    int opc=0;
                                      printf("|Operaciones con vectores|\n");
              printf("|--------------------------------------------------------------|\n");
              printf("| Numero de opcion    | Nombre de opcion                       |\n");
              printf("|---------------------|----------------------------------------|\n");
              printf("|          1          |     suma de vectores                   |\n");
              printf("|          2          |     resta de vectores                  |\n");
              printf("|          3          |     multiplicacion de vectores         |\n");
              printf("|          4          |     Division de vectores         |\n");
              printf("|---------------------|----------------------------------------|\n");
              printf("|Ingresa el numero del cual deseas calcular|\n");
              scanf("%d",&opc);
            operacionesV(opc);
        }
        case 30:{
        int longitud,X;
          printf("|Validar cuantas veces existe son menores o don mayores a x|\n");
          printf("Cual sera la longitud de tu vector?");
          scanf("%d",&longitud);
          printf("Cual es el valor que deceas buscar en tu arreglo");
          scanf("%d",&X);
          buscadorV(longitud,X);
          break;
        }
        case 31:{
            int l0ng;
        printf("Encontraremos la cantidad de numero primos en un arreglo");
        scanf("%d",&l0ng);
        primosareglos(l0ng);
        break;
        }
        case 32:{
        int num1,num2;
        printf("Leer dos numero para multiplicarlos succesivamente\n");
        printf("Leer el valor del numero 1\n");
        scanf("%d",&num1);
        printf("Leer el valor del numero 2\n");
        scanf("%d",&num2);
        sucessivos(num1,num2);
        break;
        }
        case 33:{
            int num,termn;
            printf("5 Suceciones\n");
             printf("Valor de X\n");
            scanf("%d",&num);
            printf("Valor de cantidad de terminos\n");
            scanf("%d",&termn);
            sucescino(num,termn);
        break;
        }
        case 34:{
            int longitud;
            printf("Sacar media aritmetica y la semi suma de un vector");
            printf("Ingresa la longitud del vector");
            scanf("%d",&longitud);
            promedvec(longitud);
        break;
        }
        case 35:{
        printf("dibuja una flecha con astericos");
        printf("dame la base del triangulo \n");
        scanf("%f",&base);
        printf("dame la altura del rectangulo \n");
        scanf("%f",&altura);
        printf("dame el ancho del rectangulo \n");
        scanf("%f",&lado);
        flecha(base);
        cuerpo(lado,altura);
        break;
        }
        case 36:{
        int longitud=0;
        printf("positivos negativos y nulos de un vector\n");
        scanf("%d",&longitud);
        calculopin(longitud);
        break;
        }
        case 37:{
            int vect[longit];
            printf("Numeros repetidos de un arreglo\n");
            printf("Dame la longitud de tu array\n");
            scanf("%d",&longit);
            for(int i=0;i<longit;i++){
                    printf("Ingresa el valor %d del array en orden creciente",i);
                scanf("%d",&vect[i]);
            }
            Repetidos(vect);
        break;
        }
        case 38:{
            int tons=0;
            printf("Toneladas de la pampa\n");
            pampaArgentina();
            break;
        }
        case 39:{
            int lon=0;
            int numes[lon];
            printf("Numeros palindrome en Array\n");
            printf("ingresa la cantidad de numeros de tu numero\n");
            scanf("%d",&lon);
            for(int i=0;i<lon;i++){
                printf("Ingresa del espacio",i);
                scanf("%d",&numes[i]);
            }
            palindrome(numes,lon);
        break;
        }
        case 40:{
            int filas,columnas=0;
            printf("Matriz cuadrada\n");
            printf("Ingresa el numero de filas \n");
            scanf("%d",&filas);
            printf("Ingresa el numero de columnas \n");
            scanf("%d",&columnas);
            diagonal(filas,columnas);
        break;
        }
        case 41:{
            printf("Pendiente");
        break;
        }
        case 42:{
            int filas=0;
            int columnas=0;
            printf("Filas y columas de Un arreglo bidimencional");
            printf("Ingresa el Numero de filas\n");
            scanf("%d",&filas);
            printf("Ingresa el Numero de columnas\n");
            scanf("%d",&columnas);
            intercambiarM(filas,columnas);
        break;
        }
        case 43:{
            int filas=0;
            int columnas=0;
            printf("Filas y columas de las matrices\n");
            printf("Ingresa el Numero de filas\n");
            scanf("%d",&filas);
            printf("Ingresa el Numero de columnas\n");
            scanf("%d",&columnas);
            if(filas!=columnas){
                system("CLS");
                return selector();
            }else{
            sumaAmasT(filas,columnas);
            }
        break;
        }
        case 44:{
            printf("Multiplica los areglos A[M][N] y B[N][P] en Un arreglo C[M][P]\n");
            //Pruebas para llenarlo con mis variables
                printf("ingresa el numero de filas del arreglo A[M][N]\n");
                scanf("%d",&filas1);
                printf("Ingresa el numero de columnas A[M][N]\n");
                scanf("%d",&columnas1);
                printf("Ingresa el numero de columnas del arreglo B[N][P]\n");
                scanf("%d",&columnas2);
            //Entendiendo apuntadores en C y C++
            //Apuntador para definir filas
            int **p=new int *[filas1];
            int **b=new int*[columnas1];
            int **c=new int*[filas1];
            for(int i=0;i<filas1;i++){
                    //definimos columnas
                p[i]=new  int [columnas1];
                b[i]=new int[columnas2];
                c[i]=new int[columnas2];
            }
            productoAB(c,b,p,filas1,columnas1,columnas2);
        break;
        }
        case 45:{
            printf("Regla de sarrus \n");
                printf("ingresa el numero de filas del arreglo\n");
                scanf("%d",&filas1);
                printf("Ingresa el numero de columnas \n");
                scanf("%d",&columnas1);
            int**sarr=new int*[filas1];
            for(int i=0;i<filas1;i++){
                sarr[i]=new int[columnas1];
            }
            sarrus(sarr,filas1,columnas1);
        break;
        }
        case 46:{
            int fila,columna=0; ;
            printf ("Ingresar cantidad de filas: \n");
            scanf("%d",&fila);
            printf("Ingresar cantidad de columnas: \n");
            scanf("%d",&columna);
            int matriz[fila][columna];
            int**caracol=new int*[fila];
            for(int i=0;i<fila;i++){
                caracol[i]=new int[columna];
            }
            GenerarMatriz(fila,columna, caracol);
        break;
        }
        case 47:{
              printf("el problema de las ocho reinas.\n");
              bool solucion;
              ponerReina(0,solucion);
              if(solucion){
                printf("Si existe combinacion de reinas");
                    tablero();
              }else{
                printf("No existe combinacion de reinas");
              }
        break;
        }
        case 48:{
            printf("el problema del recorrido del caballo\n");
            bool exito;
            int fila=2;
            int col=2;
            tablero2[fila][col]=1;
            Rcaballo(2,fila,col,exito);
            if(exito){
                printf("Camino con cordenadas encontradas\n");
                tablero02();
            }else{
            printf("Con las coordenadas dadas no se puede recorrer el tablero completo\n");
            }
        break;
        }
        case 49:{
        serieB(3,4);
        break;
        }
        default:{
        printf("No existe esa opcion\n");
        break;
        }
        }
}
int main() {
  selector();
  return 0;
}
