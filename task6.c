#include <stdio.h>
int main() {
float temperature, pressure;
printf("Enter temperature in Celsius: ");
scanf("%f", &temperature);
printf("Enter pressure in PSI: ");
scanf("%f", &pressure);
if (temperature > 100 || pressure > 250) {
printf("Machine Status: Shutdown\n");
}
else if (temperature >= 85 && temperature <= 100 &&
pressure >= 200 && pressure <= 250) {
printf("Machine Status: Warning Mode\n");
}
else {
printf("Machine Status: Normal Operation\n");
}
return 0;
}
