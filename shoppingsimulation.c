#include<stdio.h>

int main ()
{
	
  int   a;  
  float paramiktari, meyve, sebze, elma, erik, cilek, salatalik, brokoli, enginar, i; //a ve i say�lar� yedek say�d�r, de�erler kilo �zerindendir.
  float elmaf, erikf, cilekf, salatalikf, brokolif, enginarf, meyvef, sebzef, toplam, toplamf, c, s; //cilekf = �ilek bir kilo fiyat�
  
  
 	elmaf =5; //girilen fiyatlar de�i�tirilebilir
  	erikf =8;
  	cilekf =10;
  	salatalikf =6;
  	brokolif =7;
  	enginarf =10;
  
  printf("   MERHABA \n Harcamak istedi�iniz para miktar�n� giriniz: ");
  scanf("%f", &paramiktari);
  
  
  while(paramiktari<=0){  //girdi ge�erlilik s�namas�
  	printf("Ge�ersiz de�er girdiniz tekrar giriniz (l�tfen s�f�r(0) ve negatif say� girmeyiniz): \n");
  	scanf("%f", &paramiktari);
    }
  
  	
		do{
  			printf("S�ras�yla almak istedi�iniz meyve miktar�n�(kilo) giriniz (elma, �ilek, erik)(sonland�rmak i�in -1): \n ");
  			scanf("%f %f %f %d", &elma, &cilek, &erik, &a);
  
  		  }while ( a != -1 );
   
   		do{
  			printf("S�ras�yla almak istedi�iniz sebze miktar�n�(kilo) giriniz (salatalik, brokoli, enginar)(sonland�rmak i�in -1): \n ");
  			scanf("%f %f %f %d", &salatalik, &brokoli, &enginar, &a);
  
  		  }while ( a != -1 );
  
  
   	 meyve = elma + cilek + erik;
   	 sebze = salatalik + brokoli + enginar;
   	 toplam = meyve + sebze;
    
     meyvef = elma*elmaf + cilek*cilekf + erik*erikf;
     sebzef = salatalik*salatalikf + brokoli*brokolif + enginar*enginarf;
     toplamf = meyvef + sebzef;
    
    
    if(paramiktari >= toplamf)
		{
		c = paramiktari - toplamf;  //c artan para miktar�d�r.
    	printf("Yapaca��n�z al��veri�ten artan para miktar�: %.2f \n", c);
   		}
    else 
    	{
   		 i = toplamf - paramiktari; //i alacaklar�n tamam�n�n al�nabilmesi i�in gereken miktar
		 printf("Girdi�iniz para alacaklar�n�z i�in yetersiz. Se�tiklerinizi alabilmeniz i�in gereken miktar: %.2f \n", i);
		 
		 	printf("Para miktar�n� �o�altmak isterseniz 1'e, se�tiklerinizden eksiltmek isterseniz 2'ye bas�n�z: \n");
		 	scanf("%d",&a);
		 	switch(a){
		 		case 1:
		 			printf("Eklemek istedi�iniz miktar� giriniz: \n "); //s sonradan eklenecek olan tutard�r.
		 			scanf("%f", &s);
		 			
		 				for(c = s + paramiktari - toplamf  ; c < 0 ; c = s + paramiktari - toplamf )
						 {
		 					printf("Yetersiz de�er girdiniz, l�tfen tekrar giriniz : \n");
  							scanf("%f", &s);
						 }
						 printf("Yapaca��n�z al��veri�ten artan para miktar�: %.2f \n", c); 
		 			break;
		 			
		 		case 2:
		 		while((c = paramiktari - toplamf)<0){
					
					 do{
  						printf("Eksiltmek istedi�iniz meyve miktar�n� de�i�tirerek giriniz(elma, �ilek, erik)(sonland�rmak i�in -1): \n ");
  						scanf("%f %f %f %d", &elma, &cilek, &erik, &a);
  
  		  			}while ( a != -1 );
   
   					do{
  						printf("Eksiltmek istedi�iniz sebze miktar�n� de�i�tirerek giriniz(salatalik, brokoli, enginar)(sonland�rmak i�in -1): \n ");
  						scanf("%f %f %f %d", &salatalik, &brokoli, &enginar, &a);
  
  					  }while ( a != -1 ); 
  					 
  					meyve = elma + cilek + erik;
   					sebze = salatalik + brokoli + enginar;
   					toplam = meyve + sebze;
    
     				meyvef = elma*elmaf + cilek*cilekf + erik*erikf;
     				sebzef = salatalik*salatalikf + brokoli*brokolif + enginar*enginarf;
     				toplamf = meyvef + sebzef;
     				
     				c = paramiktari - toplamf;
     				
					if(c<0){
					printf("Alacaklar�n�z� fazla girdiniz. L�tfen azaltarak tekrar giriniz. \n");}
					}
     			
     				printf("Yapaca��n�z al��veri�ten artan para miktar�: %.2f \n", c);
		 			
					break;
		 			
		 			
		 		default:
		 			
		 			while( 0<a<3){
		 			printf("Yanl�� de�er girdiniz ! \n"); //girdi ge�erlilik s�namas�
					printf("Para miktar�n� �o�altmak isterseniz 1'i, ald�klar�n�zdan eksiltmek isterseniz 2'yi tu�lay�n�z: \n");
		 			scanf("%d",&a);
		 				switch(a){
		 					case 1:
		 						printf("Eklemek istedi�iniz miktar�n� giriniz: \n "); //s sonradan eklenecek olan tutard�r.
		 						scanf("%f", &s);
		 			
		 							for(c = s + paramiktari - toplamf  ; c < 0 ; c = s + paramiktari - toplamf ){
		 							printf("Yetersiz de�er girdiniz, l�tfen tekrar giriniz : \n");
  									scanf("%f", &s);
									 }		
									 printf("Yapaca��n�z al��veri�ten artan para miktar�: %.2f \n", c); 
		 					break;
		 			
		 					case 2:
		 						while((c = paramiktari - toplamf)<0){
									do{
  										printf("Eksiltmek istedi�iniz meyve miktar�n� de�i�tirerek giriniz(elma, �ilek, erik)(sonland�rmak i�in -1): \n ");
  										scanf("%f %f %f %d", &elma, &cilek, &erik, &a);
  
  		  								}while ( a != -1 );
   
   									do{
  										printf("Eksiltmek istedi�iniz sebze miktar�n� de�i�tirerek giriniz(salatalik, brokoli, enginar)(sonland�rmak i�in -1): \n ");
  										scanf("%f %f %f %d", &salatalik, &brokoli, &enginar, &a);
  
  					  					}while ( a != -1 ); 
  					 
  										meyve = elma + cilek + erik;
   										sebze = salatalik + brokoli + enginar;
   										toplam = meyve + sebze;
    
     									meyvef = elma*elmaf + cilek*cilekf + erik*erikf;
     									sebzef = salatalik*salatalikf + brokoli*brokolif + enginar*enginarf;
     									toplamf = meyvef + sebzef;
     				
     									c = paramiktari - toplamf;
     				
										if(c<0){
										printf("Alacaklar�n�z� fazla girdiniz. L�tfen azaltarak tekrar giriniz. \n");
										}
     							}
     			
     							printf("Yapaca��n�z al��veri�ten artan para miktar�: %.2f \n", c);
		 				
							break;
						}
		 			
		 		}
		 		
		}
	}
	return 0;
}
