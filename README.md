# Robot Tasarımı Vize Projesi

Bu proje, MH24 robot kolunun kinematik ve dinamik kontrolünü MATLAB ortamında simüle eden çalışmaların toplandığı bir derlemedir. İçinde *MATLAB* modelleri, yapılandırılmış STEP dosyaları ve proje kayıtları yer alır.

## İçindekiler
- `Matlab/`: MATLAB dosyaları, simülasyon modelleri ve yardımcı betikler.
- `sldprt/` & `step/`: Parça modellerinin SolidWorks çıktıları.
- Videolar: Proje sunumlarına ait `.avi` kayıtları.

## Çalıştırma
1. `Matlab/Robot5.slx` modelini MATLAB Simulink'te açın.
2. Gerekli eksen parametrelerini ve PDO bağlantılarını proje betikleri üzerinden kontrol edin.
3. `Matlab/create_MH24_model.m` gibi betikler bu yapılandırmaların otomasyonunu sağlar.

## Görsel
![Robot Simülasyonu](Matlab/Screenshot%202025-11-14%20194719.png)

Herhangi bir soru için MATLAB karakteristik kontrolleri ve simülasyon ayarlarının projede yer alan `Exceptions.log` dosyasındaki açıklamaları inceleyebilirsiniz.
