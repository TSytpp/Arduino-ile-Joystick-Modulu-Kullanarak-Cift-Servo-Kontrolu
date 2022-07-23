# Arduino ile Joystick Modülü Kullanarak Çift Servo Kontrolü

[Tolga Soytepe](https://donanimplus.com/p/tolgasoytepe/)

Merhaba arkadaşlar arduino ile projelerimizde oldukça hızlı ilerlemeye çalışıyoruz. Bu yazımızda bir arduino ile joystick kullanarak iki servo nasıl kontrol edilir bunu öğreneceğiz. Eğer joystick kullanımını bilmiyorsanız  [“Arduino ile joystick kullanımı”](https://donanimplus.com/arduino-ile-joystick-kullanimi/)  yazımızda anlatmıştık buradan ayrıca bakabilirsiniz.. 🙂

Bugün ki projemizden bahsedeyim sizlere, joystickle servo kontrolünü nerelerde kullanabiliriz falan işte. 🙂

Bu projeyle robot kol yapılabilir yada rc bir aracınız vardır hani şu benzinlilerin den (Normal uzaktan kumandalı da olur tabiki de 🙂 sadece gaz çubuğu yerine npn bağlamanız gerekir.. ) servonun birini direksiyona birini de gaza bağlayabilirsiniz daha önceki yazımızda da anlattığımız gibi modül içinde pot barındırdığından gaz hassasiyetini rahatlıkla ayarlayabilirsiniz.. Yada bir kepçe yapar kum falan kazarsınız.. Bu size kalmış ama tabi bunları yapabilmeniz için bu proje biraz daha geliştirilmeli diye düşünüyorum mesela kablosuz kontrol edebilmelisiniz. Nasıl yapacağız dediğinizi duyar gibiyim 🙂 ama içiniz rahat olsun bu modülle yapılabilecek bir çok projeyi yapacağız.. Eğer varsa istediğiniz önce şunu yapalım derseniz bize bildirin yapalım 🙂

Çok konuşmadan projeye geçeyim istiyorum.. Galiba sizde öyle 😀

Ben hazır modül almamıştım bildiğiniz üzere (tabi eski yazımızı okuduysanız… ) bu projede onu kullandım. Bence sizde bu tür geri dönüşümler yapmalısınız hem paranızdan tasarruf hemde bu tür hurdaları çalıştırıp kullanabilmek gerçekten güzel bir his veriyor 🙂

Modülün çıkış uçlarını buldum ve jumper kablolar bağladım aşağıda gördüğünüz gibi..![
!\[](https://donanimplus.com/wp-content/uploads/2019/02/20190210_202403-min.webp)
![enter image description here](https://donanimplus.com/wp-content/uploads/2019/02/20190212_190831.webp)

Biraz ilkel ama idare eder. 🙂 Şimdi malzeme lisyesine geçelim.



## Malzeme Listesi

**1-**  Herhangi bir arduino modeli

**2-**  Joystick modülü

**3-**  2 adet servo motor

**4-**  led ve led için direnç 220 Ohm

**5-** PullDown direnci için 10 K direnç

## ARDUİNO İLE JOYSTİCK MODÜLÜ KULLANARAK ÇİFT SERVO KONTROLÜ DEVRE ŞEMASI

Alt tarafta çizdiğimiz devre şemasına bakarak uygun arduino modeline göre devremizi breadboard’umuza kuralım.


![enter image description here](https://donanimplus.com/wp-content/uploads/2019/02/sd-1.webp)
Eğer sizde fark ettiyseniz bu devre bize yazımızda anlattığımız pot ile servo kontrolünü hatırlattı… Hatırlattı değil mi 🙂 Neyse hatırlamadıysanız tekrar okuyabilirsiniz.. Bu proje arduino ile pot servo kontrolünü dahada pekiştireceğiz.

**Minik Not:**  Gördüğünüz üzere devrede iki tane güç kaynağı var önemli olan nokta ise  **GND**  uçları birbirine bağlanmalıdır.
![enter image description here](https://donanimplus.com/wp-content/uploads/2019/02/20190212_190450-min.webp)

Neredeyse unutuyordum gördüğünüz üzere birde puştun dan butonumuz var 🙂 haliyle birde pull down direnci. Sanırsam bunu da  [şu](https://donanimplus.com/arduino-ile-serial-monitorden-buton-okuma/)  yazımızda anlatmıştık. Devre oldukça basit.
Bir yazının daha sonuna geldik umarım faydalı olmuştur.. 
Anlamadığınız veya kafanıza takılan yerler olursa yorumda veya kişisel sosyal medya hesaplarımdan ulaşabilirsiniz.
Kolay gelsin 🙂
