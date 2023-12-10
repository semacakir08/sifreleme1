#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<locale.h>
#include<ctype.h>
int main()
{   //degiþkenler tanýmlanýr.
	int i, x,key;
	char msg[100],ch;
	//girilmek istenen mesaj alýnýr.
	printf("\nLutfen mesajinizi giriniz:");
	gets(msg);
	//verilmek istenen komut seçilir.
	printf("\nLutfen seceneklerden birini seciniz:\n");
	printf("1 = Mesaji sifrele.\n");
	printf("2 = mesaji desifrele.\n");
	scanf("%d", &x);
	//sifrelmek icin bir anahtar degeri girilir.
	printf("Lutfen anahtar giriniz:");
	scanf("%d",&key);
	//mesajýn alfabeye uygunlugu kontrol edilir.(mesajýn karakterleri alfabede bulunur mu?)
	if(isalpha(msg[i])){
	
	//mesaj sartý saglarsa verilen komuta gore devam edilir.
	switch(x)
	{ //mesaj sifrelenir.(her bir harfi verilen anahtarla toplayýp alfabe sýrasýna gore oteler ve yerin yazdirir.)
		case 1:
			for(i=0 ; msg[i] !='\0'; ++i){
			ch = tolower(msg[i]);//buyuk harfler kucuk harfe dondurulur.
			if(ch>='a' &&  ch<='z'){
				ch=ch+key;
				if(ch > 'z'){//harf ve anahtar toplami z'den buyuk oldugu zaman alfabenin basindan saymaya devam edilip sifrelenir.
					ch=ch-'z'+'a'-1;
				}
			}
			msg[i]=ch;
		
		}
			printf("sifrelenen mesaj:%s\n",msg);//sifrelenen mesaj yazdýrýlýr.
			break;
		//mesaj desifrelenir.sifrelemeden farkli olarak anahtar harfden cikarilir oteleme ters yonde devam eder.yapýlan islemlerin isareti degisir.	
		case 2:
			for(i=0 ; msg[i] !='0'; ++i){
			ch = tolower(msg[i]);
			if(ch>='a' &&  ch<='z'){
				ch=ch-key;
				if(ch < 'a'){
					ch=ch+'z'-'a'+1;
				}
			}
			msg[i]=ch;
		}
			printf("desifrelenen mesaj:%s\n",msg);//desifrelenen mesaj yazdýrýlýr.
			break;
			
	}

	}
	
	else{
		printf("girdiginiz mesaj uygun degil!");//mesaj alfabede olmayan karakter icerdigi icin uyarý yazdýrýlýr.
	}
   
    
   	return 0;
}

