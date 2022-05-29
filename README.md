### ♦♦LABVIEW VE ARDUINO İLE GÜVENLİK SİSTEMİ♦♦
|AD|SOYAD|      
|--|--|       
|KENAN|HAS|

|PROJE TESLİM TARİHİ|
|--|
|29.05.2022|

⚡**Proje Amacı:** Bir yem deposuna ait güvenlik sistemi oluşturma.

⚡**Projede Kullanılan Programlar:** LabVIEW ve Arduino

⚡|**Projede Kullanılan Malzemeler**|
|--|--|
|ADET|MALZEME|
|1|Arduino Uno|
|1|HC-SR04 Ultrasonik Mesafe Sensörü|
|2|LED|
||Jumper Kablo|
|3|330 ohm değerinde direnç|
|1|Buzzer|
|1|Breadboard|


⚡**Proje Çalışma Şekli:** Yem deposuna ait kapının mesafe sensörüne 15 santimetreden az kala sistem devreye girer. 
Kırmızı led sensörü ve buzzer aktif duruma geçer. Ayrıca sistem önceden belirtilmiş olan mail hesabına bir uyarı mesajı gönderir. Herhangi bir olumsuz durum gerçekleşmediği takdirde ise yeşil led aktif olarak yanar.  Böylece anlık olarak sistem güç kesilmedikçe aktif durumdadır. Aynı zamanda LabVIEW arayüzünde ultrasonik mesafe sensöründen gelen mesafe bilgileri senkron bir şekilde gözükmektedir.

-Tasarlamış olduğum projeme ait elektronik komponentlerin devre şemasına [devreSemasi](https://www.tinkercad.com/things/68N7dYEIkeI-olcmeenstrumantassyonproje/editel) linkinden ulaşabilirsiniz.

_**📌NOT:**_ Tinkercad için önceden hesabınız yoksa yukarıdaki linke tıklayarak devre şemasına hemen ulaşamayabilirsiniz. Bunun için aşağıda tasarlamış olduğum devre şemama ait görsele ulaşabilirsiniz.

<img src= "https://user-images.githubusercontent.com/98099024/170889192-494766ad-0ab7-48f1-ac65-2eb683b15240.PNG" width="500" height="300">


Projeye ait LabVIEW arayüz tasarımı aşağıdaki gibidir:

<img src="https://user-images.githubusercontent.com/98099024/170889604-82960830-81f0-4192-b7d1-4bac89c6079d.PNG" width="400" height="500">

### ⚡***PROJEYE AİT FARKLI DURUMLARDA LABVIEW ARAYÜZÜ***

1️⃣**1.DURUM**: Mesafe 15 santimetreden büyük olduğu durumdur. Ortamda herhangi bir olumsuz durum olmadığı için yeşil led yanmalıdır. 1. duruma ait görsel aşağıdaki gibidir: 

<img src="https://user-images.githubusercontent.com/98099024/170890761-8a80e6ef-247b-4531-b778-e5300c35b989.PNG" width="400" height="500" >

2️⃣**2.DURUM**: Mesafe 15 santimetreden küçük olduğu durumdur. Ortamda bir olumsuz durum gerçekleştiği için kırmızı uyarı ledi yanmalıdır. 2. duruma ait görsel aşağıdaki gibidir:

<img src="https://user-images.githubusercontent.com/98099024/170891043-8e1620c9-4365-42d9-9ef1-717a3ed5f80e.PNG" width="400" height="500" >

2. durum sonucunda LabVIEW arayüz tasarımında belirtilen mail adresine giden mesaja ait görsel aşağıdaki gibidir:

<img src="https://user-images.githubusercontent.com/98099024/170891192-f4be0864-2b56-4bc7-b549-c3268d630ced.PNG" width="400" height="250">


