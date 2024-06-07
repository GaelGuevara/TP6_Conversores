#ifdef CONVERSOR_H 
#define CONVERSOR_H 

void DAC_Init();
void ADC_Init();
void DAC_Convertion(int valor);
int ADC_Convertion(int channel);

#endif