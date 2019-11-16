# GPIO_Lib_C
  GPIO_LIB is a extension of WiringPi, it can control low speed peripherial of Ntablet.

# Getting Source Code
1. make sure network is work fine.
2. install git
    ```shell
    apt-get update
    apt-get install git
    ```
3. download library from git
    ```shell
    git clone https://github.com/yeacreate-opensources/wiringNT.git
    ```

# How to Build
```
cd gpio_lib_c
chmod a+x build
sudo ./build
```
It will build specific project you define in build. the default folder are `gpio`, `example`,...
if you create new c file, you need to modify Makefile to compile it.

If you want to build it by gcc directly, you need to add flag `-DYC_NTABLET`.

# Usage
 `gpio readall`
 ```
 +-----+-----+---------+------+---+-Ntablet--+---+------+---------+-----+-----+
 | CPU | wPi |   Name  | Mode | V | Physical | V | Mode | Name    | wPi | CPU |
 +-----+-----+---------+------+---+----++----+---+------+---------+-----+-----+
 |     |     |      5v |      |   |  1 || 2  |   |      | 5v      |     |     |
 |     |     |    3.3v |      |   |  3 || 4  |   |      | GND     |     |     |
 | 252 |   8 |   SDA.1 |  I2C | 1 |  5 || 6  | 1 | I2C  | SCL.1   | 9   | 253 |
 | 160 |  16 |    RxD1 | SERL | 1 |  7 || 8  | 1 | SERL | TxD1    | 15  | 161 |
 |     |     |     GND |      |   |  9 || 10 |   |      | GND     |     |     |
 | 251 |  11 |   CE1.2 |  SPI | 1 | 11 || 12 | 1 | SPI  | CE0.2   | 10  | 255 |
 | 254 |  14 |  SCLK.2 |  SPI | 0 | 13 || 14 | 1 | SPI  | MISO.2  | 13  | 256 |
 | 257 |  12 |  MOSI.2 |  SPI | 0 | 15 || 16 | 1 | IN   | GPIO7B2 | 30  | 226 |
 |     |     | ADC_IN0 |   IN |   | 17 || 18 | 0 | PWM  | PWM.1   | 31  | 217 |
 |     |     | UART2TX |      |   | 19 || 20 |   |      | UART2RX |     |     |
 +-----+-----+---------+------+---+----++----+---+------+---------+-----+-----+
 | CPU | wPi |   Name  | Mode | V | Physical | V | Mode | Name    | wPi | CPU |
 +-----+-----+---------+------+---+-Ntablet--+---+------+---------+-----+-----+

```

# More Information
  You can refer to URL.
