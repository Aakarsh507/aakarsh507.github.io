// Converting PM 2.5 to AQI
//
float conc = 10;//any PM 2.5 concentration value
void setup()
{
  Serial.begin(9600);
   if ((conc >= 0.0) && (conc <= 12.0)){
    float conc_low = 0.0;
    float conc_hi = 12.0;
    float breakp_low = 0;
    float breakp_hi = 50.0;
    float aqi = ((conc - conc_low) / (conc_hi - conc_low) * (breakp_hi - breakp_low) + (breakp_low));
      Serial.println (aqi);
      Serial.println ("Good");
  }
  else if ((conc >= 12.1) && (conc <= 35.4)){
    float conc_low = 12.0;
    float conc_hi = 35.4;
    float breakp_low = 51;
    float breakp_hi = 100;
    float aqi = ((conc - conc_low) / (conc_hi - conc_low) * (breakp_hi - breakp_low) + (breakp_low));
      Serial.println (aqi);
      Serial.println ("Moderate");
  }
  else if ((conc >= 35.5) && (conc <= 55.4)){
    float conc_low = 35.5;
    float conc_hi = 55.4;
    float breakp_low = 101;
    float breakp_hi = 150;
    float aqi = ((conc - conc_low) / (conc_hi - conc_low) * (breakp_hi - breakp_low) + (breakp_low));
      Serial.println (aqi);
      Serial.println ("Unhealthy For Sensitive Groups");
  }
    else if ((conc >= 55.5) && (conc <= 150.4)){
    float conc_low = 55.5;
    float conc_hi = 150.4;
    float breakp_low = 151;
    float breakp_hi = 200;
    float aqi = ((conc - conc_low) / (conc_hi - conc_low) * (breakp_hi - breakp_low) + (breakp_low));
      Serial.println (aqi);
      Serial.println ("Unhealthy");
  }
    else if ((conc >= 150.5) && (conc <= 250.4)){
    float conc_low = 150.5;
    float conc_hi = 250.4;
    float breakp_low = 201;
    float breakp_hi = 300;
    float aqi = ((conc - conc_low) / (conc_hi - conc_low) * (breakp_hi - breakp_low) + (breakp_low));
      Serial.println (aqi);
      Serial.println ("Very Unhealthy");
  }
   else if ((conc >= 250.5) && (conc <= 350.4)){
    float conc_low = 250.5;
    float conc_hi = 350.4;
    float breakp_low = 301;
    float breakp_hi = 400;
    float aqi = ((conc - conc_low) / (conc_hi - conc_low) * (breakp_hi - breakp_low) + (breakp_low));
      Serial.println (aqi);
      Serial.println ("Hazardous");
  }
   else if ((conc >= 350.5) && (conc <= 500.4)){
    float conc_low = 350.5;
    float conc_hi = 500.4;
    float breakp_low = 401;
    float breakp_hi = 500;
    float aqi = ((conc - conc_low) / (conc_hi - conc_low) * (breakp_hi - breakp_low) + (breakp_low));
      Serial.println (aqi);
      Serial.println ("Hazardous");
  }
   else if ((conc >= 500.5) && (conc <= 99999.9)){
    float conc_low = 500.5;
    float conc_hi = 99999.9;
    float breakp_low = 501;
    float breakp_hi = 999;
    float aqi = ((conc - conc_low) / (conc_hi - conc_low) * (breakp_hi - breakp_low) + (breakp_low));
      Serial.println (aqi);
      Serial.println ("Hazardous");
  }
}

void loop()
{
 
}