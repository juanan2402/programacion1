#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h> 
#include <locale.h>

int opcion, arma, dano, ataque, HP;
char nombre[100];

int Batalla(int vida, int golpeMax){
  while(vida>0){

	        ataque = rand() % golpeMax+1;
          if(ataque<(golpeMax*0.9)){
            vida-=dano;
            printf("Has golpeado al enemigo! \n Daño-> %d\n", dano);
          }
          printf("El enemigo te golpeó! \n HP - %d\n", ataque);
          HP-=ataque;
          if(HP<=0){
            break;
          }
        }
}
void Aldeano(){
  printf("Estás caminando por el bosque y te encuentras con un aldeano, este te cuenta la historia de su aldea, que está siendo atacada por un grupo de orcos, y muchos de sus habitantes han sido capturados, que vas a hacer? \n 1-ayudar a la aldea \n 2-ignorar al aldeano  \n");
        scanf("%d", &opcion);
        switch(opcion){
          case 1:
          printf("Decides ayudar al aldeano, poco a poco te acercas a la cueva donde estaban capturados los habitantes de la aldea, los orcos nunca fueron enemigos muy formidables, por lo que logras deshacerte de ellos sin problemas, pero un arquero logró clavar una flecha en tu hombro \n -15 HP \n");
          HP-=15;
          printf("Como recompensa a tu heroismo, el aldeano revela que es un poderoso hechicero, y encanta tu arma para hacerla mas poderosa Daño + 30 \n");
          dano+=30;
          break;
          
          case 2:
          printf("No tienes tiempo para lidiar con orcos, tu camino es largo y decides solo tomar tus cosas  y seguir, pero sientes una pesadez en tu cuerpo, como si alguien hubiera puesto un encantamiento fuerte sobre ti, no tienes fuerzas para utilizar tu arma. \n -20 Daño \n");
          dano-=20;
          break;
}
}
void Troll(){
  int troll=300;
        printf("Estás caminando por el bosque cuando de repente escuchas un fuerte rugido. Al voltear a ver, te encuentras con un troll de aspecto intimidante que te está observando con ojos malvados. Sabes que tienes que actuar con rapidez si quieres sobrevivir. \n El troll avanza hacia ti con pasos pesados, levantando un enorme garrote de madera en el aire. Tienes que decidir qué hacer:\n 1-Esquivar al troll \n 2-atacar \n");
        scanf("%d", &opcion);
        switch(opcion){
          case 1: 
            printf("Ruedas hacia un lado para esquivar el primer golpe del troll. Sin embargo, el troll es rápido y ágil para su tamaño, y pronto te encuentras en una lucha a muerte.\n");
          break;
          case 2:
          printf("Sacas tu arma y te preparas para atacar al troll. El troll es fuerte y resistente, pero tu arma logra causarle daño. La pelea se prolonga por varios minutos, con ambos luchadores cansados y heridos.\n");
          break;
        }
        Batalla(troll, 20);
        
        printf("Finalmente, logras asestar un golpe certero en la cabeza del troll, lo que lo hace desplomarse en el suelo. Te alejas del troll, sintiendo la adrenalina correr por tu cuerpo. Has sobrevivido a la pelea con éxito, pero sabes que tienes que tener más cuidado la próxima vez que te aventures en el bosque.\n");
        
}
void Esfinge(){
  printf("Estás explorando una antigua tumba en busca de un tesoro perdido cuando te encuentras con una esfinge enorme y poderosa, y te habla con una voz profunda y ronca: \n-Te haré una pregunta, mortal. Si respondes correctamente, te dejaré pasar. Si no, tendrás que luchar contra mí y morir en el intento\n");

  printf("¿Cuál es el animal que camina en cuatro patas en la mañana, dos patas en el mediodía, y tres patas en la noche?\n Tienes que decidir qué responder:\n 1-Hombre \n 2-gato \n 3- no lo se \n");
  scanf("%d",&opcion);
  switch(opcion){
    case 1: 
      printf("Respondes que el animal es el hombre. La esfinge asiente con aprobación y te deja pasar.\n");
      break;
    case 2:
      printf("Al responder, escuchas a la esfinge hacer un sonido de felino hambriento, y sientes como se lanza contra ti, logras escapar, pero la criatura logró hacer mucho daño \n HP - 100\n");
      HP-=100;
      break;
    case 3:
      printf("la esfinge parece enojada, pero agradece tu honestidad, te deja pasar pero te garantiza que no todo en la vida va a ser tan facil.\n Daño - 5 \n");
      dano-=5;
      break;
    
  }
}
void Dragon(){
  int dragon=500;

        printf("Te aventuras a una cueva oscura y húmeda en busca de un tesoro legendario cuando de repente te encuentras con un enorme dragón. El dragón te mira con ojos brillantes y empieza a mover su enorme cuerpo escamoso, listo para atacarte. Pero antes de que puedas hacer algo, el dragón habla con una voz profunda y amenazante:\n");
        printf("¿Qué haces aquí, humano? ¿Vienes a robar mi tesoro?\n Tienes que decidir qué hacer:\n 1- Mentir \n 2- Confesar\n");
        scanf("%d", &opcion);
        switch(opcion){
          case 1:
          printf("El dragón te deja explorar su cueva, pero tu sabes que si se llega a enterar que ribaste algo, se acaba todo, vas con cuidado, recooectando cosas pequeñas que te van a servir en tu aventura, y te dispones a salir de la cueva\n ");
          break;

          case 2:
          printf("el dragon te amenaza esta es su cueva, y nadie va a robarle y salir con vida, panico entra en ti, sabes que llega el momento de pelear\n");
          Batalla(dragon, 30);
          break;
        }
}
void Golem(){
  int golem=1000;
      printf("Tu viaje ha sido largo, y te preocupa que  el camino sea mas dificil de lo que has encontrado, mientras piensas en todo esto, te acercas a una piedra para descansar, sin embargo, sientes una vibración y un gran golem se levanta de donde pensabas que solo habia una roca\n observas al golem y te das cuenta que tiene la mirada perdida en lo que parece ser una mariposa, levanta sus enormes manos, intentando atraparla\n Qué decides hacer?\n 1-atacar a la bestia\n 2-observar y ver que pasa\n");
      scanf("%d",&opcion);
      switch(opcion){
        case 1:
        printf("El golem es demasiado fuerte, su coraza de piedra destruye tu arma de forma muy rapida. Ves el final acercandose, pero decides seguir fuerte y continuar peleando \n");
        Batalla(golem, 100);
        break;
        case 2:
        printf("Ves al golem finalmente atrapar a la mariposa, se contenta y a ti te causa gracia su alegria, lo aplaudes y el golem lo nota, se acerca a ti lentamente, y te entrega la mariposa, que de repente te hace sentir mucho mas fuerte \n HP + 50\n");
        HP+=50;
        break;
        
      }
}
void Menu(){
  printf("Bienvenido viajero, cual es tu nombre?\n");
  scanf("%s", nombre);
  printf("%s escoge tu arma:\n", nombre);
  printf("1-Espada(Daño=50)\n");
  printf("2-Hacha(Daño=70)\n");
  printf("3-Arco(Daño=30)\n");
  scanf("%d",&arma);
  switch(arma){
    case 1: 
    dano=50;
    break;
    
    case 2:
    dano=70;
    break;
    case 3: 
    dano=30;
    break;
  }
}
int Situacion(){
  srand(time(NULL)); //Generamos número aleatorio en base al tiempo
  for(int x = 0; x < 2; x++){
    int situaciones, uno;
	  situaciones = rand() % 5 + 1;
    if(x==0){      
      uno=situaciones;
    }
    else{
      if(situaciones==uno){
        situaciones++;
      }
    }
    if(HP>0){
      switch(situaciones){
        case 1:
          Aldeano();
        break;
        case 2:
          Esfinge();
        break;
        case 3:
          Troll();
        break;
        case 4:
        Dragon();
        break;
        case 5:
          Golem();
        break;
      }
    }
    else{
      break;
    }
    
    
  }
}
int main(void) {

  char *locale;
  locale = setlocale(LC_ALL,"");
  Menu();
  HP=500; 
  Situacion();
  if(HP>0){
      printf("Felicidades %s has ganado!\n", nombre);
    printf("HP: %d", HP);
    }
    else{
      printf("Has muerto, GAME OVER\n");
      printf("Intenta de nuevo %s", nombre);
    }
  
  
  return 0;
}