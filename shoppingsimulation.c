#include<stdio.h>

int main ()
{
	
  int   a;  
  float paramiktari, meyve, sebze, elma, erik, cilek, salatalik, brokoli, enginar, i; //a ve i sayýlarý yedek sayýdýr, deðerler kilo üzerindendir.
  float elmaf, erikf, cilekf, salatalikf, brokolif, enginarf, meyvef, sebzef, toplam, toplamf, c, s; //cilekf = Çilek bir kilo fiyatý
  
  
 	elmaf =5; //girilen fiyatlar deðiþtirilebilir
  	erikf =8;
  	cilekf =10;
  	salatalikf =6;
  	brokolif =7;
  	enginarf =10;
  
  printf("   MERHABA \n Harcamak istediðiniz para miktarýný giriniz: ");
  scanf("%f", &paramiktari);
  
  
  while(paramiktari<=0){  //girdi geçerlilik sýnamasý
  	printf("Geçersiz deðer girdiniz tekrar giriniz (lütfen sýfýr(0) ve negatif sayý girmeyiniz): \n");
  	scanf("%f", &paramiktari);
    }
  
  	
		do{
  			printf("Sýrasýyla almak istediðiniz meyve miktarýný(kilo) giriniz (elma, çilek, erik)(sonlandýrmak için -1): \n ");
  			scanf("%f %f %f %d", &elma, &cilek, &erik, &a);
  
  		  }while ( a != -1 );
   
   		do{
  			printf("Sýrasýyla almak istediðiniz sebze miktarýný(kilo) giriniz (salatalik, brokoli, enginar)(sonlandýrmak için -1): \n ");
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
		c = paramiktari - toplamf;  //c artan para miktarýdýr.
    	printf("Yapacaðýnýz alýþveriþten artan para miktarý: %.2f \n", c);
   		}
    else 
    	{
   		 i = toplamf - paramiktari; //i alacaklarýn tamamýnýn alýnabilmesi için gereken miktar
		 printf("Girdiðiniz para alacaklarýnýz için yetersiz. Seçtiklerinizi alabilmeniz için gereken miktar: %.2f \n", i);
		 
		 	printf("Para miktarýný çoðaltmak isterseniz 1'e, seçtiklerinizden eksiltmek isterseniz 2'ye basýnýz: \n");
		 	scanf("%d",&a);
		 	switch(a){
		 		case 1:
		 			printf("Eklemek istediðiniz miktarý giriniz: \n "); //s sonradan eklenecek olan tutardýr.
		 			scanf("%f", &s);
		 			
		 				for(c = s + paramiktari - toplamf  ; c < 0 ; c = s + paramiktari - toplamf )
						 {
		 					printf("Yetersiz deðer girdiniz, lütfen tekrar giriniz : \n");
  							scanf("%f", &s);
						 }
						 printf("Yapacaðýnýz alýþveriþten artan para miktarý: %.2f \n", c); 
		 			break;
		 			
		 		case 2:
		 		while((c = paramiktari - toplamf)<0){
					
					 do{
  						printf("Eksiltmek istediðiniz meyve miktarýný deðiþtirerek giriniz(elma, çilek, erik)(sonlandýrmak için -1): \n ");
  						scanf("%f %f %f %d", &elma, &cilek, &erik, &a);
  
  		  			}while ( a != -1 );
   
   					do{
  						printf("Eksiltmek istediðiniz sebze miktarýný deðiþtirerek giriniz(salatalik, brokoli, enginar)(sonlandýrmak için -1): \n ");
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
					printf("Alacaklarýnýzý fazla girdiniz. Lütfen azaltarak tekrar giriniz. \n");}
					}
     			
     				printf("Yapacaðýnýz alýþveriþten artan para miktarý: %.2f \n", c);
		 			
					break;
		 			
		 			
		 		default:
		 			
		 			while( 0<a<3){
		 			printf("Yanlýþ deðer girdiniz ! \n"); //girdi geçerlilik sýnamasý
					printf("Para miktarýný çoðaltmak isterseniz 1'i, aldýklarýnýzdan eksiltmek isterseniz 2'yi tuþlayýnýz: \n");
		 			scanf("%d",&a);
		 				switch(a){
		 					case 1:
		 						printf("Eklemek istediðiniz miktarýný giriniz: \n "); //s sonradan eklenecek olan tutardýr.
		 						scanf("%f", &s);
		 			
		 							for(c = s + paramiktari - toplamf  ; c < 0 ; c = s + paramiktari - toplamf ){
		 							printf("Yetersiz deðer girdiniz, lütfen tekrar giriniz : \n");
  									scanf("%f", &s);
									 }		
									 printf("Yapacaðýnýz alýþveriþten artan para miktarý: %.2f \n", c); 
		 					break;
		 			
		 					case 2:
		 						while((c = paramiktari - toplamf)<0){
									do{
  										printf("Eksiltmek istediðiniz meyve miktarýný deðiþtirerek giriniz(elma, çilek, erik)(sonlandýrmak için -1): \n ");
  										scanf("%f %f %f %d", &elma, &cilek, &erik, &a);
  
  		  								}while ( a != -1 );
   
   									do{
  										printf("Eksiltmek istediðiniz sebze miktarýný deðiþtirerek giriniz(salatalik, brokoli, enginar)(sonlandýrmak için -1): \n ");
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
										printf("Alacaklarýnýzý fazla girdiniz. Lütfen azaltarak tekrar giriniz. \n");
										}
     							}
     			
     							printf("Yapacaðýnýz alýþveriþten artan para miktarý: %.2f \n", c);
		 				
							break;
						}
		 			
		 		}
		 		
		}
	}
	return 0;
}
