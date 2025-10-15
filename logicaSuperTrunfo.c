#include <stdio.h>

    int main(){
        //variaveis declaradas
        char estado1[20] , estado2[20] , cidade1[20] , cidade2[20] ;
        char codigo1[3] , codigo2[3] ;
        int populacao1 , populacao2 ;
        float area1, area2 ;
        float pib1 , pib2 ;
        int pontosturisticos1 , pontosturisticos2 ;
        
        float densidade1 , densidade2 ;
        int opcao ;
        
        //  coleta de dados 1 carta
        printf("----- DADOS DA PRIMEIRA CARTA -----\n ");
        printf(" Qual o estado? ");
        scanf("%s" , &estado1);

        printf(" Qual o codigo? ex: a01, a02, a03... : ");
        scanf("%s" , &codigo1);

        printf(" Qual o nome da cidade? ");
        scanf("%s" , &cidade1);



        printf(" populaçao? ");
        scanf("%d" , &populacao1);

        printf("area?");
        scanf("%f" , &area1);

        printf(" Pib? ");
        scanf("%f" , &pib1);

        printf("Quantos pontos turisticos? ");
        scanf("%d" , &pontosturisticos1);

        densidade1 = (float) populacao1 / area1 ;

        //coleta de dados 2 carta
        printf("----- DADOS DA SEGUNDA CARTA -----\n ");
        printf(" Qual o estado? ");
        scanf("%s" , &estado2);

        printf(" Qual o codigo? ex: a01, a02, a03... : ");
        scanf("%s" , &codigo2);

        printf(" Qual o nome da cidade? ");
        scanf("%s" , &cidade2);

        printf(" populaçao? ");
        scanf("%d" , &populacao2);

        printf("area?");
        scanf("%f" , &area2);

        printf(" Pib? ");
        scanf("%f" , &pib2);

        printf("Quantos pontos turisticos? ");
        scanf("%d" , &pontosturisticos2);
        densidade2 = (float) populacao2 / area2 ;


        //exibiçao dos dados digitados da primeira cidade
        printf("------Carta %s------\n" , codigo1);
        printf("Estado: %s\n" ,estado1  ); 
        printf("Cidade: %s\n" , cidade1); 
        printf("Populacao: %d\n" , populacao1); 
        printf("Area total: %.2f\n" ,area1); 
        printf("Pib: %.2f\n" , pib1); 
        printf("Total de pontos turisticos: %d\n" ,pontosturisticos1);
        printf("Densidade populacional: %.2f\n" ,densidade1);
        
        //exibiçao dos dados digitados da segunda cidade
        printf("------Carta %s------\n" , codigo2);
        printf("Estado: %s\n" ,estado2  ); 
        printf("Cidade: %s\n" , cidade2); 
        printf("Populacao: %d\n" , populacao2); 
        printf("Area total: %.2f\n" ,area2); 
        printf("Pib: %.2f\n" , pib2); 
        printf("Total de pontos turisticos: %d\n" ,pontosturisticos2);
        printf("Densidade populacional: %.2f\n" ,densidade2);
        
        //opçoes de comparaçoes a serem escolhidas:
        printf("!!!!!!!!!! Iniciar jogo !!!!!!!!!!\n");
        printf("----- ESCOLHA UMA OPÇAO -----\n");
        printf(" 1-Populaçao\n ");
        printf("2-Area\n ");
        printf("3-Pib\n ");
        printf("4-Pontos turisticos\n ");
        printf("5-Densidade populacional\n ");
        scanf("%d" , &opcao) ;
        

       //comparacoes a serem exibidas de acordo com a opçao escolhida:
   switch (opcao)
   {


   case 1: 

      if ( populacao1 > populacao2 ){
            printf("-----POPULAÇAO-----\n%s : %d X %s : %d\n ---%s venceu!--- " ,cidade1 ,populacao1 , cidade2 , populacao2 ,cidade1 );
        }
         else if ( populacao1 < populacao2){
            printf("-----POPULAÇAO-----\n%s : %d X %s : %d\n ---%s venceu!--- " ,cidade1 ,populacao1 , cidade2 , populacao2 ,cidade2);
         }
         else {
            printf("-----POPULAÇAO-----\n%s : %d X %s : %d\n---empatou!---" ,cidade1 ,populacao1 , cidade2 , populacao2);
         }
        

         break;


   case 2:
         
      if ( area1 > area2 ){
            printf("-----AREA-----\n%s : %.2f X %s : %.2f\n---%s venceu!--- " , cidade1, area1 , cidade2 , area2 , cidade1);
        }
         else if ( area1 < area2){
            printf("-----AREA-----\n%s : %.2f X %s : %.2f\n---%s venceu!--- " , cidade1, area1 , cidade2 , area2 , cidade2);
         }
         else {
            printf("-----AREA-----\n%s : %.2f X %s : %.2f\n---empatou!---" , cidade1, area1 , cidade2 , area2);
         }
           
         break;


   case 3:
      if ( pib1 > pib2 ){
            printf("-----PIB-----\n%s : %.2f X %s : %.2f\n---%s venceu!--- " , cidade1 , pib1 , cidade2 , pib2 , cidade1);
        }
         else if ( pib1 < pib2){
            printf("-----PIB-----\n%s : %.2f X %s : %.2f\n---%s venceu!---" , cidade1 , pib1 , cidade2 , pib2 , cidade2);
         }
         else {
            printf("-----PIB-----\n%s : %.2f X %s : %.2f\n---empatou!---" , cidade1 , pib1 , cidade2 , pib2);
         }
       
            
         break;

   case 4:
      if ( pontosturisticos1 > pontosturisticos2 ){
            printf("-----PONTOS TURISTICOS-----\n%s : %d X %s : %d\n---%s venceu!--- " , cidade1 , pontosturisticos1 , cidade2 , pontosturisticos2 , cidade1);
        }
         else if ( pontosturisticos1 < pontosturisticos2){
            printf("-----PONTOS TURISTICOS-----\n%s : %d X %s : %d\n---%s venceu!---" ,  cidade1 , pontosturisticos1 , cidade2 , pontosturisticos2 , cidade2);
         }
         else {
            printf("-----PONTOS TURISTICOS-----\n%s : %d X %s : %d\n---empatou!---" , cidade1 , pontosturisticos1 , cidade2 , pontosturisticos2);
         }
         
            
            
         break;


   case 5:
      if ( densidade1 > densidade2 ){
            printf("-----DENSIDADE-----\n%s : %.2f X %s : %.2f\n---%s venceu!--- " , cidade1 , densidade1 , cidade2 , densidade2 , cidade2);
        }
         else if (densidade1 < densidade2){
            printf("-----DENSIDADE-----\n%s : %.2f X %s : %.2f\n---%s venceu!---" , cidade1 , densidade1 , cidade2 , densidade2 , cidade1);
         }
         else {
            printf("-----DENSIDADE-----\n%s : %.2f X %s : %.2f\n---empatou!---" ,  cidade1 , densidade1 , cidade2 , densidade2 );
         }
         
            
         break;
            
        
   default:
        printf("Opçao errada!, agora digita tudo de novo kkkskskks  ");
           
        }

        return 0;




 }


    

    