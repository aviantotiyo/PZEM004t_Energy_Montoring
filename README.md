# Energi Monitoring Dengan PZEM004T

## Deskripsi
Proyek ini mengintegrasikan sensor PZEM004T dengan layar LCD 16x2 yang menggunakan komunikasi I2C. Sensor PZEM004T digunakan untuk mengukur berbagai parameter listrik seperti tegangan, arus, daya, energi, frekuensi, dan faktor daya. Data yang diperoleh dari sensor ini ditampilkan pada LCD 16x2 untuk pemantauan real-time.

## Fitur
- Membaca data dari sensor PZEM004T.
- Menampilkan hasil pengukuran pada LCD 16x2 dengan I2C.
- Menampilkan parameter berikut: Tegangan, Arus, Daya, Energi, Frekuensi, dan Faktor Daya.

## Komponen yang Dibutuhkan
- Arduino Uno R3
- Sensor PZEM004T
- LCD 16x2 dengan I2C
- Kabel Jumper
- Breadboard (opsional)

## Pinout
### Arduino Uno R3
- **Pin Digital 8**: RX untuk komunikasi dengan PZEM004T
- **Pin Digital 9**: TX untuk komunikasi dengan PZEM004T
- **Pin SDA**: SDA untuk komunikasi dengan LCD 16x2 (biasanya Pin A4 pada Arduino Uno)
- **Pin SCL**: SCL untuk komunikasi dengan LCD 16x2 (biasanya Pin A5 pada Arduino Uno)

### PZEM004T
- **Pin TX**: Terhubung ke Pin RX Arduino (Pin 9)
- **Pin RX**: Terhubung ke Pin TX Arduino (Pin 8)
- **Pin VCC**: Terhubung ke sumber daya 5V
- **Pin GND**: Terhubung ke ground (GND)

### LCD 16x2 dengan I2C
- **Pin SDA**: Terhubung ke Pin SDA Arduino (Pin A4)
- **Pin SCL**: Terhubung ke Pin SCL Arduino (Pin A5)
- **Pin VCC**: Terhubung ke sumber daya 5V
- **Pin GND**: Terhubung ke ground (GND)

## Fungsi
- **Tegangan (Voltage)**: Menampilkan tegangan yang diukur dalam volt.
- **Arus (Current)**: Menampilkan arus yang diukur dalam ampere.
- **Daya (Power)**: Menampilkan daya yang diukur dalam watt.
- **Energi (Energy)**: Menampilkan energi yang dihitung dalam kilowatt-jam (kWh).
- **Frekuensi (Frequency)**: Menampilkan frekuensi dalam Hertz (Hz).
- **Faktor Daya (Power Factor)**: Menampilkan faktor daya.

## Instruksi Penggunaan
1. **Koneksi**:
   - Hubungkan sensor PZEM004T ke Arduino sesuai dengan pinout yang dijelaskan di atas.
   - Hubungkan LCD 16x2 dengan I2C ke Arduino sesuai dengan pinout yang dijelaskan di atas.

2. **Pengaturan**:
   - Pastikan semua koneksi terhubung dengan benar dan stabil.

3. **Kompilasi dan Upload**:
   - Unggah kode ke Arduino menggunakan Arduino IDE.
   - Buka Serial Monitor di Arduino IDE untuk memantau data yang dikirimkan ke Serial.
   - Layar LCD 16x2 akan menampilkan data yang diukur secara real-time.

4. **Pemecahan Masalah**:
   - Jika data tidak muncul di LCD, periksa koneksi I2C dan pastikan alamat I2C LCD sudah benar.
   - Jika data tidak terbaca dengan benar, periksa sambungan dan konfigurasi pin pada sensor PZEM004T.


