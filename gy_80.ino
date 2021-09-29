#include <Wire.h>;
#include <GY80.h>;
 
GY80 sensor = GY80(); //create GY80 instance
 
void setup()
{
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  sensor.begin(); //initialize sensors
}
 
void loop()
{
  GY80_scaled val = sensor.read_scaled(); //get values from all sensors
  // print out values
  Serial.print("Mag:"); //magnetometer values 磁力
  Serial.print(val.m_x, 2);
  Serial.print(',');
  Serial.print(val.m_y, 2);
  Serial.print(',');
  Serial.print(val.m_z, 2);
  Serial.print(' ');
  Serial.print("Acc:"); //accelerometer values 加速度
  Serial.print(val.a_x, 3);
  Serial.print(',');
  Serial.print(val.a_y, 3);
  Serial.print(',');
  Serial.print(val.a_z, 3);
  Serial.print(' ');
  Serial.print("Gyro:"); //gyroscope values 陀螺儀
  Serial.print(val.g_x, 1);
  Serial.print(',');
  Serial.print(val.g_y, 1);
  Serial.print(',');
  Serial.print(val.g_z, 1);
  Serial.print(' ');
  Serial.print("P:"); //pressure values 壓力
  Serial.print(val.p, 5);
  Serial.print(' ');
  Serial.print("T:"); //temperature values 溫度
  Serial.println(val.t, 1);
  delay(250); // delay in between reads for stability
}