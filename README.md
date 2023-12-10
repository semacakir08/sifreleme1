#program hakkında
 
Program girilen mesajı şifrelemeye veya 
deşifrelemeye yarar. 
Mesaj ingiliz alfabesine uygun olmalı ve harf 
dışında başka karakter içermemelidir.
Şifreleme ve deşifreleme yapmak için komut 
seçtikten sonra bir anahtar girmelisiniz. 
Anahtar şifre veya deşifre yapılacak mesajdaki
harflerin her birini alfabeye uygun sırada 
öteleyip mesajı şifrelemeyi veya deşifrelemeyi
sağlar.(sezar şifreleme algoritması)



![42ce718b-ee89-43fc-90ed-f107c8929474](https://github.com/semacakir08/sifreleme/assets/153114298/64f87e33-f71a-422c-9544-0043a05a1530)
![5147f628-c482-47aa-a41b-e230ab8dd1e5](https://github.com/semacakir08/sifreleme/assets/153114298/d38c2403-b78b-4a1d-9e68-bf33e5f5e648)



	#include <stdio.h>
	#include <stdlib.h>
	#include<string.h>
	#include<locale.h>
	#include<ctype.h>
	int main()
	{   //degiskenler tanimlanir.
	int i, x,key;
	char msg[100],ch;
	//girilmek istenen mesaj alinir.
	printf("\nLutfen mesajinizi giriniz:");
	gets(msg);
	//verilmek istenen komut secilir.
	printf("\nLutfen seceneklerden birini seciniz:\n");
	printf("1 = Mesaji sifrele.\n");
	printf("2 = mesaji desifrele.\n");
	scanf("%d", &x);
	//sifrelmek icin bir anahtar degeri girilir.
	printf("Lutfen anahtar giriniz:");
	scanf("%d",&key);
	//mesajin alfabeye uygunlugu kontrol edilir.(mesajin karakterleri alfabede bulunur mu?)
	if(isalpha(msg[i])){
	
	//mesaj sarti saglarsa verilen komuta gore devam edilir.
	switch(x)
	{ //mesaj sifrelenir.(her bir harfi verilen anahtarla toplayip alfabe sirasina gore oteler ve yerin yazdirir.)
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
			printf("sifrelenen mesaj:%s\n",msg);//sifrelenen mesaj yazdirilir.
			break;
		//mesaj desifrelenir.sifrelemeden farkli olarak anahtar harfden cikarilir oteleme ters yonde devam eder.yapilan islemlerin isareti degisir.	
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
			printf("desifrelenen mesaj:%s\n",msg);//desifrelenen mesaj yazdirilir.
			break;
			
	}

	}
	
	else{
		printf("girdiginiz mesaj uygun degil!");//mesaj alfabede olmayan karakter icerdigi icin uyari yazdirilir.
	}
   	return 0;
}





 
